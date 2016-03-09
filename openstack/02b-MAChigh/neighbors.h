#ifndef __NEIGHBORS_H
#define __NEIGHBORS_H

/**
\addtogroup MAChigh
\{
\addtogroup Neighbors
\{
*/
#include "opendefs.h"

//=========================== define ==========================================

#define MAXNUMNEIGHBORS           15
#define AVERAGEDEGREE             15
#define MAXPREFERENCE             2
#define BADNEIGHBORMAXRSSI        -70 // dBm
#define GOODNEIGHBORMINRSSI       -80 // dBm
#define SWITCHSTABILITYTHRESHOLD  3
#define DEFAULTLINKCOST           15

#define MAXDAGRANK                0xffff
#define DEFAULTDAGRANK            MAXDAGRANK
#define MINHOPRANKINCREASE        10

//=========================== typedef =========================================

BEGIN_PACK
typedef struct {
   uint8_t         dsn;
   uint16_t        channelMap; // bitmap of 0s (good channels) and 1s (bad channels)
} blacklistEntry_t;
END_PACK

BEGIN_PACK
typedef struct {
   bool                 used;
   uint8_t              parentPreference;
   bool                 stableNeighbor;
   uint8_t              switchStabilityCounter;
   uint16_t             shortID;
   dagrank_t            DAGrank;
   int8_t               rssi;
   uint8_t              numRx;
   uint8_t              numTx;
   uint8_t              numTxACK;
   uint8_t              numWraps;    //number of times the tx counter wraps. can be removed if memory is a restriction. also check openvisualizer then.
   asn_t                asn;
   uint16_t             currentBlacklist;       // the current local blacklist for that neighbor. this is not necessarily the blacklist that we are using
   // since we may have not yet negotiated with the neighbor. this is the blacklist that should be updated every sucessful or failed packet reception
   blacklistEntry_t     usedBlacklists[2];      // these are the blacklists currently being used. we need two because we only switch to the newest when
   // we get a confirmation from the neighbor. the confirmation comes when we receive a packet with newer DSN
   uint8_t              oldestBlacklistIdx;        // either 0 or 1 (index of the oldest blacklist).
   uint8_t              blacklistCounter[16];      // counter that is used for counting the number of Rx packets in every channel
   
} neighborRow_t;
END_PACK

BEGIN_PACK
typedef struct {
   uint8_t         row;
   neighborRow_t   neighborEntry;
} debugNeighborEntry_t;
END_PACK

BEGIN_PACK
typedef struct {
   uint8_t         last_addr_byte;   // last byte of the neighbor's address
   int8_t          rssi;
   uint8_t         parentPreference;
   dagrank_t       DAGrank;
   uint16_t        asn; 
} netDebugNeigborEntry_t;
END_PACK

//=========================== module variables ================================
   
typedef struct {
   neighborRow_t        neighbors[MAXNUMNEIGHBORS];
   dagrank_t            myDAGrank;
   uint8_t              debugRow;
} neighbors_vars_t;

//=========================== prototypes ======================================

void          neighbors_init(void);

// getters
dagrank_t     neighbors_getMyDAGrank(void);
uint8_t       neighbors_getNumNeighbors(void);

// blacklist
void 	      neighbors_updateBlacklistTxData(uint16_t address, uint8_t dsn);
void 	      neighbors_updateBlacklistRxAck(uint16_t address, uint8_t dsn, uint16_t blacklist);
void 	      neighbors_updateBlacklistRxData(uint16_t address, uint8_t dsn, uint8_t channel);
uint16_t      neighbors_getUsedBlacklist(uint16_t address, bool oldest);
uint16_t      neighbors_getCurrentBlacklist(uint16_t address);
void          neighbors_updateCurrentBlacklist(uint16_t address, owerror_t error, uint8_t channel, uint8_t energy);
void          neighbors_checkBlacklist(uint8_t neighborRow, uint8_t blackThreshold, uint8_t whiteThreshold);

// interrogators
bool          neighbors_isStableNeighbor(uint16_t shortID);
bool          neighbors_isPreferredParent(uint16_t shortID);
uint16_t      neighbors_getPreferredParent(void);

// updating neighbor information
void          neighbors_indicateRx(
   uint16_t             src,
   int8_t               rssi,
   asn_t*               asnTs
);
void          neighbors_indicateTx(
   uint16_t             dest,
   uint8_t              numTxAttempts,
   bool                 was_finally_acked,
   asn_t*               asnTimestamp
);
void          neighbors_indicateRxEB(
   OpenQueueEntry_t*    msg
);

// managing routing info
void          neighbors_updateMyDAGrankAndNeighborPreference(void);
// debug
bool          debugPrint_neighbors(void);

/**
\}
\}
*/

#endif
