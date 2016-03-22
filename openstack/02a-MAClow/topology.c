#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

bool topology_isAcceptablePacket(uint16_t shortID) {
#ifdef FORCETOPOLOGY
   bool returnVal;
   
   returnVal=FALSE;
   switch (idmanager_getMyShortID()) {
      case 0x5a53:
         if (
            shortID==0x89a5
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x89a5:
         if (
            shortID==0x5a53 ||
            shortID==0x6e29
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x6e29:
         if (
            shortID==0x89a5
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
