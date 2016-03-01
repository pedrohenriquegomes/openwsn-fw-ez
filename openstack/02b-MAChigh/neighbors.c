#include "opendefs.h"
#include "neighbors.h"
#include "openqueue.h"
#include "packetfunctions.h"
#include "idmanager.h"
#include "openserial.h"
#include "IEEE802154E.h"
#include "sixtop.h"

//=========================== variables =======================================

neighbors_vars_t neighbors_vars;

//=========================== prototypes ======================================

void registerNewNeighbor(
   uint16_t        shortID,
   int8_t          rssi,
   asn_t*          asnTimestamp
);
bool isNeighbor(uint16_t shortID);
void removeNeighbor(uint8_t neighborIndex);
bool isThisRowMatching(
   uint16_t        shortID,
   uint8_t         rowNumber
);

//=========================== public ==========================================

/**
\brief Initializes this module.
*/
void neighbors_init() {
   
   // clear module variables
   memset(&neighbors_vars,0,sizeof(neighbors_vars_t));
   
   // set myDAGrank
   if (idmanager_getIsDAGroot()==TRUE) {
      neighbors_vars.myDAGrank=MINHOPRANKINCREASE;
   } else {
      neighbors_vars.myDAGrank=DEFAULTDAGRANK;
   }
}

//===== getters

/**
\brief Retrieve my current DAG rank.

\returns This mote's current DAG rank.
*/
dagrank_t neighbors_getMyDAGrank() {
   return neighbors_vars.myDAGrank;
}

/**
\brief Retrieve the number of neighbors this mote's currently knows of.

\returns The number of neighbors this mote's currently knows of.
*/
uint8_t neighbors_getNumNeighbors() {
   uint8_t i;
   uint8_t returnVal;
   
   returnVal=0;
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (neighbors_vars.neighbors[i].used==TRUE) {
         returnVal++;
      }
   }
   return returnVal;
}

/**
\brief Retrieve my preferred parent's ID.

\param[out] Parent's ID
*/
uint16_t      neighbors_getPreferredParent(void) {
   uint8_t      i;
   uint16_t     returnID;       // id of preferred parent
   bool         foundPreferred; 
   uint8_t      numNeighbors;
   dagrank_t    minRankVal;
   uint8_t      minRankIdx;     

   // by default, broadcast
   returnID             = BROADCAST_ID;
   foundPreferred       = FALSE;
   numNeighbors         = 0;
   minRankVal           = MAXDAGRANK;
   minRankIdx           = MAXNUMNEIGHBORS+1;

   //===== step 1. Try to find preferred parent
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (neighbors_vars.neighbors[i].used==TRUE){
         if (neighbors_vars.neighbors[i].parentPreference==MAXPREFERENCE) {
            returnID  = neighbors_vars.neighbors[i].shortID;
            foundPreferred=TRUE;
         }
         
         // identify neighbor with lowest rank
         if (neighbors_vars.neighbors[i].DAGrank < minRankVal) {
            minRankVal=neighbors_vars.neighbors[i].DAGrank;
            minRankIdx=i;
         }
         numNeighbors++;
      }
   }
   
   //===== step 2. (backup) Promote neighbor with min rank to preferred parent
   if (foundPreferred==FALSE && numNeighbors > 0){
      // promote neighbor
      neighbors_vars.neighbors[minRankIdx].parentPreference       = MAXPREFERENCE;
      neighbors_vars.neighbors[minRankIdx].stableNeighbor         = TRUE;
      neighbors_vars.neighbors[minRankIdx].switchStabilityCounter = 0;        
   }
   
   return returnID;
}

//===== interrogators

/**
\brief Indicate whether some neighbor is a stable neighbor

\param[in] address The address of the neighbor, a full 128-bit IPv6 addres.

\returns TRUE if that neighbor is stable, FALSE otherwise.
*/
bool neighbors_isStableNeighbor(uint16_t shortID) {
   uint8_t     i;
   bool        returnVal;
   
   // by default, not stable
   returnVal  = FALSE;
   
   // iterate through neighbor table
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (isThisRowMatching(shortID,i) && neighbors_vars.neighbors[i].stableNeighbor==TRUE) {
         returnVal  = TRUE;
         break;
      }
   }
   
   return returnVal;
}

/**
\brief Indicate whether some neighbor is a preferred neighbor.

\param[in] address The EUI64 address of the neighbor.

\returns TRUE if that neighbor is preferred, FALSE otherwise.
*/
bool neighbors_isPreferredParent(uint16_t shortID) {
   uint8_t i;
   bool    returnVal;
   
   INTERRUPT_DECLARATION();
   DISABLE_INTERRUPTS();
   
   // by default, not preferred
   returnVal = FALSE;
   
   // iterate through neighbor table
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (isThisRowMatching(shortID,i) && neighbors_vars.neighbors[i].parentPreference==MAXPREFERENCE) {
         returnVal  = TRUE;
         break;
      }
   }
   
   ENABLE_INTERRUPTS();
   return returnVal;
}

//===== updating neighbor information

/**
\brief Indicate some (non-ACK) packet was received from a neighbor.

This function should be called for each received (non-ACK) packet so neighbor
statistics in the neighbor table can be updated.

The fields which are updated are:
- numRx
- rssi
- asn
- stableNeighbor
- switchStabilityCounter

\param[in] l2_src MAC source address of the packet, i.e. the neighbor who sent
   the packet just received.
\param[in] rssi   RSSI with which this packet was received.
\param[in] asnTs  ASN at which this packet was received.
\param[in] joinPrioPresent Whether a join priority was present in the received
   packet.
\param[in] joinPrio The join priority present in the packet, if any.
*/
void neighbors_indicateRx(
      uint16_t     src,
      int8_t       rssi,
      asn_t*       asnTs
   ) {
   
   uint8_t i;
   bool    newNeighbor;
   
   // update existing neighbor
   newNeighbor = TRUE;
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (isThisRowMatching(src,i)) {
         
         // this is not a new neighbor
         newNeighbor = FALSE;
         
         // update numRx, rssi, asn
         neighbors_vars.neighbors[i].numRx++;
         neighbors_vars.neighbors[i].rssi=rssi;
         memcpy(&neighbors_vars.neighbors[i].asn,asnTs,sizeof(asn_t));
         
         // update stableNeighbor, switchStabilityCounter
         if (neighbors_vars.neighbors[i].stableNeighbor==FALSE) {
            if (neighbors_vars.neighbors[i].rssi>BADNEIGHBORMAXRSSI) {
               neighbors_vars.neighbors[i].switchStabilityCounter++;
               if (neighbors_vars.neighbors[i].switchStabilityCounter>=SWITCHSTABILITYTHRESHOLD) {
                  neighbors_vars.neighbors[i].switchStabilityCounter=0;
                  neighbors_vars.neighbors[i].stableNeighbor=TRUE;
               }
            } else {
               neighbors_vars.neighbors[i].switchStabilityCounter=0;
            }
         } else if (neighbors_vars.neighbors[i].stableNeighbor==TRUE) {
            if (neighbors_vars.neighbors[i].rssi<GOODNEIGHBORMINRSSI) {
               neighbors_vars.neighbors[i].switchStabilityCounter++;
               if (neighbors_vars.neighbors[i].switchStabilityCounter>=SWITCHSTABILITYTHRESHOLD) {
                  neighbors_vars.neighbors[i].switchStabilityCounter=0;
                  neighbors_vars.neighbors[i].stableNeighbor=FALSE;
               }
            } else {
               neighbors_vars.neighbors[i].switchStabilityCounter=0;
            }
         }
         
         // stop looping
         break;
      }
   }
   
   // register new neighbor
   if (newNeighbor==TRUE) {
      registerNewNeighbor(src, rssi, asnTs);
   }
}

/**
\brief Indicate some packet was sent to some neighbor.

This function should be called for each transmitted (non-ACK) packet so
neighbor statistics in the neighbor table can be updated.

The fields which are updated are:
- numTx
- numTxACK
- asn

\param[in] l2_dest MAC destination address of the packet, i.e. the neighbor
   who I just sent the packet to.
\param[in] numTxAttempts Number of transmission attempts to this neighbor.
\param[in] was_finally_acked TRUE iff the packet was ACK'ed by the neighbor
   on final transmission attempt.
\param[in] asnTs ASN of the last transmission attempt.
*/
void neighbors_indicateTx(uint16_t     dest,
                          uint8_t      numTxAttempts,
                          bool         was_finally_acked,
                          asn_t*       asnTs) {
   uint8_t i;
   
   // don't run through this function if packet was sent to broadcast address
   if (dest == BROADCAST_ID) {
      return;
   }
   
   // loop through neighbor table
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (isThisRowMatching(dest,i)) {
         // handle roll-over case
        
          if (neighbors_vars.neighbors[i].numTx>(0xff-numTxAttempts)) {
              neighbors_vars.neighbors[i].numWraps++; //counting the number of times that tx wraps.
              neighbors_vars.neighbors[i].numTx/=2;
              neighbors_vars.neighbors[i].numTxACK/=2;
           }
         // update statistics
        neighbors_vars.neighbors[i].numTx += numTxAttempts; 
        
        if (was_finally_acked==TRUE) {
            neighbors_vars.neighbors[i].numTxACK++;
            memcpy(&neighbors_vars.neighbors[i].asn,asnTs,sizeof(asn_t));
        }
        break;
      }
   }
}

/**
\brief Indicate I just received a EB from a neighbor.

This function should be called for each received EB so neighbor
routing information in the neighbor table can be updated.

The fields which are updated are:
- DAGrank

\param[in] msg The received message with msg->payload pointing to the EB
   header.
*/

void neighbors_indicateRxEB(OpenQueueEntry_t* msg) {
   uint8_t      i;
   eb_ht        *eb_payload;
  
   // take ownership over the packet
   msg->owner = COMPONENT_NEIGHBORS;
   
   // update rank
   eb_payload = (eb_ht*)msg->payload;
   if (isNeighbor(eb_payload->l2_src)==TRUE) {
      for (i=0;i<MAXNUMNEIGHBORS;i++) {
         if (isThisRowMatching(eb_payload->l2_src,i)) {
            if ( eb_payload->ebrank > neighbors_vars.neighbors[i].DAGrank &&
                 eb_payload->ebrank - neighbors_vars.neighbors[i].DAGrank >(DEFAULTLINKCOST*2*MINHOPRANKINCREASE)
               ) {
                // the new DAGrank looks suspiciously high, only increment a bit
                neighbors_vars.neighbors[i].DAGrank += (DEFAULTLINKCOST*2*MINHOPRANKINCREASE);
                openserial_printError(COMPONENT_NEIGHBORS,ERR_LARGE_DAGRANK,
                               (errorparameter_t)eb_payload->ebrank,
                               (errorparameter_t)neighbors_vars.neighbors[i].DAGrank);
            } else {
               neighbors_vars.neighbors[i].DAGrank = eb_payload->ebrank;
            }
            break;
         }
      }
   } 
   
   // update routing info
   neighbors_updateMyDAGrankAndNeighborPreference(); 
}

//===== managing routing info

/**
\brief Update my DAG rank and neighbor preference.

Call this function whenever some data is changed that could cause this mote's
routing decisions to change. Examples are:
- I received a DIO which updated by neighbor table. If this DIO indicated a
  very low DAGrank, I may want to change by routing parent.
- I became a DAGroot, so my DAGrank should be 0.
*/
void neighbors_updateMyDAGrankAndNeighborPreference() {
   uint8_t   i;
   uint16_t  rankIncrease;
   uint32_t  tentativeDAGrank; // 32-bit since is used to sum
   uint8_t   prefParentIdx;
   bool      prefParentFound;
   uint32_t  rankIncreaseIntermediary; // stores intermediary results of rankIncrease calculation
   
   // if I'm a DAGroot, my DAGrank is always MINHOPRANKINCREASE
   if (idmanager_getIsDAGroot()==TRUE) {
       neighbors_vars.myDAGrank=MINHOPRANKINCREASE;
       return;
   }
   
   // reset my DAG rank to max value. May be lowered below.
   neighbors_vars.myDAGrank  = MAXDAGRANK;
   
   // by default, I haven't found a preferred parent
   prefParentFound           = FALSE;
   prefParentIdx             = 0;
   
   // loop through neighbor table, update myDAGrank
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (neighbors_vars.neighbors[i].used==TRUE) {
         
         // reset parent preference
         neighbors_vars.neighbors[i].parentPreference=0;
         
         // we will use numRX + numTxACK because we dont have keep-alive messages
         uint16_t totalRx = neighbors_vars.neighbors[i].numRx + neighbors_vars.neighbors[i].numTxACK;
         // calculate link cost to this neighbor
         if (totalRx == 0) {
            rankIncrease = DEFAULTLINKCOST * 2 * MINHOPRANKINCREASE;
         } else {
            //6TiSCH minimal draft using OF0 for rank computation
            rankIncreaseIntermediary = (((uint32_t)neighbors_vars.neighbors[i].numTx) << 10);
            rankIncreaseIntermediary = (rankIncreaseIntermediary * 2 * MINHOPRANKINCREASE) / ((uint32_t)totalRx);
            rankIncrease = (uint16_t)(rankIncreaseIntermediary >> 10);
         }
         
         tentativeDAGrank = neighbors_vars.neighbors[i].DAGrank + rankIncrease;
         if ( tentativeDAGrank < neighbors_vars.myDAGrank &&
              tentativeDAGrank < MAXDAGRANK) {
            // found better parent, lower my DAGrank
            neighbors_vars.myDAGrank   = tentativeDAGrank;
            prefParentFound            = TRUE;
            prefParentIdx              = i;
         }
      }
   } 
   
   // update preferred parent
   if (prefParentFound) {
      neighbors_vars.neighbors[prefParentIdx].parentPreference       = MAXPREFERENCE;
      neighbors_vars.neighbors[prefParentIdx].stableNeighbor         = TRUE;
      neighbors_vars.neighbors[prefParentIdx].switchStabilityCounter = 0;
   }
}

//===== maintenance

void  neighbors_removeOld(void) {
   uint8_t    i;
   uint16_t   timeSinceHeard;
   
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (neighbors_vars.neighbors[i].used==1) {
         timeSinceHeard = ieee154e_asnDiff(&neighbors_vars.neighbors[i].asn);
         if (timeSinceHeard > DESYNCTIMEOUT) {
            removeNeighbor(i);
         }
      }
   } 
}

//===== debug

/**
\brief Triggers this module to print status information, over serial.

debugPrint_* functions are used by the openserial module to continuously print
status information about several modules in the OpenWSN stack.

\returns TRUE if this function printed something, FALSE otherwise.
*/
bool debugPrint_neighbors() {
   debugNeighborEntry_t temp;
   neighbors_vars.debugRow=(neighbors_vars.debugRow+1)%MAXNUMNEIGHBORS;
   temp.row=neighbors_vars.debugRow;
   temp.neighborEntry=neighbors_vars.neighbors[neighbors_vars.debugRow];
   openserial_printStatus(STATUS_NEIGHBORS,(uint8_t*)&temp,sizeof(debugNeighborEntry_t));
   return TRUE;
}

//=========================== private =========================================

void registerNewNeighbor(
      uint16_t   shortID,
      int8_t     rssi,
      asn_t*     asnTs
   ) {
   
   uint8_t  i,j;
   bool     iHaveAPreferedParent;
   
   // add this neighbor
   if (isNeighbor(shortID)==FALSE) {
      i=0;
      while(i<MAXNUMNEIGHBORS) {
         if (neighbors_vars.neighbors[i].used==FALSE) {
            // add this neighbor
            neighbors_vars.neighbors[i].used                   = TRUE;
            neighbors_vars.neighbors[i].parentPreference       = 0;
            neighbors_vars.neighbors[i].stableNeighbor         = TRUE;
            neighbors_vars.neighbors[i].switchStabilityCounter = 0;
            neighbors_vars.neighbors[i].shortID                = shortID;
            neighbors_vars.neighbors[i].DAGrank                = DEFAULTDAGRANK;
            neighbors_vars.neighbors[i].rssi                   = rssi;
            neighbors_vars.neighbors[i].numRx                  = 1;
            neighbors_vars.neighbors[i].numTx                  = 0;
            neighbors_vars.neighbors[i].numTxACK               = 0;
            memcpy(&neighbors_vars.neighbors[i].asn,asnTs,sizeof(asn_t));
            
            // do I already have a preferred parent ?
            iHaveAPreferedParent = FALSE;
            for (j=0;j<MAXNUMNEIGHBORS;j++) {
               if (neighbors_vars.neighbors[j].parentPreference==MAXPREFERENCE) {
                  iHaveAPreferedParent = TRUE;
               }
            }
            // if I have none, and I'm not DAGroot, the new neighbor is my preferred
            if (iHaveAPreferedParent==FALSE && idmanager_getIsDAGroot()==FALSE) {      
               neighbors_vars.neighbors[i].parentPreference     = MAXPREFERENCE;
            }
            break;
         }
         i++;
      }
      if (i == MAXNUMNEIGHBORS) {
         openserial_printError(COMPONENT_NEIGHBORS,ERR_NEIGHBORS_FULL,
                               (errorparameter_t)MAXNUMNEIGHBORS,
                               (errorparameter_t)0);
         return;
      }
   }
}

bool isNeighbor(uint16_t shortID) {
   uint8_t i=0;
   for (i=0;i<MAXNUMNEIGHBORS;i++) {
      if (isThisRowMatching(shortID,i)) {
         return TRUE;
      }
   }
   return FALSE;
}

void removeNeighbor(uint8_t neighborIndex) {
   neighbors_vars.neighbors[neighborIndex].used                      = FALSE;
   neighbors_vars.neighbors[neighborIndex].parentPreference          = 0;
   neighbors_vars.neighbors[neighborIndex].stableNeighbor            = FALSE;
   neighbors_vars.neighbors[neighborIndex].switchStabilityCounter    = 0;
   neighbors_vars.neighbors[neighborIndex].shortID                   = 0;
   neighbors_vars.neighbors[neighborIndex].DAGrank                   = DEFAULTDAGRANK;
   neighbors_vars.neighbors[neighborIndex].rssi                      = 0;
   neighbors_vars.neighbors[neighborIndex].numRx                     = 0;
   neighbors_vars.neighbors[neighborIndex].numTx                     = 0;
   neighbors_vars.neighbors[neighborIndex].numTxACK                  = 0;
   neighbors_vars.neighbors[neighborIndex].asn.bytes0and1            = 0;
   neighbors_vars.neighbors[neighborIndex].asn.bytes2and3            = 0;
   neighbors_vars.neighbors[neighborIndex].asn.byte4                 = 0;
}

//=========================== helpers =========================================

bool isThisRowMatching(uint16_t shortID, uint8_t rowNumber) {
   return neighbors_vars.neighbors[rowNumber].used &&
          neighbors_vars.neighbors[rowNumber].shortID == shortID;
}
