#ifndef __UINJECT_H
#define __UINJECT_H

/**
\addtogroup AppUdp
\{
\addtogroup uinject
\{
*/

#include "opentimers.h"
#include "sixtop.h"

//=========================== define ==========================================

// uinject tx policy
//#define UINJECT_SEND_PERIODIC             // uinject will send packets periodically
#define UINJECT_SEND_ONE_PER_SLOTFRAME    // uinject will send one packet per slotframe

#ifdef UINJECT_SEND_PERIODIC
   #define UINJECT_PERIOD_MS 1000          // uinject period in ms
#endif

#ifdef UINJECT_SEND_ONE_PER_SLOTFRAME
#endif

#define PAYLOAD_FILLING       20

//=========================== typedef =========================================

BEGIN_PACK
typedef struct {                                 // always written big endian, i.e. MSB in addr[0]
   l2_ht     l2_hdr;                             // 7 bytes
   uint16_t  l3_src;
   uint16_t  l3_dst;
   uint16_t  counter;
   uint8_t   asn0;
   uint8_t   asn1;
   uint8_t   asn2;
   uint8_t   asn3;                              // 10 bytes
   uint8_t   filling[PAYLOAD_FILLING];                          
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
void uinject_task_cb(void);

/**
\}
\}
*/

#endif
