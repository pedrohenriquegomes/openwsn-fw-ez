#include "opendefs.h"
#include "schedule.h"

void getExtSchedule(uint16_t addr, uint8_t timeslot_offset, extScheduleEntry_t *extScheduleEntry)
{
   switch (addr) {
      case 0xed4f:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xecf2;
               return;
            case 2:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xecf2;
               return;
            default:
               break;
         }
         break;
      case 0xecf2:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xed4f;
               return;
            case 1:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xecf5;
               return;
            case 2:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xed4f;
               return;
            default:
               break;               
         }
         break;
      case 0xecf5:
         switch(timeslot_offset) {
            case 1:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 0xffff;
               extScheduleEntry->neighbor = 0xecf2;
               return;
            default:
               break;
         }
         break;
      default:
         break;
   }
   extScheduleEntry->type = CELLTYPE_OFF;
   extScheduleEntry->channelMask = 0;
   extScheduleEntry->neighbor = 0;
}
