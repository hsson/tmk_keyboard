#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC, ENT, \
         CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN, QUOT, NUHS,  \
         FN0 ,NUBS,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, RSFT, \
         LCTL,LGUI,LALT,          SPC,                     RALT,RGUI,FN1, RCTL),

  KEYMAP(MUTE, F1,   F2,   F3,   F4,   F5,   F6,   F7,   F8,   F9,   F10,  F11,  F12, DEL, \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PGUP, UP,   TRNS,  \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MYCM, TRNS, TRNS, PGDN, LEFT, RGHT, TRNS,  \
        TRNS, TRNS, TRNS, CALC, TRNS, TRNS, TRNS, TRNS, HOME, END,  DOWN, TRNS, TRNS,  \
        LGUI, TRNS, TRNS,             TRNS,                   PSCR, RCTL, TRNS, TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
        [0] = ACTION_LAYER_MOMENTARY(1),
};
