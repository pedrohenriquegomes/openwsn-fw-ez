/**
\brief TelosB-specific definition of the "debugpins" bsp module.

\author Thomas Watteyne <watteyne@eecs.berkeley.edu>, February 2012.
*/
#include <stdint.h>               // needed for uin8_t, uint16_t
#include "msp430f1611.h"
#include "debugpins.h"

//=========================== defines =========================================

//=========================== variables =======================================

//=========================== prototypes ======================================

//=========================== public ==========================================

void debugpins_init() {
   P6DIR |=  0x40;      // frame [P6.6]
   P6DIR |=  0x80;      // slot  [P6.7]
   P6DIR |=  0x04;      // fsm   [P6.2]
   P2DIR |=  0x40;      // task  [P2.6]
   P6DIR |=  0x01;      // isr   [P6.0]
   P6DIR |=  0x02;      // radio [P6.1] 
   P2DIR |=  0x08;      // app1 [P2.3] 
   P6DIR |=  0x08;      // app2  [P6.3] 
}

// P6.6
void debugpins_frame_toggle() {
   P6OUT ^=  0x40;
}
void debugpins_frame_clr() {
   P6OUT &= ~0x40;
}
void debugpins_frame_set() {
   P6OUT |=  0x40;
}

// P6.7
void debugpins_slot_toggle() {
   P6OUT ^=  0x80;
}
void debugpins_slot_clr() {
   P6OUT &= ~0x80;
}
void debugpins_slot_set() {
   P6OUT |=  0x80;
}

// P6.2
void debugpins_fsm_toggle() {
  P6OUT ^=  0x04;
}
void debugpins_fsm_clr() {
  P6OUT &= ~0x04;
}
void debugpins_fsm_set() {
  P6OUT |=  0x04;
}

// P2.6
void debugpins_task_toggle() {
  P2OUT ^=  0x40;
}
void debugpins_task_clr() {
   P2OUT &= ~0x40;
}
void debugpins_task_set() {
   P2OUT |=  0x40;
}

// P6.0
void debugpins_isr_toggle() {
  P6OUT ^=  0x01;
}
void debugpins_isr_clr() {
  P6OUT &= ~0x01;
}
void debugpins_isr_set() {
   P6OUT |=  0x01;
}

// P6.1
void debugpins_radio_toggle() {
   P6OUT ^=  0x02;
}
void debugpins_radio_clr() {
  P6OUT &= ~0x02;
}
void debugpins_radio_set() {
  P6OUT |=  0x02;
}

// P2.3
void debugpins_app1_toggle() {
  P2OUT ^=  0x08;
}
void debugpins_app1_clr() {
  P2OUT &= ~0x08;
}
void debugpins_app1_set() {
  P2OUT |=  0x08;
}

// P6.3
void debugpins_app2_toggle() {
  P6OUT ^=  0x08;
}
void debugpins_app2_clr() {
  P6OUT &= ~0x08;
}
void debugpins_app2_set() {
  P6OUT |=  0x08;
}

//=========================== private =========================================
