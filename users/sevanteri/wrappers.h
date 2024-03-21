#pragma once

#define LAYOUT_wrapper(...)                  LAYOUT(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...)   LAYOUT_ergodox_pretty(__VA_ARGS__)
#define LAYOUT_gergo_wrapper(...)            LAYOUT_gergo(__VA_ARGS__)
#define LAYOUT_gergoplex_wrapper(...)        LAYOUT_split_3x5_3(__VA_ARGS__)

#define _________________QWERTY_L1_________________   MY_Q, MY_W, MY_E, MY_R, MY_T
#define _________________QWERTY_L2_________________   MY_A, MY_S, MY_D, MY_F, MY_G
#define _________________QWERTY_L3_________________   MY_Z, MY_X, MY_C, MY_V, MY_B
#define _QWERTY_L1_______________   MY_TAB, _________________QWERTY_L1_________________
#define _QWERTY_L2_______________   MY_ESC,  _________________QWERTY_L2_________________
#define _QWERTY_L3_______________   MY_LSFT,  _________________QWERTY_L3_________________

#define _________________QWERTY_R1_________________   MY_Y, MY_U, MY_I,    MY_O,   MY_P
#define _________________QWERTY_R2_________________   MY_H, MY_J, MY_K,    MY_L,   MY_OE
#define _________________QWERTY_R3_________________   MY_N, MY_M, MY_COMM, MY_DOT, MY_MINS
#define _______________QWERTY_R1_   _________________QWERTY_R1_________________, MY_QUOT
#define _______________QWERTY_R2_   _________________QWERTY_R2_________________, MY_AE
#define _______________QWERTY_R3_   _________________QWERTY_R3_________________, MY_RSFT

#define  __________________NUM_L1___________________  KC_F1,    KC_F2,       KC_F3,       KC_F4,       KC_F5
#define  __________________NUM_L2___________________  KC_1,     KC_2,        KC_3,        KC_4,        KC_5
#define  __________________NUM_L3___________________  _______,  _______,     FI_LBRC,     FI_LCBR,     FI_LPRN
#define  __NUM_L1_________________  KC_F11,         __________________NUM_L1___________________
#define  __NUM_L2_________________  FI_SECT,        __________________NUM_L2___________________
#define  __NUM_L3_________________  RALT(FI_SECT),  __________________NUM_L3___________________

#define __________________NUM_R1___________________   KC_F6,       KC_F7,       KC_F8,       KC_F9,       KC_F10
#define __________________NUM_R2___________________   KC_6,       KC_7,       KC_8,       KC_9,       KC_0
#define __________________NUM_R3___________________   FI_RPRN,    FI_RCBR,    FI_RBRC,    KC_F11,    KC_F12
/* #define __________________NUM_R3___________________   _______,    RALT(KC_7), RALT(KC_8), RALT(KC_9), RALT(KC_0) */
#define __________________NUM_R1_   __________________NUM_R1___________________, KC_F12
#define __________________NUM_R2_   __________________NUM_R2___________________, FI_PLUS
#define __________________NUM_R3_   __________________NUM_R3___________________, RALT(FI_PLUS)


#define _________________FUNCL_L1__________________   _______, LCTL(KC_RIGHT), _______, _______, _______
#define _________________FUNCL_L2__________________   _______, _______, _______, _______, KC_HOME
#define _________________FUNCL_L3__________________   _______, _______, _______, KC_END,  LCTL(KC_LEFT)

#define _________________FUNCL_R1__________________   _______, KC_PGDN, KC_PGUP, _______, KC_VOLU
#define _________________FUNCL_R2__________________   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_VOLD
#define _________________FUNCL_R3__________________   _______, _______, KC_MPRV, KC_MNXT, KC_MPLY


#define _________________STUFF_L1__________________   _______, _______, _______, QK_BOOT, _______
#define _________________STUFF_L2__________________   RGB_M_P, RGB_M_SW, RGB_M_TW, _______, _______
#define _________________STUFF_L3__________________   RGB_TOG, RGB_MOD, RGB_RMOD, _______, _______

#define ___________________________________________   _______, _______, _______, _______, _______
#define          __________________________________   _______, _______, _______, _______
#define                   _________________________   _______, _______, _______
#define                            ________________   _______, _______



#define ____QWERTY_L4___    MY_THL4,  MY_THL3
#define _____NUM_L4_____    _______,  CODEBLK
#define ____FUNC_L4_____    _______,  MO(_STUF)


#define ____QWERTY_R4___    MY_THR3,  MY_THR4
#define _____NUM_R4_____    _______,  FI_ACUT
#define ____FUNC_R4_____    _______,  KC_RALT

#define _QWERTY_THUMBLN_    MY_THL3,   MY_THL2,  MY_THL1
#define ____NUM_THUMBLN_    CODEBLK,   _______,  _______
#define ___FUNC_THUMBLN_    _______,   _______,  LCTL_T(KC_DEL)

#define _QWERTY_THUMBRN_    MY_THR1, MY_THR2, MY_THR3
#define ____NUM_THUMBRN_    _______, _______, _______
#define ___FUNC_THUMBRN_    _______, _______, _______


// old ones (ergodox)
#define _QWERTY_THUMBL__    MY_THL2, MY_THL1
#define ____NUM_THUMBL__    _______, _______
#define ___FUNC_THUMBL__    _______, KC_DEL

#define _QWERTY_THUMBR__    MY_THR1, MY_THR2
#define ____NUM_THUMBR__    _______, _______
#define ___FUNC_THUMBR__    _______, _______
