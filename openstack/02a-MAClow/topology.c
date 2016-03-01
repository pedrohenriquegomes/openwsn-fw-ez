#include "opendefs.h"
#include "topology.h"
#include "idmanager.h"

//=========================== defines =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== public ==========================================

/**
\brief Force a topology.

This function is used to force a certain topology, by hard-coding the list of
acceptable neighbors for a given mote. This function is invoked each time a
packet is received. If it returns FALSE, the packet is silently dropped, as if
it were never received. If it returns TRUE, the packet is accepted.

\param[in] shortAddr The shortID

\return TRUE if the packet can be received.
\return FALSE if the packet should be silently dropped.
*/
bool topology_isAcceptablePacket(uint16_t shortID) {
#ifdef FORCETOPOLOGY
   bool returnVal;
   
   returnVal=FALSE;
   switch (idmanager_getMyShortID()) {
      case 0xed4f:
         if (shortID == 0x66) {
            returnVal=TRUE;
         }
         break;
      case 0xecf2:
         if (shortID == 0xdf ||
             shortID == 0x4f) {
            returnVal=TRUE;
         }
         break;
      case 0xecf5:
         if (shortID == 0xecf2) {
            returnVal=TRUE;
         }
         break;   
   }
   return returnVal;
#else
   return TRUE;
#endif
}

//=========================== private =========================================