#include "opendefs.h"
#include "schedule.h"

void getExtSchedule(uint16_t addr, uint8_t timeslot_offset, extScheduleEntry_t *extScheduleEntry)
{
   switch (addr) {
      case 0x6ce6:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xf361;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xcf11;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x4ffa;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x5890;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6658;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x50f4;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xedbc;
               break;
            default:
               break;
         }
         break;
      case 0xedbc:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            default:
               break;
         }
         break;
      case 0x50f4:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x6658:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x5890:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4ffa:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xcf11:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xf361:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x6300:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      default:
         break;
   }
}
