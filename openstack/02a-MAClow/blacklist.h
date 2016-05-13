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

// Blacklist types
#define BLACKLIST_DISABLED              0 // if blacklist is disabled
#define BLACKLIST_TIMEOUT               1 // if blacklist is based on timeouts 
#define BLACKLIST_MAB_FIRST_BEST_ARM    2 // if blacklist is based on Multi-armed with first best arm pulled
#define BLACKLIST_MAB_BEST_ARM          3 // if blacklist is based on Multi-armed with best arm pulled

#define BLACKLIST_TIMEOUT_PERIOD_MS     (1000/MAXNUMNEIGHBORS)    // we check each neighbor every 1 second
#define BLACK_THRESHOLD                 60    // when the counter reaches this values the channel is considered bad
#define WHITE_THRESHOLD                 240    // when the channel should be reset to the good state              

enum {
   FIRST_BEST_ARM              = 0,
   BEST_ARM                    = 1,
};

#define BLACKLIST_MAB_PERIOD_MS      10000
#define ALPHA_WEIGHT                 20      // weight for the new reward (should vary from 0 to 100). This weight is used in the exponential moving average
#define EXPLORE_MODULUS              20      // the N_ARMS worst channels will be explored every (1/EXPLORE_MODULUS) trials
#define EXPLORE_MODULUS_MAX          100
#define N_ARMS                       6       // the number of channels that will be considered, either for exploiting or for exploring
#define N_MAX_MISSED                 15      // max number of packets missed in a row before detecting desync of blacklist

// For general blacklist
#define DEFAULT_BLACKLIST               0x0000

#define BLACKLIST_TYPE                  BLACKLIST_MAB_BEST_ARM

//=========================== typedef =========================================

BEGIN_PACK
typedef struct {
   uint8_t         dsn;  
   uint16_t        channelMap;          // bitmap of 0s (good channels) and 1s (bad channels)
   uint8_t         channelRank[16];     // rank of quality of each channel (to be used by BEST_ARM)
} blacklistEntry_t;
END_PACK

BEGIN_PACK
typedef struct {
   uint16_t             currentBlacklist;       // the current local blacklist for that neighbor. this is not necessarily the blacklist that we are using
   // since we may have not yet negotiated with the neighbor. this is the blacklist that should be updated every sucessful or failed packet reception
   uint8_t              currentRank[16];
   blacklistEntry_t     usedBlacklists[2];      // these are the blacklists currently being used. we need two because we only switch to the newest when
   // we get a confirmation from the neighbor. the confirmation comes when we receive a packet with newer DSN
   uint8_t              oldestBlacklistIdx;     // either 0 or 1 (index of the oldest blacklist).
   uint8_t              blacklistMetric[16];    // this metric is used for including or removing a channel from the blacklist. Its meaning depends on the type
   // of blacklist mechanism being used (timeout-based or MAB-based)
   uint8_t              n_missed_pkts;          // number of packets missed in a row. Used for detecting desync of blacklist
} blacklistNeighborRow_t;
END_PACK

//=========================== variables =======================================

typedef struct {
   uint8_t                      blacklist_type; 
   opentimer_id_t               timerId;                        // periodic timer which checks the channels
   uint8_t                      curNeighbor;
   uint8_t                      counter;                        // counts the number of times the timer fired
   uint8_t                      epsilon;
   uint8_t                      random_channel_rank[16];
   blacklistNeighborRow_t       neighbors[MAXNUMNEIGHBORS];     // blacklist information for each neighbor
} blacklist_vars_t;

//=========================== prototypes ======================================

void            blacklist_init(void);
void            blacklist_reset(uint8_t neighborRow);
void            blacklist_resetAll(void);
void 	        blacklist_updateBlacklistTxData(uint16_t address, uint8_t dsn);
void 	        blacklist_updateBlacklistRxAck(uint16_t address, uint8_t dsn, uint16_t blacklist, uint8_t *rank);
void 	        blacklist_updateBlacklistRxData(uint16_t address, uint8_t dsn, uint8_t channel);
uint16_t        blacklist_getUsedBlacklist(uint16_t address, bool oldest);
uint8_t*        blacklist_getUsedRank(uint16_t address, bool oldest);
uint16_t        blacklist_getCurrentBlacklist(uint16_t address);
uint8_t         blacklist_getBlacklistType(void);
void            blacklist_updateCurrentBlacklistRx(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy);
void            blacklist_updateCurrentBlacklistTx(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy);
void            blacklist_checkBlacklistPeriodic(uint8_t neighborRow, uint8_t blackThreshold, uint8_t whiteThreshold);

/**
\}
\}
*/

#endif
