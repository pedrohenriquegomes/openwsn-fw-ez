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
      case 0xe5a53:
         if (shortID == 0x89a5) {
            returnVal=TRUE;
         }
         break;
      case 0x89a5:
         if (shortID == 0x5a53 ||
             shortID == 0x13cf) {
            returnVal=TRUE;
         }
         break;
      case 0x13cf:
         if (shortID == 0x89a5) {
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