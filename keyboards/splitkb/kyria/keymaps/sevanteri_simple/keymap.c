/* Copyright 2019 Thomas Baart <thomas@splitkb.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H

#include "sevanteri.h"
#include "wrappers.h"
#include "keymap_finnish.h"

#include "features/leader.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT_wrapper( // {{{

        _QWERTY_L1_______________, /******/ /******/      /******/ /******/ _______________QWERTY_R1_,
        _QWERTY_L2_______________, /******/ /******/      /******/ /******/ _______________QWERTY_R2_,
        _QWERTY_L3_______________, MY_THUL2, MY_THUL1,    MY_THUR1,XXXXXXX, _______________QWERTY_R3_,
        LEADER, MY_THL4, MY_THL3,  MY_THL2,  MY_THL1,     MY_THR1,  MY_THR2, MY_THR3, MY_THR4, KC_PSCR
    ), // }}}
    [_FUNC] = LAYOUT_wrapper( // {{{
        MO(_STUF),  _________________FUNCL_L1__________________,                    _________________FUNCL_R1__________________, _______,
        _______, _________________FUNCL_L2__________________,                       _________________FUNCL_R2__________________, _______,
        _______, _________________FUNCL_L3__________________, _______, _______,     _______, _______, _________________FUNCL_R3__________________, _______,
                                            _______, _______, ___FUNC_THUMBLN_,     _______, _______, _______, _______, MO(_STUF)
    ), // }}}
    [_NUM] = LAYOUT_wrapper( // {{{
        __NUM_L1_________________, /******/ /******/      /******/ /******/ __________________NUM_R1_,
        __NUM_L2_________________, /******/ /******/      /******/ /******/ __________________NUM_R2_,
        __NUM_L3_________________, _______, _______,      _______, _______, __________________NUM_R3_,
                 _______, _______, ____NUM_THUMBLN_,      _______, _______, _______, KC_RALT, _______

    ), // }}}
    [_STUF] = LAYOUT_wrapper( // {{{
        MO(_STUF), _________________STUFF_L1__________________,                                      _________________STUFF_L1__________________, _______,
        _______, _________________STUFF_L2__________________,                                        _________________STUFF_L2__________________, _______,
        _______, ___________________________________________, ________________,    _______, _______, ___________________________________________, _______,
                                   ___________________________________________,    __________________________________, MO(_STUF)
    ), // }}}
    [_GAME] = LAYOUT_wrapper( // {{{
        KC_ESC,  KC_T,     KC_Q,  KC_W,  KC_E,  KC_R,                                          ___________________________________________, _______,
        KC_TAB,  KC_LSFT,  KC_A,  KC_S,  KC_D,  KC_F,                                          ___________________________________________, _______,
        KC_G,    KC_LALT,  KC_1,  KC_2,  KC_3,  KC_V,  KC_B,    KC_X,        TG(_GAME), _______, ___________________________________________, _______,
        /***/    /***/     /***/  KC_I,  KC_J,  KC_M,  KC_SPC,  KC_LCTL,     _______, _______, _______, _______, KC_RGUI
    ), // }}}
    [_MIDI] = LAYOUT_wrapper( // {{{
        MI_OCTU, XXXX, XXXX, XXXX, XXXX, XXXX,                                             XXXX, XXXX, XXXX, XXXX, XXXX, MI_BNDU,
        MI_OCTD, MI_Cs, XXXX, XXXX, XXXX, XXXX,                                            XXXX, XXXX, XXXX, XXXX,   MI_As1, MI_BNDD,
        MI_C,    MI_D, MI_Ds, XXXX, MI_Fs, MI_Gs, MI_As, MI_SUST,        MI_Cs1, XXXX, MI_Ds1, XXXX, MI_Fs1, MI_Gs1, MI_A1, MI_B1,
                              MI_E,  MI_F, MI_G,  MI_A,  MI_B,           MI_C1, MI_D1, MI_E1, MI_F1, MI_G1
    ), // }}}
    /* [_LAYERINDEX] = LAYOUT_wrapper( // {{{ */
    /*     _______, ___________________________________________,                                           ___________________________________________, _______,  */
    /*     _______, ___________________________________________,                                           ___________________________________________, _______,  */
    /*     _______, ___________________________________________, _______, _______,       _______, _______, ___________________________________________, _______,  */
    /*                                _______, _______, _______, _______, _______,       _______, _______, _______, _______, _______                              */
    /* ), // }}} */
};

void keyboard_post_init_user(void) {
    /* debug_enable=true; */
    /* trackball_set_hsv(rgb_hue, rgb_sat, rgb_brightness); */
}

/* void bootmagic_lite(void) { */
/*     eeconfig_init(); */
/* } */
