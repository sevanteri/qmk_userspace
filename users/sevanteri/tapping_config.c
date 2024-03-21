#include QMK_KEYBOARD_H
#include "sevanteri.h"

#ifdef PERMISSIVE_HOLD_PER_KEY
bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) { // {{{
    switch (keycode) {
        case MY_A:
        case MY_S:
        case MY_D:
        case MY_F:
        case MY_G:
        case MY_J:
        case MY_K:
        case MY_L:
        case MY_OE:
        case MY_AE:
            return false;
        default:
            return true;
    }
}
#endif
// }}}

#ifdef TAPPING_TERM_PER_KEY
uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) { // {{{
    switch (keycode) {
        case MY_THL2:
            return 250;
    }
    return TAPPING_TERM;
} // }}}
#endif

#ifdef HOLD_ON_OTHER_KEY_PRESS_PER_KEY
bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) { // {{{
    switch(keycode) {
        case MY_THR1:
        case MY_THR2:
        case MY_THR3:
        case MY_THL1:
        /* case MY_THL2: */
        case MY_THL3:
        case CTRLESC:
            return true;
        default:
            return false;
    }
} // }}}
#endif
