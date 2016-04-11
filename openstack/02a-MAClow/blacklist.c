#include "blacklist.h"
#include "openserial.h"
#include "openrandom.h"

//=========================== variables =======================================

blacklist_vars_t blacklist_vars;

//=========================== prototypes ======================================

void blacklist_timer_cb(opentimer_id_t id);
void blacklist_task_cb(void);

//=========================== public ==========================================

/**
\brief Initializes this module.
*/
void blacklist_init() {
   uint8_t i, j;
   
   // clear local variables
   memset(&blacklist_vars,0,sizeof(blacklist_vars_t));
   
   // set the default blacklist
   for (i = 0; i < MAXNUMNEIGHBORS; i++)
   {
      blacklist_vars.neighbors[i].usedBlacklists[0].channelMap  = DEFAULT_BLACKLIST;
      blacklist_vars.neighbors[i].usedBlacklists[1].channelMap  = DEFAULT_BLACKLIST;       
      blacklist_vars.neighbors[i].currentBlacklist              = DEFAULT_BLACKLIST;
   }
   
#ifdef BLACKLIST_TIMEOUT
   // start periodic timer
   blacklist_vars.timerId = opentimers_start(
                                BLACKLIST_PERIOD_MS,
                                TIMER_PERIODIC,TIME_MS,
                                blacklist_timer_cb
                          );
#endif

#ifdef BLACKLIST_MAB
   // set the chosen policy
   blacklist_vars.mab_policy = MAB_POLICY;
   
   // set the default blacklist metric to 100
   for (i = 0; i < MAXNUMNEIGHBORS; i++)
   {
      memset(&blacklist_vars.neighbors[i].blacklistMetric, 100, 16);
      
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (j = 0; j < 16; j++){
            blacklist_vars.neighbors[i].usedBlacklists[0].channelRank[j]  = j;
            blacklist_vars.neighbors[i].usedBlacklists[1].channelRank[j]  = j;
         }
      }
   }   
   
   // start periodic timer
   blacklist_vars.timerId = opentimers_start(
                                BLACKLIST_MAB_PERIOD_MS,
                                TIMER_PERIODIC,TIME_MS,
                                blacklist_timer_cb
                          );
   
   blacklist_vars.epsilon = EXPLORE_MODULUS;
#endif
}

void    blacklist_reset(uint8_t neighborRow) {
   uint8_t i, j;
   
   // clean the neighbor info
   memset(&blacklist_vars.neighbors[neighborRow], 0, sizeof(blacklistNeighborRow_t));
   
   // set the default blacklist
   blacklist_vars.neighbors[neighborRow].usedBlacklists[0].channelMap  = DEFAULT_BLACKLIST;
   blacklist_vars.neighbors[neighborRow].usedBlacklists[1].channelMap  = DEFAULT_BLACKLIST;       
   blacklist_vars.neighbors[neighborRow].currentBlacklist              = DEFAULT_BLACKLIST;
  
#ifdef BLACKLIST_MAB
   // set the default blacklist metric to 100
   for (i = 0; i < MAXNUMNEIGHBORS; i++) {
      memset(&blacklist_vars.neighbors[i].blacklistMetric, 100, 16);
      
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (j = 0; j < 16; j++){
            blacklist_vars.neighbors[i].usedBlacklists[0].channelRank[j]  = j;
            blacklist_vars.neighbors[i].usedBlacklists[1].channelRank[j]  = j;
         }
      }
   }   
#endif  
}

void    blacklist_resetAll(void) {
   uint8_t i;
   
   for (i = 0; i < MAXNUMNEIGHBORS; i++) {
      blacklist_reset(i);
   }
}

/**
\brief It is executed when I am a child and will send a data packet and will wait for the blacklist from my parent
       I need to check if I already have DSN in my list. If so, do nothing. If not, delete the entry not in use and create a new one
       with DSN and empty blacklist

\param[in] address The address of the neighbor.
\param[in] dsn The Data Sequence Number

*/
void    blacklist_updateBlacklistTxData(uint16_t address, uint8_t dsn) {
   uint8_t i;
  
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      openserial_printError(COMPONENT_BLACKLIST, ERR_INVALID_NEIGHBOR,
                            (errorparameter_t)address, (errorparameter_t)0);
      return;
   }
   
   INTERRUPT_DECLARATION();
   DISABLE_INTERRUPTS();

   // if we dont have a blacklist for our DSN
   if (blacklist_vars.neighbors[row].usedBlacklists[0].dsn != dsn &&
       blacklist_vars.neighbors[row].usedBlacklists[1].dsn != dsn) {
          
      // check which is the current blacklist being used
      if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 0) i = 0;
      else i = 1;
        
      blacklist_vars.neighbors[row].usedBlacklists[i].dsn = dsn;
      // I do not change the channelMap because it may be reused for restransmissions of the same packet
   }
   
   ENABLE_INTERRUPTS();
}

/**
\brief This function is executed when I receive a data packet and will send my most recent blacklist
       into the next ACK (that I am sending). I need to check if I alredy have DSN in my list. 
       If so, I update with the most recent blacklist; if not, I delete the oldest entry and create a new one 
       (with DSN and the most recent local blacklist)

\param[in] address The address of the neighbor.
\param[in] dsn The Data Sequence Number

*/
void blacklist_updateBlacklistRxData(uint16_t address, uint8_t dsn, uint8_t channel) {
   uint8_t i, j;
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      openserial_printError(COMPONENT_BLACKLIST, ERR_INVALID_NEIGHBOR,
                            (errorparameter_t)address, (errorparameter_t)1);
      return;
   }
   
   INTERRUPT_DECLARATION();
   DISABLE_INTERRUPTS();
      
   if (blacklist_vars.neighbors[row].usedBlacklists[0].dsn == dsn) {
      // first entry has DSN  
      blacklist_vars.neighbors[row].usedBlacklists[0].channelMap = blacklist_vars.neighbors[row].currentBlacklist;
      
#ifdef BLACKLIST_MAB
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (i = 0; i < 16; i++) {
              blacklist_vars.neighbors[row].usedBlacklists[0].channelRank[i] = blacklist_vars.neighbors[row].currentRank[i];
         }
      }
#endif      
      
   }
   else if (blacklist_vars.neighbors[row].usedBlacklists[1].dsn == dsn) {
      // second entry has DSN
      blacklist_vars.neighbors[row].usedBlacklists[1].channelMap = blacklist_vars.neighbors[row].currentBlacklist;
      
#ifdef BLACKLIST_MAB
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (i = 0; i < 16; i++) {
              blacklist_vars.neighbors[row].usedBlacklists[1].channelRank[i] = blacklist_vars.neighbors[row].currentRank[i];
         }
      }
#endif            
      
   }
   else {
      // we do not have an entry with DSN. lets find the oldest entry
      if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 0) j = 0;
      else j = 1;
        
      blacklist_vars.neighbors[row].usedBlacklists[j].dsn = dsn;
      blacklist_vars.neighbors[row].usedBlacklists[j].channelMap = blacklist_vars.neighbors[row].currentBlacklist;
      
#ifdef BLACKLIST_MAB
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (i = 0; i < 16; i++) {
              blacklist_vars.neighbors[row].usedBlacklists[j].channelRank[i] = blacklist_vars.neighbors[row].currentRank[i];
         }
      }
#endif            
        
      if (j == 0) {
         blacklist_vars.neighbors[row].oldestBlacklistIdx = 1;
      }
      else {
         blacklist_vars.neighbors[row].oldestBlacklistIdx = 0;
      }
   }
   ENABLE_INTERRUPTS();
}

/**
\brief This function is executed when I receive an ACK packet and need to update the neighbors blacklist
       I should already have an entry with the corresponding DSN

\param[in] address The address of the neighbor.
\param[in] dsn The Data Sequence Number
\param[in] blacklist Received blacklist

*/ 
void    blacklist_updateBlacklistRxAck(uint16_t address, uint8_t dsn, uint16_t blacklist, uint8_t *channelRank) {
   bool newBlacklist = FALSE;
   uint8_t i;
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      openserial_printError(COMPONENT_BLACKLIST, ERR_INVALID_NEIGHBOR,
                           (errorparameter_t)address, (errorparameter_t)2);
      return;
   }

   INTERRUPT_DECLARATION();
   DISABLE_INTERRUPTS();
      
   // found the entries for address. One entry should have DSN and it need to be updated
   if (blacklist_vars.neighbors[row].usedBlacklists[0].dsn == dsn) {
      if (blacklist_vars.neighbors[row].usedBlacklists[0].channelMap != blacklist) {
         blacklist_vars.neighbors[row].usedBlacklists[0].channelMap = blacklist;
         newBlacklist = TRUE;
      }
      
#ifdef BLACKLIST_MAB
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (i = 0; i < 16; i++, channelRank++) {
              blacklist_vars.neighbors[row].usedBlacklists[0].channelRank[i] = *channelRank;
         }
      }
#endif
   }
   else if (blacklist_vars.neighbors[row].usedBlacklists[1].dsn == dsn) {
      if (blacklist_vars.neighbors[row].usedBlacklists[1].channelMap != blacklist) {  
         blacklist_vars.neighbors[row].usedBlacklists[1].channelMap = blacklist;
         newBlacklist = TRUE;
      }
      
#ifdef BLACKLIST_MAB
      if (blacklist_vars.mab_policy == BEST_ARM) {
         for (i = 0; i < 16; i++) {
              blacklist_vars.neighbors[row].usedBlacklists[1].channelRank[i] = *channelRank++;
         }
      }
#endif
   }
   else {
      openserial_printError(COMPONENT_BLACKLIST,ERR_WRONG_DSN,
                           (errorparameter_t)dsn,
                           (errorparameter_t)0);
   }
         
   // now we update which is the old blacklist
   if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 0) {
      blacklist_vars.neighbors[row].oldestBlacklistIdx = 1;
   }
   else {
      blacklist_vars.neighbors[row].oldestBlacklistIdx = 0;
   }
           
   if (newBlacklist) {
      openserial_printInfo(COMPONENT_BLACKLIST, ERR_NEW_BLACKLIST,
                          (errorparameter_t)blacklist,
                          (errorparameter_t)0);
   }
   
   ENABLE_INTERRUPTS();
}

/**
\brief Get one of the two blacklist that should be used with a particular neighbor

\param[in] address The address of the neighbor
\param[in] oldest TRUE is the oldest blakclist, FALSE if the newest

\returns The used blacklist
*/ 
uint16_t        blacklist_getUsedBlacklist(uint16_t address, bool oldest) {
   uint8_t i;   // the blacklist index
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      return 0;
   }

   if (oldest == TRUE) {
      i = blacklist_vars.neighbors[row].oldestBlacklistIdx;
   }
   else
   {
      if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 1) {
         i = 0;  
      }
      else {
         i = 1;
      }
   }
   
   return blacklist_vars.neighbors[row].usedBlacklists[i].channelMap;
}

uint8_t*        blacklist_getUsedRank(uint16_t address, bool oldest) {
   uint8_t i;   // the blacklist index
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      return 0;
   }

   if (oldest == TRUE) {
      i = blacklist_vars.neighbors[row].oldestBlacklistIdx;
   }
   else
   {
      if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 1) {
         i = 0;  
      }
      else {
         i = 1;
      }
   }
   
   return blacklist_vars.neighbors[row].usedBlacklists[i].channelRank;
}

/**
\brief Get the current local blacklist for a particular neighbor

\param[in] address The address of the neighbor

\returns The current blacklist
*/ 
uint16_t        blacklist_getCurrentBlacklist(uint16_t address) {
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      openserial_printError(COMPONENT_BLACKLIST, ERR_INVALID_NEIGHBOR,
                            (errorparameter_t)address, (errorparameter_t)3);
      return 0;
   }
   
   return blacklist_vars.neighbors[row].currentBlacklist;  
}

uint8_t*        blacklist_getCurrentRank(uint16_t address) {
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);
   
   if (row == -1) {
      openserial_printError(COMPONENT_BLACKLIST, ERR_INVALID_NEIGHBOR,
                            (errorparameter_t)address, (errorparameter_t)3);
      return 0;
   }
   
   return blacklist_vars.neighbors[row].currentRank;  
}

port_INLINE     uint8_t blacklist_getMABPolicy(void) {
#ifdef BLACKLIST_MAB  
   return blacklist_vars.mab_policy;
#else
   return 0;
#endif
}

/**
\brief Update the current local blacklist for a particular neighbor depending on a packet event. 

\param[in] address The address of the neighbor
\param[in] error E_SUCCESS if packet was received. E_FAIL if packet was not received
\param[in] channel The frequency channel that was used
\param[in] energy RSSI measurement

*/ 
void    blacklist_updateCurrentBlacklist(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy) {
   uint8_t i, j;
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);

   if (row == -1) {
      return;
   }

   // print status
   if (error == E_SUCCESS) {
      openserial_printError(COMPONENT_BLACKLIST,ERR_UPDATE_SUCCESS_REWARD,
                           (errorparameter_t)channel,(errorparameter_t)row);
   }
   else {
      openserial_printError(COMPONENT_BLACKLIST,ERR_UPDATE_FAILED_REWARD,
                           (errorparameter_t)channel,(errorparameter_t)row);
   }
   
#ifdef BLACKLIST_DISABLED
   return;
#endif

#ifdef BLACKLIST_TIMEOUT
   if (error == E_SUCCESS) {
      // if our blacklist mechanism is based on timeout, let clean the blacklist of this node
      blacklist_vars.neighbors[row].blacklistMetric[channel] = 0;
   }
#endif

#ifdef BLACKLIST_MAB
   // update the channel metric (reward) with weight ALPHA_WEIGHT to the new reward ...
   uint8_t new_reward;
   
   if (error == E_SUCCESS) {
      new_reward = ALPHA_WEIGHT; // 1.0 * ALPHA_WEIGHT
      
      // reset the number of packets missed in a row
      blacklist_vars.neighbors[row].n_missed_pkts = 0;
   }
   else {
      new_reward = 0;           // 0 * ALPHA_WEIGHT
      
      // detect if we missed too many packets in a row
      if (blacklist_vars.neighbors[row].n_missed_pkts++ > N_MAX_MISSED) {
         openserial_printError(COMPONENT_BLACKLIST,ERR_BLACKLIST_DESYNC,
                     (errorparameter_t)row,(errorparameter_t)0);
         blacklist_reset(row);
         return;
      }
   }
   
   // ... and (100 - ALPHA_WEIGHT) of weight to the old reward
   uint16_t old_reward = blacklist_vars.neighbors[row].blacklistMetric[channel];
   old_reward = (old_reward * (100 - ALPHA_WEIGHT)) / 100; // old_reward * (100 - ALPHA_WEIGHT)
   
   blacklist_vars.neighbors[row].blacklistMetric[channel] = (uint8_t)old_reward + new_reward;
      
   // sort the channel in non-decreasing order of metric
   uint8_t sorted_channels[16];
   memset(&sorted_channels,0,16);
   
   for (i=0; i<16; i++) {
     bool placing = TRUE; 
     uint8_t moving_ch = 0;
     uint8_t cur_metric = blacklist_vars.neighbors[row].blacklistMetric[i];
     for (j=0; j<16; j++) {
       if (placing) {
         // we initialy find the place to put the current channel (i)
         if (blacklist_vars.neighbors[row].blacklistMetric[sorted_channels[j]] >= cur_metric) {
            placing = FALSE;
            moving_ch = sorted_channels[j];
            sorted_channels[j] = i;
         }
         else {
            if (j >= i) {
               sorted_channels[j] = i;
               break;
            }
         }
       }
       else { 
          // then we move all other channel to the right
          uint8_t aux_ch = sorted_channels[j];
          sorted_channels[j] = moving_ch;
          moving_ch = aux_ch;
       }
       if (j >= i) {
          break;
       }
     }
   }
   
   // we set all channels in the blacklist and then clean the ones our arms will evaluate
   blacklist_vars.neighbors[row].currentBlacklist = 0xffff;
   
   // decide if we are going to 'exploit' or 'explore' the channels
   if (openrandom_get16b()%blacklist_vars.epsilon == 0) {
      // lets explore all channels
     blacklist_vars.neighbors[row].currentBlacklist = 0;
     
     if (blacklist_vars.mab_policy == BEST_ARM) {
        for (j = 0; j < 16; j++) {
           blacklist_vars.neighbors[row].currentRank[j] = j;     
        }
     }
     
     openserial_printError(COMPONENT_BLACKLIST, ERR_EXPLORE_BLACKLIST,
                          (errorparameter_t)blacklist_vars.neighbors[row].currentBlacklist, (errorparameter_t)row);     
   }
   else {
      // lets exploit the good channels. we clean the channel that our arm will evaluate, the N_ARMS best channels
     for (i=(16-N_ARMS); i<16; i++) {
       blacklist_vars.neighbors[row].currentBlacklist &= ~(1 << sorted_channels[i]);
     }
     
     if (blacklist_vars.mab_policy == BEST_ARM) {
        for (i = 0; i < 16; i++) {
           blacklist_vars.neighbors[row].currentRank[sorted_channels[i]] = i;     
        }     
     }
   }
#endif  
   
}

/**
\brief Increments the blacklist metric and check if it reached the limits. If it is larger than whiteThreshold, reset to 0
       If it is larger than blackThreshold, set the channel as Blacked

\param[in] neighborRow The neighbor to be analysed
\param[in] blackThreshold The lower counter to consider a channel as Blacked
\param[in] whiteThreshold The upper limit to reset the channel as White

*/ 
void   blacklist_checkBlacklistPeriodic(uint8_t neighborRow, uint8_t blackThreshold, uint8_t whiteThreshold) {
   uint8_t i;
  
   INTERRUPT_DECLARATION();
   DISABLE_INTERRUPTS();  
   
   for (i=0; i<16; i++) {
      // increment the counter and go back to zero when reaches whiteThreshold
      blacklist_vars.neighbors[neighborRow].blacklistMetric[i] = (blacklist_vars.neighbors[neighborRow].blacklistMetric[i]+1)%whiteThreshold;  
       
      // update the blacklist
      if (blacklist_vars.neighbors[neighborRow].blacklistMetric[i] > blackThreshold) {
         blacklist_vars.neighbors[neighborRow].currentBlacklist |= (1 << i);
      }
      else {
         blacklist_vars.neighbors[neighborRow].currentBlacklist &= ~(1 << i);
      }
   }
   
   ENABLE_INTERRUPTS();
}

//=========================== private ==========================================

/**
\note timer fired, but we don't want to execute task in ISR mode instead, push
   task to scheduler with CoAP priority, and let scheduler take care of it.
*/
void blacklist_timer_cb(opentimer_id_t id){
   scheduler_push_task(blacklist_task_cb,TASKPRIO_COAP);
}

void blacklist_task_cb() {
   
#ifdef BLACKLIST_TIMEOUT
   if(neighbors_isRowUsed(blacklist_vars.curNeighbor)) {
      blacklist_checkBlacklistPeriodic(blacklist_vars.curNeighbor, BLACK_THRESHOLD, WHITE_THRESHOLD);
   }
   blacklist_vars.curNeighbor = (blacklist_vars.curNeighbor + 1)%MAXNUMNEIGHBORS;
#endif

#ifdef BLACKLIST_MAB
   if (++blacklist_vars.epsilon == EXPLORE_MODULUS_MAX) {
      blacklist_vars.epsilon = EXPLORE_MODULUS;
   }
#endif
   
}