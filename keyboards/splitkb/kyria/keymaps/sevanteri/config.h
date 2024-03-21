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

#pragma once

#define EE_HANDS

#define DEBOUNCE 10

#ifdef OLED_DRIVER_ENABLE
  #define OLED_DISPLAY_128X64
#endif

#define PI 3.14159265358979323846
/* #define TRACKBALL_ANGLE_OFFSET PI/2 */
#define TRACKBALL_ORIENTATION 3

#define MIDI_ADVANCED

#ifdef RGBLIGHT_ENABLE

  #define RGBLIGHT_EFFECT_ALTERNATING
  #define RGBLIGHT_EFFECT_BREATHING
  #define RGBLIGHT_EFFECT_CHRISTMAS
  #define RGBLIGHT_EFFECT_KNIGHT
  #define RGBLIGHT_EFFECT_RAINBOW_MOOD
  #define RGBLIGHT_EFFECT_RAINBOW_SWIRL
  #define RGBLIGHT_EFFECT_SNAKE
  #define RGBLIGHT_EFFECT_STATIC_GRADIENT
  #define RGBLIGHT_EFFECT_TWINKLE

  #define RGBLIGHT_HUE_STEP 8
  #define RGBLIGHT_SAT_STEP 8
  #define RGBLIGHT_VAL_STEP 8
  /* #define RGBLIGHT_DISABLE_KEYCODES */
  #define RGBLIGHT_SLEEP
  #ifdef RGBLIGHT_LAYERS
    #undef RGBLIGHT_LAYERS
  #endif
  #ifndef RGBLIGHT_LIMIT_VAL
    #define RGBLIGHT_LIMIT_VAL 150
  #endif
#endif

//#define F_SCL 240000UL  // SCL frequency
#include "sevanteri_config.h"

#define SPLIT_USB_DETECT

//#define USER_PRINT

/* #define TAP_CODE_DELAY 35 */
