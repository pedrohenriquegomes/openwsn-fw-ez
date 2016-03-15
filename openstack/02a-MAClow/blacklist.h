#ifndef __BLACKLIST_H
#define __BLACKLIST_H

/**
\addtogroup MAClow
\{
\addtogroup blacklist
\{
*/

#include "opendefs.h"
#include "neighbors.h"
#include "scheduler.h"
#include "opentimers.h"
#include "neighbors.h"

//=========================== define ==========================================

// **** Set the BLACKLIST type here
//#define BLACKLIST_TIMEOUT_BASED         // if blacklist mechanism is based on timeouts 
#define BLACKLIST_MAB_BASED             // if blacklist mechanism is based on Multi-armed bandit

#ifdef BLACKLIST_TIMEOUT_BASED
   #define BLACKLIST_PERIOD_MS     (1000/MAXNUMNEIGHBORS)    // we check each neighbor every 1 second
   #define BLACK_THRESHOLD                             60    // when the counter reaches this values the channel is considered bad
   #define WHITE_THRESHOLD                            240    // when the channel should be reset to the good state              
#endif

#ifdef BLACKLIST_MAB_BASED
   #define EXPLORE_MODULUS        16       // the 8 worst channels will be explored every (1/EXPLORE_MODULUS) time slots
   #define BLACK_THRESHOLD        80      // the threshold (in PDR) to be considered for blacking a channel
#endif

#define DEFAULT_BLACKLIST         0x0000

//=========================== typedef =========================================

BEGIN_PACK
typedef struct {
   uint8_t         dsn;
   uint16_t        channelMap; // bitmap of 0s (good channels) and 1s (bad channels)
} blacklistEntry_t;
END_PACK

BEGIN_PACK
typedef struct {
   uint16_t             currentBlacklist;       // the current local blacklist for that neighbor. this is not necessarily the blacklist that we are using
   // since we may have not yet negotiated with the neighbor. this is the blacklist that should be updated every sucessful or failed packet reception
   blacklistEntry_t     usedBlacklists[2];      // these are the blacklists currently being used. we need two because we only switch to the newest when
   // we get a confirmation from the neighbor. the confirmation comes when we receive a packet with newer DSN
   uint8_t              oldestBlacklistIdx;        // either 0 or 1 (index of the oldest blacklist).
   uint8_t              blacklistMetric[16];       // this metric is used for including or removing a channel from the blacklist. Its meaning depends on the type
   // of blacklist mechanism being used (timeout-based or MAB-based)  
} blacklistNeighborRow_t;
END_PACK

//=========================== variables =======================================

typedef struct {
   opentimer_id_t               timerId;                        // periodic timer which checks the channels
   uint8_t                      curNeighbor;
   uint8_t                      counter;                        // counts the number of times the timer fired
   blacklistNeighborRow_t       neighbors[MAXNUMNEIGHBORS];     // blacklist information for each neighbor
} blacklist_vars_t;

//=========================== prototypes ======================================

void            blacklist_init(void);
void 	        blacklist_updateBlacklistTxData(uint16_t address, uint8_t dsn);
void 	        blacklist_updateBlacklistRxAck(uint16_t address, uint8_t dsn, uint16_t blacklist);
void 	        blacklist_updateBlacklistRxData(uint16_t address, uint8_t dsn, uint8_t channel);
uint16_t        blacklist_getUsedBlacklist(uint16_t address, bool oldest);
uint16_t        blacklist_getCurrentBlacklist(uint16_t address);
void            blacklist_updateCurrentBlacklist(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy);
void            blacklist_checkBlacklistPeriodic(uint8_t neighborRow, uint8_t blackThreshold, uint8_t whiteThreshold);

/**
\}
\}
*/

#endif
