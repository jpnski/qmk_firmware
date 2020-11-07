#pragma once

/* USB Device descriptor parameter */

#define VENDOR_ID       0x6131 // rand
#define PRODUCT_ID      0xC6AF // rand
#define DEVICE_VER      0x0001
#define MANUFACTURER    jp
#define PRODUCT         4x6_split
#define DESCRIPTION     QMK keyboard firmware for 4x6_split

/* Key matrix size */
#define MATRIX_ROWS 8
#define MATRIX_COLS 6

// Matrix/pins configuration
#define MATRIX_ROW_PINS { D7, E6, B4, B5 }

// Uncomment the correct MATRIX_COL_PINS for the MCU firmware being compiled/flashed:

// Unflipped columns for promicro/left/slave side controller:
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3 }

// Flipped columns for elite-c/right/master side controller:
//#define MATRIX_COL_PINS { B3, B1, F7, F6, F5, F4 }

// Diode direction
#define DIODE_DIRECTION ROW2COL

/* number of backlight levels */
#define BACKLIGHT_LEVELS 3

/* define led underglow pin */
#define BACKLIGHT_PIN B6

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
/* #define LOCKING_SUPPORT_ENABLE */
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE
