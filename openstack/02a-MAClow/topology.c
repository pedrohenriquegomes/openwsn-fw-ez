#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

bool topology_isAcceptablePacket(uint16_t shortID) {
#ifdef FORCETOPOLOGY
   bool returnVal;
   
   returnVal=FALSE;
   switch (idmanager_getMyShortID()) {
      case 0xed4f:
         if (
            shortID==0xecf2
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xecf2:
         if (
            shortID==0xed4f ||
            shortID==0xecf5
         ) {
         returnVal=TRUE;
      }
      break;
      case 0xecf5:
         if (
            shortID==0xecf2
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
