#include QMK_KEYBOARD_H

// Default 4x6 Dactyl Manuform keymap

// qwerty ansi-style base layer
// layer1 = numbers, operators, media
// layer2 = function keys, symbols
// layer3 = tilde, nav, arrows, reset


#define base 0
#define layer1 1
#define layer2 2
#define layer3 3


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* base
 *       .-----------------------------------.                  .-----------------------------------.
 *       | TAB |  Q  |  W  |  E  |  R  |  T  |                  |  Y  |  U  |  I  |  O  |  P  | BKSP|
 *       |------------------------------------                  ------------------------------------|
 *       | SFT |  A  |  S  |  D  |  F  |  G  |                  |  H  |  J  |  K  |  L  |  ;  | QUO |
 *       |------------------------------------                  ------------------------------------|
 *       | CTL |  Z  |  X  |  C  |  V  |  B  |                  |  N  |  M  |  ,  |  .  |  /  | ENT |
 *       `-----------------------------------------.      .-----------------------------------------`
 *                               | GUI | ALT | SPC |      | LT1 | LT2 | LT3 |
 *                               `-----------------`      ------------------`
*/

  [base] = LAYOUT_4x12( 
    KC_TAB,   KC_Q,    KC_W,     KC_E,      KC_R,    KC_T,                           KC_Y,           KC_U,      KC_I,     KC_O,     KC_P,     KC_BSPC,\
    KC_RSFT,  KC_A,    KC_S,     KC_D,      KC_F,    KC_G,                           KC_H,           KC_J,      KC_K,     KC_L,     KC_SCLN,  KC_QUOT,\
    KC_LCTL,  KC_Z,    KC_X,     KC_C,      KC_V,    KC_B,                           KC_N,           KC_M,      KC_COMM,  KC_DOT,   KC_SLSH,  KC_ENT ,\
                                            KC_LGUI, KC_LALT, KC_SPC, LT(1,KC_TRNS), LT(2,KC_TRNS),  LT(3,KC_TRNS) \
),

/* layer 1
 *       .-----------------------------------.                  .-----------------------------------.
 *       | ESC |  1  |  2  |  3  |  4  |  5  |                  |  6  |  7  |  8  |  9  |  0  | DEL |
 *       |------------------------------------                  ------------------------------------|
 *       | CPS |     |     |     |     |  _  |                  |  =  |  -  |  +  |  (  |  )  |  \  |
 *       |------------------------------------                  ------------------------------------|
 *       |     | Vl- | Vl+ |     |     |     |                  |     |     |     |     |     |     |
 *       `-----------------------------------------.      .-----------------------------------------`
 *                               |     |     |     |      |     |     |     |
 *                               `-----------------`      `-----------------`
*/
  
  [layer1] = LAYOUT_4x12( 
    KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,                         KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_DEL ,\
    KC_CAPS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_UNDS,                      KC_EQL,   KC_MINS,  KC_PLUS,  KC_LPRN,  KC_RPRN,  KC_BSLS,\
    KC_TRNS,  KC_VOLD,  KC_VOLU,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS \
),
  
/* layer 2
 *       .-----------------------------------.                  .-----------------------------------.
 *       |  `  |  F1 |  F2 |  F3 |  F4 |  F5 |                  |  F6 |  F7 |  F8 |  F9 |  F0 | F11 |
 *       |------------------------------------                  ------------------------------------|
 *       |     |  !  |  @  |  #  |  $  |  %  |                  |  ^  |  &  |  *  |  [  |  ]  |  |  |
 *       |------------------------------------                  ------------------------------------|
 *       |     |     |     |     |     |     |                  |     |     |     |  {  |  }  |     |
 *       `-----------------------------------------.      .-----------------------------------------`
 *                               |     |     |     |      |     |     |     |
 *                               `-----------------`      `-----------------`
 *
*/
  
  [layer2] = LAYOUT_4x12( 
    KC_GRV,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,                        KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11 ,\
    KC_TRNS,  KC_EXLM,  KC_AT,    KC_HASH,  KC_DLR,   KC_PERC,                      KC_CIRC,  KC_AMPR,  KC_ASTR,  KC_LBRC,  KC_RBRC,  KC_PIPE,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_LCBR,  KC_RCBR,  KC_TRNS,\
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS \
),

/* layer 3
 *       .-----------------------------------.                  .-----------------------------------.
 *       |  ~  |     |     |     |     |     |                  |     |     |     |     |     |     |
 *       |------------------------------------                  ------------------------------------|
 *       |     | PGD | PGU | HOM | END |     |                  | LFT | DWN | UP  | RGT |     |     |
 *       |------------------------------------                  ------------------------------------|
 *       |     |     |     |     |     |     |                  |     |     |     |     |     | RST |
 *       `-----------------------------------------.      .-----------------------------------------`
 *                               |     |     |     |      |     |     |     |
 *                               `-----------------`      `-----------------`
 *
*/
  
  [layer3] = LAYOUT_4x12( 
    KC_TILD,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_PGDN,  KC_PGUP,  KC_HOME,  KC_END,   KC_TRNS,                      KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  KC_TRNS,  KC_TRNS,\
    KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,                      KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  RESET, \
                                            KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS,  KC_TRNS \
)

};
