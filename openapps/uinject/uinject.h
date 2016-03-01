#ifndef __UINJECT_H
#define __UINJECT_H

/**
\addtogroup AppUdp
\{
\addtogroup uinject
\{
*/

#include "opentimers.h"

//=========================== define ==========================================

#define UINJECT_PERIOD_MS 5000

//=========================== typedef =========================================

BEGIN_PACK
typedef struct {                                 // always written big endian, i.e. MSB in addr[0]
   uint16_t  type;
   uint16_t  l2_src;
   uint16_t  l2_dst;
   uint16_t  l3_src;
   uint16_t  l3_dst;
   uint8_t   counter;
} uinject_ht;
END_PACK

//=========================== variables =======================================

typedef struct {
   opentimer_id_t       timerId;  // periodic timer which triggers transmission
   uint16_t             counter;  // incrementing counter which is written into the packet
} uinject_vars_t;

//=========================== prototypes ======================================

void uinject_init(void);
void uinject_sendDone(OpenQueueEntry_t* msg, owerror_t error);
void uinject_receive(OpenQueueEntry_t* msg);

/**
\}
\}
*/

#endif
