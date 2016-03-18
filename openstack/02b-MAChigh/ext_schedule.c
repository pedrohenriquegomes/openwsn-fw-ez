#include "opendefs.h"
#include "schedule.h"

void getExtSchedule(uint16_t addr, uint8_t timeslot_offset, extScheduleEntry_t *extScheduleEntry)
{
   switch (addr) {
      case 0x6ce6:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 1:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x62b9;
               break;
            case 2:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 3:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 4:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xf361;
               break;
            case 5:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0xcf11;
               break;
            case 6:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x4ffa;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x5890;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6658;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x50f4;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xedbc;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6658;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x52c3;
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 7:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
            case 8:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 13;
               extScheduleEntry->neighbor = 0x4da3;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
               extScheduleEntry->channelMask = 14;
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
               extScheduleEntry->channelMask = 4;
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x4d6a;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x81fc;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x76e7;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0xf078;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x4d6a;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x79b6:
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x4527;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0xcdeb;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x5517;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x62b9:
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xf078:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x5517:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x52c3:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
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
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0xf23f;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0xea5d;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x4d35;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 6;
               extScheduleEntry->neighbor = 0x5966;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x41c9;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x7233;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x1d33;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x4baa;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0xea5d;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 12;
               extScheduleEntry->neighbor = 0x6ce6;
               break;
            default:
               break;
         }
         break;
      case 0x4baa:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x76e7:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xcdeb:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x81fc:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x1d33:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4d6a:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 6;
               extScheduleEntry->neighbor = 0xb6c8;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x7233:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4527:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x79b6;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x46a3:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x4d05;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xe886;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xe886;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 9;
               extScheduleEntry->neighbor = 0x6300;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4da3:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 13;
               extScheduleEntry->neighbor = 0x6658;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x41c9:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x44ea:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x117a;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x6449;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x7f43;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x667e;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x667e;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xe886:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x510e;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x510e:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0xe886;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xb6c8:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 6;
               extScheduleEntry->neighbor = 0x4d6a;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4d05:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x46a3;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xe61f:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0x667e;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x667e:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4;
               extScheduleEntry->neighbor = 0xe61f;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x7f43:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x6449:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x117a:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 14;
               extScheduleEntry->neighbor = 0x44ea;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x5966:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 6;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x4d35:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 3;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0x6fb1:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0xea5d;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xea5d:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 15;
               extScheduleEntry->neighbor = 0x6fb1;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            default:
               break;
         }
         break;
      case 0xf23f:
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
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 8:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 9:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2;
               extScheduleEntry->neighbor = 0x52c3;
               break;
            case 10:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 11:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 12:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 13:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 14:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 15:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 16:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 17:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 18:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 19:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 20:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 21:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 22:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 23:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 24:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 25:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 26:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 27:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 28:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 29:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 30:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 31:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 32:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 33:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 34:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 35:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 36:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 37:
               extScheduleEntry->type = CELLTYPE_OFF;
               extScheduleEntry->channelMask = 0;
               extScheduleEntry->neighbor = 0;
               break;
            case 38:
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
