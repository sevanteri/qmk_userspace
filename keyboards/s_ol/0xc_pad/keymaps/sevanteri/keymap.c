/* Copyright 2021 s-ol
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

enum _layers {
    _TOGG,
    _BRU,
    _BRD,
    _TU,
    _TD,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_TOGG] = LAYOUT(
                MO(_BRU), MO(_BRD),
            KC_1 , KC_2, KC_3,
        KC_4, KC_5, KC_6, KC_7,
            KC_8   , KC_9   , KC_0
    ),
    [_BRU] = LAYOUT(
                _______, MO(_TU),
            KC_Q , KC_W, KC_E,
        KC_R, KC_T, KC_Y, KC_U,
            KC_I   , KC_O   , KC_P
    ),
    [_BRD] = LAYOUT(
                MO(_TD), _______,
            KC_A , KC_S, KC_D,
        KC_F, KC_G, KC_H, KC_J,
            KC_K   , KC_L   , KC_SCLN
    ),
    [_TU] = LAYOUT(
                _______, _______,
            KC_F1 , KC_F2, KC_F3,
        KC_F4, KC_F5, KC_F6, KC_F7,
            KC_F8   , KC_F9   , KC_F10
    ),
    [_TD] = LAYOUT(
                _______, _______,
            KC_F13 , KC_F14, KC_F15,
        KC_F16, KC_F17, KC_F18, KC_F19,
            KC_F20   , KC_F21   , KC_F22
    ),
};
