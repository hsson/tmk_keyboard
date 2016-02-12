#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, ENT, \
         CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, NUHS,  \
         LSFT,NUBS,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT, \
         LCTL,LGUI,LALT,          SPC,                     RALT,FN1,RCTL, DEL),
};
const uint16_t PROGMEM fn_actions[] = {

};
