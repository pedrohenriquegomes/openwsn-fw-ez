#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

bool topology_isAcceptablePacket(uint16_t shortID) {
#ifdef FORCETOPOLOGY
   bool returnVal;
   
   returnVal=FALSE;
   switch (idmanager_getMyShortID()) {
      case 0x6ce6:
         if (
            shortID==0xedbc||
            shortID==0x50f4||
            shortID==0x6658||
            shortID==0x5890||
            shortID==0x4ffa||
            shortID==0xcf11||
            shortID==0xf361||
            shortID==0x6300||
            shortID==0x79b6||
            shortID==0x62b9
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xedbc:
         if (
            shortID==0x6ce6||
            shortID==0x52c3
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x50f4:
         if (
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6658:
         if (
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x5890:
         if (
            shortID==0x6ce6||
            shortID==0x4da3
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4ffa:
         if (
            shortID==0x6ce6||
            shortID==0x76e7
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xcf11:
         if (
            shortID==0x6ce6||
            shortID==0xf078
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xf361:
         if (
            shortID==0x6ce6||
            shortID==0xcdeb
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6300:
         if (
            shortID==0x6ce6||
            shortID==0x4d6a||
            shortID==0x46a3||
            shortID==0x41c9
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x79b6:
         if (
            shortID==0x6ce6||
            shortID==0x81fc||
            shortID==0x4baa||
            shortID==0x7233
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x62b9:
         if (
            shortID==0x6ce6||
            shortID==0x5517||
            shortID==0x4527
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xf078:
         if (
            shortID==0xcf11||
            shortID==0x4d35
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x5517:
         if (
            shortID==0x62b9
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x52c3:
         if (
            shortID==0xedbc||
            shortID==0x44ea
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4baa:
         if (
            shortID==0x79b6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x76e7:
         if (
            shortID==0x4ffa||
            shortID==0x5966||
            shortID==0xea5d||
            shortID==0xf23f
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xcdeb:
         if (
            shortID==0xf361||
            shortID==0x667e||
            shortID==0x1d33||
            shortID==0x6fb1
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x81fc:
         if (
            shortID==0x79b6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x1d33:
         if (
            shortID==0xcdeb
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4d6a:
         if (
            shortID==0x6300||
            shortID==0xe886||
            shortID==0x4d05
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x7233:
         if (
            shortID==0x79b6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4527:
         if (
            shortID==0x62b9||
            shortID==0x117a
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x46a3:
         if (
            shortID==0x6300
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4da3:
         if (
            shortID==0x5890||
            shortID==0x7f43||
            shortID==0x6449
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x41c9:
         if (
            shortID==0x6300
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x44ea:
         if (
            shortID==0x52c3||
            shortID==0xb6c8
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xe886:
         if (
            shortID==0x4d6a
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x510e:
         if (
            shortID==0x7f43
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xb6c8:
         if (
            shortID==0x44ea
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4d05:
         if (
            shortID==0x4d6a
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xe61f:
         if (
            shortID==0x7f43
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x667e:
         if (
            shortID==0xcdeb
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x7f43:
         if (
            shortID==0x4da3||
            shortID==0x510e||
            shortID==0xe61f
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6449:
         if (
            shortID==0x4da3
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x117a:
         if (
            shortID==0x4527
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x5966:
         if (
            shortID==0x76e7
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4d35:
         if (
            shortID==0xf078
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6fb1:
         if (
            shortID==0xcdeb
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xea5d:
         if (
            shortID==0x76e7
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xf23f:
         if (
            shortID==0x76e7
         ) {
         returnVal=TRUE;
      }
      break;
   }
   return returnVal;
#else
   return TRUE;
#endif
}
