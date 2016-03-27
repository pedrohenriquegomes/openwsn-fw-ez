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

#ifdef UINJECT_SEND_PERIODIC
   // start periodic timer
   uinject_vars.timerId = opentimers_start(
                                UINJECT_PERIOD_MS,
                                TIMER_PERIODIC,TIME_MS,
                                uinject_timer_cb
                          );
#endif
   
}

void uinject_sendDone(OpenQueueEntry_t* msg, owerror_t error) {
   openqueue_freePacketBuffer(msg);
}

void uinject_receive(OpenQueueEntry_t* pkt) {
   OpenQueueEntry_t    *fwd;
   uinject_ht          *pkt_payload, *fwd_payload;
   
   // get the received packet payload
   pkt_payload = (uinject_ht*)(pkt->payload);
   
   if (pkt_payload->l3_dst != idmanager_getMyShortID()) {
       // need to forward the packet
     
      fwd = openqueue_getFreePacketBuffer(COMPONENT_UINJECT);
      if (fwd==NULL) {
         openserial_printError(COMPONENT_UINJECT, ERR_NO_FREE_PACKET_BUFFER,
                              (errorparameter_t)0, (errorparameter_t)0);
         return;
      }
      
      fwd->owner                                   = COMPONENT_UINJECT;
      fwd->creator                                 = COMPONENT_UINJECT;
      fwd->l2_nextORpreviousHop.type               = ADDR_16B;
      uint16_t nextHop                             = neighbors_getPreferredParent();
      fwd->l2_nextORpreviousHop.addr_16b[0]        = (uint8_t)(nextHop&0xff);
      fwd->l2_nextORpreviousHop.addr_16b[1]        = (uint8_t)(nextHop>>8);
   
      // fill fwd payload
      packetfunctions_reserveHeaderSize(fwd, sizeof(uinject_ht));
      fwd_payload               = (uinject_ht*)(fwd->payload);
      fwd_payload->l2_hdr.type  = LONGTYPE_DATA;
      fwd_payload->l2_hdr.src   = idmanager_getMyShortID();
      fwd_payload->l2_hdr.dst   = nextHop;
      fwd_payload->l3_src       = pkt_payload->l3_src;
      fwd_payload->l3_dst       = pkt_payload->l3_dst;
      fwd_payload->counter      = pkt_payload->counter;
      fwd_payload->asn0         = pkt_payload->asn0;
      fwd_payload->asn1         = pkt_payload->asn1;
      fwd_payload->asn2         = pkt_payload->asn2;
      fwd_payload->asn3         = pkt_payload->asn3;
      memset(&fwd_payload->filling,'F',PAYLOAD_FILLING);
      
      //openserial_printInfo(COMPONENT_UINJECT, ERR_UINJECT_FWD, 
      //                      (errorparameter_t)pkt_payload->l3_src, (errorparameter_t)pkt_payload->l3_dst);
      
      if ((sixtop_send(fwd))==E_FAIL) {
         openqueue_freePacketBuffer(fwd);
      }
   }
   else {
      // just process the packet  
      
      uint8_t asn[5];   // we create a local array to store the ASN from the rcv packet
      asn[0] = 0;                       // byte4
      asn[1] = pkt_payload->asn2;       // bytes2and3
      asn[2] = pkt_payload->asn3;       // bytes2and3
      asn[3] = pkt_payload->asn0;       // bytes0and1
      asn[4] = pkt_payload->asn1;       // bytes0and1
        
      uint32_t asnDiff = ieee154e_asnDiff((asn_t *)asn);
       
      //openserial_printInfo(COMPONENT_UINJECT, ERR_UINJECT_RCV, 
      //                     (errorparameter_t)pkt_payload->l3_src, (errorparameter_t)asnDiff);
   }
   
   // pkt will be destroyed by sixtop
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
   uinject_ht*          payload;
   
   // don't run if not synch
   if (ieee154e_isSynch() == FALSE) return;
   
#ifdef UINJECT_SEND_PERIODIC
   // don't run on dagroot
   if (idmanager_getIsDAGroot()) {
      opentimers_stop(uinject_vars.timerId);
      return;
   }
#endif
   
   // if you get here, send a packet
   
   // get a free packet buffer
   pkt = openqueue_getFreePacketBuffer(COMPONENT_UINJECT);
   if (pkt==NULL) {
      openserial_printError(COMPONENT_UINJECT, ERR_NO_FREE_PACKET_BUFFER, 
                            (errorparameter_t)0, (errorparameter_t)0);
      return;
   }
   
   pkt->owner                                   = COMPONENT_UINJECT;
   pkt->creator                                 = COMPONENT_UINJECT;
   pkt->l2_nextORpreviousHop.type               = ADDR_16B;
   uint16_t nextHop                             = neighbors_getPreferredParent();
   pkt->l2_nextORpreviousHop.addr_16b[0]        = (uint8_t)(nextHop&0xff);
   pkt->l2_nextORpreviousHop.addr_16b[1]        = (uint8_t)(nextHop>>8);
   
   // fill payload
   packetfunctions_reserveHeaderSize(pkt ,sizeof(uinject_ht));
   payload              = (uinject_ht*)(pkt->payload);
   payload->l2_hdr.type = LONGTYPE_DATA;
   payload->l2_hdr.src  = idmanager_getMyShortID();
   payload->l2_hdr.dst  = nextHop;
   payload->l3_src      = idmanager_getMyShortID();
   payload->l3_dst      = SINK_ID;
   payload->counter     = uinject_vars.counter++;
   
   // get the current ASN
   uint8_t curAsn[5];
   ieee154e_getAsn(curAsn);
   payload->asn0        = curAsn[0];
   payload->asn1        = curAsn[1];
   payload->asn2        = curAsn[2];
   payload->asn3        = curAsn[3];
   memset(&payload->filling,'S',PAYLOAD_FILLING);
   
   //openserial_printInfo(COMPONENT_UINJECT, ERR_UINJECT_SND, 
   //                     (errorparameter_t)payload->l3_dst, (errorparameter_t)payload->counter);
   
   if ((sixtop_send(pkt))==E_FAIL) {
      openqueue_freePacketBuffer(pkt);
   }
}