#include "opendefs.h"
#include "schedule.h"

void getExtSchedule(uint16_t addr, uint8_t timeslot_offset, extScheduleEntry_t *extScheduleEntry)
{
   switch (addr) {
      case 0x6ce6:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 1:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 2:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 3:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 4:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 5:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x4ffa;
               return;
            case 6:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 7:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6658;
               return;
            case 8:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x50f4;
               return;
            case 9:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xedbc;
               return;
            case 10:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 11:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 12:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 13:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 14:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 15:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 16:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xedbc;
               return;
            case 17:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 18:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 19:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 20:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 21:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 22:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 23:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xedbc;
               return;
            case 24:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 25:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 37:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 38:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x5890;
               return;
            default:
               break;
         }
         break;
      case 0xedbc:
         switch(timeslot_offset) {
            case 9:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 15:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2128;   // 0b0000100001010000
               extScheduleEntry->neighbor = 0x52c3;
               return;
            case 16:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 22:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2128;   // 0b0000100001010000
               extScheduleEntry->neighbor = 0x52c3;
               return;
            case 23:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x50f4:
         switch(timeslot_offset) {
            case 8:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x6658:
         switch(timeslot_offset) {
            case 7:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x5890:
         switch(timeslot_offset) {
            case 6:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 14:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x41c9;
               return;
            case 15:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 21:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x76e7;
               return;
            case 22:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x76e7;
               return;
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x41c9;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 37:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x41c9;
               return;
            case 38:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x4ffa:
         switch(timeslot_offset) {
            case 5:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0xcf11:
         switch(timeslot_offset) {
            case 4:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 13:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            case 14:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 20:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xf078;
               return;
            case 21:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            case 37:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0xf361:
         switch(timeslot_offset) {
            case 3:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 12:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            case 13:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 19:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            case 20:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x6300:
         switch(timeslot_offset) {
            case 2:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 11:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x7233;
               return;
            case 12:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 18:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x4d6a;
               return;
            case 19:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 25:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x4baa;
               return;
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x4d6a;
               return;
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x79b6:
         switch(timeslot_offset) {
            case 1:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 10:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x4da3;
               return;
            case 11:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 17:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x4527;
               return;
            case 18:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 24:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x81fc;
               return;
            case 25:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x4527;
               return;
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0x62b9:
         switch(timeslot_offset) {
            case 0:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 9:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x5517;
               return;
            case 10:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 16:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x5517;
               return;
            case 17:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 23:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x5517;
               return;
            case 24:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x5517;
               return;
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6ce6;
               return;
            default:
               break;
         }
         break;
      case 0xf078:
         switch(timeslot_offset) {
            case 20:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xcf11;
               return;
            default:
               break;
         }
         break;
      case 0x5517:
         switch(timeslot_offset) {
            case 9:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 15:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x5966;
               return;
            case 16:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 22:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x6449;
               return;
            case 23:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x62b9;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x6449;
               return;
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8456;   // 0b0010000100001000
               extScheduleEntry->neighbor = 0x62b9;
               return;
            default:
               break;
         }
         break;
      case 0x52c3:
         switch(timeslot_offset) {
            case 15:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2128;   // 0b0000100001010000
               extScheduleEntry->neighbor = 0xedbc;
               return;
            case 21:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 33800;   // 0b1000010000001000
               extScheduleEntry->neighbor = 0x44ea;
               return;
            case 22:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2128;   // 0b0000100001010000
               extScheduleEntry->neighbor = 0xedbc;
               return;
            default:
               break;
         }
         break;
      case 0x4baa:
         switch(timeslot_offset) {
            case 25:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x6300;
               return;
            default:
               break;
         }
         break;
      case 0x76e7:
         switch(timeslot_offset) {
            case 21:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8512;   // 0b0010000101000000
               extScheduleEntry->neighbor = 0x4d35;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x5890;
               return;
            default:
               break;
         }
         break;
      case 0xcdeb:
         switch(timeslot_offset) {
            case 12:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 18:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0xf23f;
               return;
            case 19:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 25:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0x6fb1;
               return;
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 31:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0x117a;
               return;
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xf361;
               return;
            case 34:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0x1d33;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4128;   // 0b0001000000100000
               extScheduleEntry->neighbor = 0xf361;
               return;
            default:
               break;
         }
         break;
      case 0x81fc:
         switch(timeslot_offset) {
            case 24:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x79b6;
               return;
            default:
               break;
         }
         break;
      case 0x1d33:
         switch(timeslot_offset) {
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            default:
               break;
         }
         break;
      case 0x4d6a:
         switch(timeslot_offset) {
            case 18:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x6300;
               return;
            case 30:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 1056;   // 0b0000010000100000
               extScheduleEntry->neighbor = 0xe886;
               return;
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x6300;
               return;
            default:
               break;
         }
         break;
      case 0x7233:
         switch(timeslot_offset) {
            case 11:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 10768;   // 0b0010101000010000
               extScheduleEntry->neighbor = 0x6300;
               return;
            default:
               break;
         }
         break;
      case 0x4527:
         switch(timeslot_offset) {
            case 17:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x79b6;
               return;
            case 29:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 34832;   // 0b1000100000010000
               extScheduleEntry->neighbor = 0xea5d;
               return;
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x79b6;
               return;
            default:
               break;
         }
         break;
      case 0x46a3:
         switch(timeslot_offset) {
            case 13:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 26:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0x667e;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 32:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0x4d05;
               return;
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xcf11;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0xb6c8;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 2064;   // 0b0000100000010000
               extScheduleEntry->neighbor = 0xcf11;
               return;
            default:
               break;
         }
         break;
      case 0x4da3:
         switch(timeslot_offset) {
            case 10:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4164;   // 0b0001000001000100
               extScheduleEntry->neighbor = 0x79b6;
               return;
            default:
               break;
         }
         break;
      case 0x41c9:
         switch(timeslot_offset) {
            case 14:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 33:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8256;   // 0b0010000001000000
               extScheduleEntry->neighbor = 0x7f43;
               return;
            case 34:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x5890;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 8256;   // 0b0010000001000000
               extScheduleEntry->neighbor = 0x7f43;
               return;
            case 37:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 516;   // 0b0000001000000100
               extScheduleEntry->neighbor = 0x5890;
               return;
            default:
               break;
         }
         break;
      case 0x44ea:
         switch(timeslot_offset) {
            case 21:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 33800;   // 0b1000010000001000
               extScheduleEntry->neighbor = 0x52c3;
               return;
            default:
               break;
         }
         break;
      case 0xe886:
         switch(timeslot_offset) {
            case 30:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 1056;   // 0b0000010000100000
               extScheduleEntry->neighbor = 0x4d6a;
               return;
            default:
               break;
         }
         break;
      case 0x510e:
         switch(timeslot_offset) {
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x6449;
               return;
            default:
               break;
         }
         break;
      case 0xb6c8:
         switch(timeslot_offset) {
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            default:
               break;
         }
         break;
      case 0x4d05:
         switch(timeslot_offset) {
            case 32:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            default:
               break;
         }
         break;
      case 0xe61f:
         switch(timeslot_offset) {
            case 35:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 22705;   // 0b0101100010110001
               extScheduleEntry->neighbor = 0x7f43;
               return;
            default:
               break;
         }
         break;
      case 0x667e:
         switch(timeslot_offset) {
            case 26:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 1032;   // 0b0000010000001000
               extScheduleEntry->neighbor = 0x46a3;
               return;
            default:
               break;
         }
         break;
      case 0x7f43:
         switch(timeslot_offset) {
            case 33:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8256;   // 0b0010000001000000
               extScheduleEntry->neighbor = 0x41c9;
               return;
            case 35:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 22705;   // 0b0101100010110001
               extScheduleEntry->neighbor = 0xe61f;
               return;
            case 36:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8256;   // 0b0010000001000000
               extScheduleEntry->neighbor = 0x41c9;
               return;
            default:
               break;
         }
         break;
      case 0x6449:
         switch(timeslot_offset) {
            case 22:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x5517;
               return;
            case 27:
               extScheduleEntry->type = CELLTYPE_RX;
               extScheduleEntry->channelMask = 16513;   // 0b0100000010000001
               extScheduleEntry->neighbor = 0x510e;
               return;
            case 28:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x5517;
               return;
            default:
               break;
         }
         break;
      case 0x117a:
         switch(timeslot_offset) {
            case 31:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            default:
               break;
         }
         break;
      case 0x5966:
         switch(timeslot_offset) {
            case 15:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 4130;   // 0b0001000000100010
               extScheduleEntry->neighbor = 0x5517;
               return;
            default:
               break;
         }
         break;
      case 0x4d35:
         switch(timeslot_offset) {
            case 27:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 8512;   // 0b0010000101000000
               extScheduleEntry->neighbor = 0x76e7;
               return;
            default:
               break;
         }
         break;
      case 0x6fb1:
         switch(timeslot_offset) {
            case 25:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0xcdeb;
               return;
            default:
               break;
         }
         break;
      case 0xea5d:
         switch(timeslot_offset) {
            case 29:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 34832;   // 0b1000100000010000
               extScheduleEntry->neighbor = 0x4527;
               return;
            default:
               break;
         }
         break;
      case 0xf23f:
         switch(timeslot_offset) {
            case 18:
               extScheduleEntry->type = CELLTYPE_TX;
               extScheduleEntry->channelMask = 33026;   // 0b1000000100000010
               extScheduleEntry->neighbor = 0xcdeb;
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
