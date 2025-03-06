#ifndef MAIN_H
#define	MAIN_H

#define POWER_ON_SCREEN     0x01
#define MENU_SCREEN         0x02
#define MICRO_MODE          0x11
#define GRILL_MODE          0x12
#define CONVECTION_MODE     0x13
#define START_MODE          0x14

#define DISPLAY_TIME        0xDD


#define RESET_MODE          0xFF
#define RESET_NOTHING       0x00

#define FAN_DDR             TRISC2
#define FAN                 RC2

#define BUZZER_DDR          TRISC1
#define BUZZER                 RC1

#define START               0xAA
#define STOP                0xBB
#define PAUSE               0xCC


#endif
