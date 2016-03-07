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
            shortID==0x6300
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xedbc:
         if (
            shortID==0x6ce6
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
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x4ffa:
         if (
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xcf11:
         if (
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xf361:
         if (
            shortID==0x6ce6
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6300:
         if (
            shortID==0x6ce6
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
