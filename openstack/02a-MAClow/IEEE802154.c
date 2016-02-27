#include "opendefs.h"
#include "IEEE802154.h"
#include "IEEE802154E.h"
#include "processIE.h" 
#include "packetfunctions.h"
#include "idmanager.h"
#include "openserial.h"
#include "topology.h"

//=========================== define ==========================================

#define TerminationIE_Length           2
// the header ternimation IE when payload IE follows header. 
// length(b0~b6):0   ID(b7~b14):0x7E   type(b15): 0
#define Header_PayloadIE_TerminationIE 0x3F00

// the header ternimation IE when payload follows header.
// length(b0~b6):0   ID(b7~b14):0x7F   type(b15): 0
#define Header_Payload_TerminationIE   0x3F80

// the payload ternimation IE when payload follows payloadIE.
// length(b0~b10):0   ID(b11~b14):0x0F   type(b15): 1
#define Payload_TerminationIE         0xF800

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== public ==========================================

//=========================== private =========================================
