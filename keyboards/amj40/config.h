#pragma once
#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */

#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x61c6 // rand
#define DEVICE_VER      0xf1dc // rand
#define MANUFACTURER    jp
#define PRODUCT         AMJ40
#define DESCRIPTION     AMJ40 v2 PCB Ortholinear QMK files

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 12

// ROWS: Top to bottom, COLS: Left to right

#define MATRIX_ROW_PINS { F4, F5, F6, F7}
#define MATRIX_COL_PINS { F1, F0, E6, C7, C6, B0, D4, B1, B7, B5, B4, D7}
#define UNUSED_PINS

#define BACKLIGHT_PIN B6

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* Backlight configuration
 */
#define BACKLIGHT_LEVELS 4

/* Underlight configuration
 */

#define RGB_DI_PIN D3
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 4     // Number of LEDs
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
