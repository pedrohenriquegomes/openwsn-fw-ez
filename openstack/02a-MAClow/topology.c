#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

bool topology_isAcceptablePacket(uint16_t shortID) {
#ifdef FORCETOPOLOGY
   bool returnVal;
   
   returnVal=FALSE;
   switch (idmanager_getMyShortID()) {
      case 0x6e29:
         if (
            shortID==0x89a5
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x89a5:
         if (
            shortID==0x6e29||
            shortID==0x13cf
         ) {
         returnVal=TRUE;
      }
      break;
      case 0x13cf:
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
