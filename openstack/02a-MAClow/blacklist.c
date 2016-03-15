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
   uint8_t i;
   
   // clear local variables
   memset(&blacklist_vars,0,sizeof(blacklist_vars_t));
   
   // set the default blacklist
   for (i = 0; i < MAXNUMNEIGHBORS; i++)
   {
      blacklist_vars.neighbors[i].usedBlacklists[0].channelMap  = DEFAULT_BLACKLIST;
      blacklist_vars.neighbors[i].usedBlacklists[1].channelMap  = DEFAULT_BLACKLIST;       
      blacklist_vars.neighbors[i].currentBlacklist              = DEFAULT_BLACKLIST; 
   }
   
#ifdef BLACKLIST_TIMEOUT_BASED
   // start periodic timer
   blacklist_vars.timerId = opentimers_start(
                                BLACKLIST_PERIOD_MS,
                                TIMER_PERIODIC,TIME_MS,
                                blacklist_timer_cb
                          );
#endif

#ifdef BLACKLIST_MAB_BASED   
   // set the default blacklist metric to 100
   for (i = 0; i < MAXNUMNEIGHBORS; i++)
   {
      memset(&blacklist_vars.neighbors[i].blacklistMetric, 100, 16);
   }   
#endif
   
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
   uint8_t i;
   
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
   }
   else if (blacklist_vars.neighbors[row].usedBlacklists[1].dsn == dsn) {
      // second entry has DSN
      blacklist_vars.neighbors[row].usedBlacklists[1].channelMap = blacklist_vars.neighbors[row].currentBlacklist;
   }
   else {
      // we do not have an entry with DSN. lets find the oldest entry
      if (blacklist_vars.neighbors[row].oldestBlacklistIdx == 0) i = 0;
      else i = 1;
        
      blacklist_vars.neighbors[row].usedBlacklists[i].dsn = dsn;
      blacklist_vars.neighbors[row].usedBlacklists[i].channelMap = blacklist_vars.neighbors[row].currentBlacklist;
        
      if (i == 0) {
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
void    blacklist_updateBlacklistRxAck(uint16_t address, uint8_t dsn, uint16_t blacklist) {
   
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
      blacklist_vars.neighbors[row].usedBlacklists[0].channelMap = blacklist;
   }
   else if (blacklist_vars.neighbors[row].usedBlacklists[1].dsn == dsn) {
      blacklist_vars.neighbors[row].usedBlacklists[1].channelMap = blacklist;
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
           
   openserial_printInfo(COMPONENT_BLACKLIST, ERR_NEW_BLACKLIST,
                        (errorparameter_t)blacklist,
                        (errorparameter_t)0);

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

/**
\brief Update the current local blacklist for a particular neighbor depending on a packet event. 

\param[in] address The address of the neighbor
\param[in] error E_SUCCESS if packet was received. E_FAIL if packet was not received
\param[in] channel The frequency channel that was used
\param[in] energy RSSI measurement

*/ 
void    blacklist_updateCurrentBlacklist(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy) {
   uint8_t i;
   
   // get the neighbors row
   int8_t row = neighbors_getRow(address);

   if (row == -1) {
      return;
   }

 
#ifdef BLACKLIST_TIMEOUT_BASED
   if (error == E_SUCCESS) {
      // if our blacklist mechanism is based on timeout, let clean the blacklist of this node
      blacklist_vars.neighbors[row].blacklistMetric[channel] = 0;
   }
#endif

#ifdef BLACKLIST_MAB_BASED
   // update the channel metric (reward) with 10% of weight to the new reward ...
   uint8_t new_reward;
   
   if (error == E_SUCCESS) {
      new_reward = 50;
   }
   else {
      new_reward = 0;
   }
   
   // ... and 90% of weight to the old reward
   uint8_t old_reward = blacklist_vars.neighbors[row].blacklistMetric[channel];
   old_reward = (old_reward / 2) * 1; // old_reward * 0.5
   
   blacklist_vars.neighbors[row].blacklistMetric[channel] = old_reward + new_reward;
   
   // clean the current blacklist
   blacklist_vars.neighbors[row].currentBlacklist = 0;
   
   // decide if we are going to 'exploit' or 'explore' the channels
   if (openrandom_get16b()%EXPLORE_MODULUS == 0) {
      // lets explore the bad channels. here the blacklist is reversed (the bad channels are 0s and the good channels are 1s)
     for (i=0; i<16; i++) {
       if (blacklist_vars.neighbors[row].blacklistMetric[i] >= BLACK_THRESHOLD) {
          blacklist_vars.neighbors[row].currentBlacklist |=  (1 << i);
       }
     }
     
     openserial_printError(COMPONENT_BLACKLIST, ERR_EXPLORE_BLACKLIST,
                          (errorparameter_t)blacklist_vars.neighbors[row].currentBlacklist, (errorparameter_t)row);     
   }
   else {
      // lets exploit the good channels. here the blacklist is the normal (the bad channels are 1s and the good channels are 0s)
     for (i=0; i<16; i++) {
       if (blacklist_vars.neighbors[row].blacklistMetric[i] < BLACK_THRESHOLD) {
          blacklist_vars.neighbors[row].currentBlacklist |=  (1 << i);
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
   
#ifdef BLACKLIST_TIMEOUT_BASED  
   if(neighbors_isRowUsed(blacklist_vars.curNeighbor)) {
      blacklist_checkBlacklistPeriodic(blacklist_vars.curNeighbor, BLACK_THRESHOLD, WHITE_THRESHOLD);
   }
   blacklist_vars.curNeighbor = (blacklist_vars.curNeighbor + 1)%MAXNUMNEIGHBORS;
#endif

}