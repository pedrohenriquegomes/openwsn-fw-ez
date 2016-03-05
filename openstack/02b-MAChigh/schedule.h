#ifndef __SCHEDULE_H
#define __SCHEDULE_H

/**
\addtogroup MAChigh
\{
\addtogroup Schedule
\{
*/

#include "opendefs.h"

//=========================== define ==========================================

/**
\brief The length of the superframe, in slots.

The superframe repears over time and can be arbitrarly long.
*/
#define SLOTFRAME_LENGTH     53         // this should be ideally a prime number in order to spread EBs in all channels
#define NUM_EB_SLOTS         3

#define NUM_TXRX_SLOTS       34
#define NUM_UNICAST_SLOTS    0

#define MAXACTIVESLOTS       (NUM_EB_SLOTS + NUM_TXRX_SLOTS + NUM_UNICAST_SLOTS)

//=========================== typedef =========================================

typedef uint8_t    channelOffset_t;
typedef uint16_t   slotOffset_t;
typedef uint16_t   frameLength_t;

typedef enum {
   CELLTYPE_OFF              = 0,
   CELLTYPE_TX               = 1,
   CELLTYPE_RX               = 2,
   CELLTYPE_TXRX             = 3,
   CELLTYPE_EB               = 4
} cellType_t;

typedef struct {
   cellType_t      type;
   uint16_t        channelMask;
   uint16_t	   neighbor;
} extScheduleEntry_t;

typedef struct {
   slotOffset_t    slotOffset;
   cellType_t      type;
   bool            shared;   
   uint8_t         channelOffset;
   uint16_t        neighbor;   
   uint8_t         numRx;
   uint8_t         numTx;
   uint8_t         numTxACK;   
   asn_t           lastUsedAsn;
   void*           next;
} scheduleEntry_t;

BEGIN_PACK
typedef struct {
   uint8_t         row;
   slotOffset_t    slotOffset;
   uint8_t         channelOffset;
   uint8_t         type;
   uint8_t         numRx;
   uint8_t         numTx;
   asn_t           lastUsedAsn;
} debugScheduleEntry_t;
END_PACK

//=========================== variables =======================================

typedef struct {
   scheduleEntry_t  scheduleBuf[MAXACTIVESLOTS];
   scheduleEntry_t* currentScheduleEntry;
   uint8_t          debugPrintRow;
} schedule_vars_t;

//=========================== prototypes ======================================

// admin
void               schedule_init(void);
bool               debugPrint_schedule(void);

// from 6top
owerror_t schedule_addActiveSlot(
   slotOffset_t    slotOffset,
   cellType_t      type,
   bool            shared,
   channelOffset_t channelOffset,
   uint16_t        neighbor
);

// from IEEE802154E
void               schedule_syncSlotOffset(slotOffset_t targetSlotOffset);
void               schedule_advanceSlot(void);
slotOffset_t       schedule_getNextActiveSlotOffset(void);
cellType_t         schedule_getType(void);
uint16_t           schedule_getNeighbor(void);
channelOffset_t    schedule_getChannelOffset(void);

void               schedule_indicateRx(
   asn_t*   asnTimestamp
);
void               schedule_indicateTx(
   asn_t*    asnTimestamp,
   bool      unused
);

void getExtSchedule(uint16_t addr, uint8_t timeslot_offset, extScheduleEntry_t *extScheduleEntry);

/**
\}
\}
*/
          
#endif
