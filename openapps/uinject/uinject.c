#include "opendefs.h"
#include "uinject.h"
#include "openqueue.h"
#include "opentimers.h"
#include "openserial.h"
#include "packetfunctions.h"
#include "neighbors.h"
#include "scheduler.h"
#include "IEEE802154E.h"
#include "idmanager.h"
#include "sixtop.h"

//=========================== variables =======================================

uinject_vars_t uinject_vars;

//=========================== prototypes ======================================

void uinject_timer_cb(opentimer_id_t id);
void uinject_task_cb(void);

//=========================== public ==========================================

void uinject_init() {
   
   // clear local variables
   memset(&uinject_vars,0,sizeof(uinject_vars_t));
   
   // start periodic timer
   uinject_vars.timerId                    = opentimers_start(
      UINJECT_PERIOD_MS,
      TIMER_PERIODIC,TIME_MS,
      uinject_timer_cb
   );
}

void uinject_sendDone(OpenQueueEntry_t* msg, owerror_t error) {
   openqueue_freePacketBuffer(msg);
}

void uinject_receive(OpenQueueEntry_t* pkt) {
   
   openserial_printError(
      COMPONENT_UINJECT,
      ERR_RCVD_ECHO_REPLY,
      (errorparameter_t)0,
      (errorparameter_t)0
   );
}

//=========================== private =========================================

/**
\note timer fired, but we don't want to execute task in ISR mode instead, push
   task to scheduler with CoAP priority, and let scheduler take care of it.
*/
void uinject_timer_cb(opentimer_id_t id){
   
   scheduler_push_task(uinject_task_cb,TASKPRIO_COAP);
}

void uinject_task_cb() {
   OpenQueueEntry_t*    pkt;
   
   // don't run if not synch
   if (ieee154e_isSynch() == FALSE) return;
   
   // don't run on dagroot
   if (idmanager_getIsDAGroot()) {
      opentimers_stop(uinject_vars.timerId);
      return;
   }
   
   // if you get here, send a packet
   
   // get a free packet buffer
   pkt = openqueue_getFreePacketBuffer(COMPONENT_UINJECT);
   if (pkt==NULL) {
      openserial_printError(
         COMPONENT_UINJECT,
         ERR_NO_FREE_PACKET_BUFFER,
         (errorparameter_t)0,
         (errorparameter_t)0
      );
      return;
   }
   
   pkt->owner                                   = COMPONENT_UINJECT;
   pkt->creator                                 = COMPONENT_UINJECT;
   pkt->l2_nextORpreviousHop.type               = ADDR_16B;
   uint16_t nextHop = neighbors_getPreferredParent();
   pkt->l2_nextORpreviousHop.addr_16b[0]        = (uint8_t)(nextHop&0xff);
   pkt->l2_nextORpreviousHop.addr_16b[1]        = (uint8_t)(nextHop>>8);
   
   // fill payload
   packetfunctions_reserveHeaderSize(pkt,sizeof(uinject_ht));
   ((uinject_ht*)(pkt->payload))->type        = LONGTYPE_DATA;
   ((uinject_ht*)(pkt->payload))->src         = idmanager_getMyShortID();
   ((uinject_ht*)(pkt->payload))->dst         = SINK_ID;
   ((uinject_ht*)(pkt->payload))->nextHop     = nextHop;
   ((uinject_ht*)(pkt->payload))->counter     = uinject_vars.counter++;
   
   if ((sixtop_send(pkt))==E_FAIL) {
      openqueue_freePacketBuffer(pkt);
   }
}