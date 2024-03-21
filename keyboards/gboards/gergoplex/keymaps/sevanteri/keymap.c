#include QMK_KEYBOARD_H
#include "sevanteri.h"
#include "gergoplex.h"
#include "wrappers.h"
#include "keymap_finnish.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_BASE] = LAYOUT_gergoplex_wrapper(
    _________________QWERTY_L1_________________,  _________________QWERTY_R1_________________,
    _________________QWERTY_L2_________________,  _________________QWERTY_R2_________________,
    _________________QWERTY_L3_________________,  _________________QWERTY_R3_________________,

                               _QWERTY_THUMBLN_,  _QWERTY_THUMBRN_
    ),
[_NUM] = LAYOUT_gergoplex_wrapper(
    __________________NUM_L1___________________,  __________________NUM_R1___________________,
    __________________NUM_L2___________________,  __________________NUM_R2___________________,
    __________________NUM_L3___________________,  __________________NUM_R3___________________,

                               ____NUM_THUMBLN_,  ____NUM_THUMBRN_
    ),
[_FUNC] = LAYOUT_gergoplex_wrapper(
    _________________FUNCL_L1__________________,  _________________FUNCL_R1__________________,
    _________________FUNCL_L2__________________,  _________________FUNCL_R2__________________,
    _________________FUNCL_L3__________________,  _________________FUNCL_R3__________________,

                               ___FUNC_THUMBLN_, ___FUNC_THUMBRN_
    ),
};
