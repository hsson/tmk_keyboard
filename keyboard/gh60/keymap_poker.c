#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* 0: qwerty */
  KEYMAP(ESC, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10,   F11,    F12,  INS,  DEL, \
         GRV, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,     MINS,   EQL,  BSPC, HOME, \
         TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,     LBRC,   RBRC, ENT,  PGUP, \
         CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,  QUOT,   NUHS,       PGDN,  \
         LSFT,NUBS,  Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,   RSFT, UP,   END,  \
         LCTL,LGUI,LALT,          SPC,                     RALT,FN1,RCTL, LEFT, DOWN, RGHT),
 /* 1: qwerty */
 KEYMAP(TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, PSCR, \
        TRNS, MUTE, VOLD, VOLU, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, \
        TRNS, TRNS, UP,   TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, MPRV, MPLY, MNXT, TRNS, TRNS, TRNS, \
        TRNS, LEFT, DOWN, RGHT, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, NUHS,       TRNS,  \
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,  \
        TRNS, TRNS, TRNS,          TRNS,                      TRNS, TRNS, TRNS, TRNS, TRNS, TRNS),
};
const uint16_t PROGMEM fn_actions[] = {
  [0] = ACTION_LAYER_MOMENTARY(1),
  [1] = ACTION_LAYER_MOMENTARY(2),
};
