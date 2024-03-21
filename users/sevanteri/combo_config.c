#include QMK_KEYBOARD_H
#ifdef COMBO_ENABLE

#include "sevanteri.h"
#include "keymap_finnish.h"

#include "action_tapping.h"
/* #include "combos.h" */
#include "keymap_combo.h"

#include "action_layer.h"

bool get_combo_must_tap(uint16_t combo_idx, combo_t* combo) { // {{{
    switch (combo_idx) {
#ifdef C_CODEBLK
        case C_CODEBLK:
#endif
        case C_THUMB_CTL_SFT:
        case C_THUMB_ALT_SFT:
        case C_THUMB_ALT_CTL:
            return false;
        case C_EXCLAMATIONP:
        case C_ACUT:
        case C_WE_TAB:
        case C_IO_TAB:
            return true;
    }
    switch (combo->keycode) {
        case QK_TAP_DANCE...QK_TAP_DANCE_MAX:
            return false;
    }

    // if any underlying key is a MT/LT/MO key, then our combo is tap-only.
    uint16_t key;
    uint8_t idx = 0;
    while ((key = pgm_read_word(&combo->keys[idx])) != COMBO_END) {
        switch (key) {
            case QK_MOD_TAP...QK_MOD_TAP_MAX:
            case QK_LAYER_TAP...QK_LAYER_TAP_MAX:
            case QK_MOMENTARY...QK_MOMENTARY_MAX:
                return true;
        }
        idx += 1;
    }
    return false;
} // }}}

// custom combo terms {{{
uint16_t get_combo_term(uint16_t index, combo_t *combo) {

    /*
     * NOTE: This logic has been moved to `combo_should_trigger` function below
     * */

    // Small combo term when typing normally. Might need to tune a bit.
    /* if (dyn_combo_term_timer && timer_elapsed(dyn_combo_term_timer) < DYN_COMBO_TERM_TIMEOUT) { */
/* #ifdef EXTRA_SHORT_COMBOS */
    /*     combo->state |= 0x40; */
/* #else */
    /*     combo->disabled = true; */
/* #endif */
    /*     return 0; // doesn't really matter what you return if you disable the combo. */
    /* } */
    /* dyn_combo_term_timer = 0; */

    // ctrl6 is the first vertical combo
    if (index >= C_VERTICAL_START) return 100;


    if (KEYCODE_IS_MOD(combo->keycode)) return COMBO_HOLD_TERM;
    /* if (get_combo_tap_only(index, combo)) return 20; */

    /* switch(combo->keycode) { */
    /*     case QK_BOOT: */
    /*         return COMBO_HOLD_TERM; */
    /* } */

    switch(index) {
        case C_QUOT:
        case C_WE_TAB:
        case C_IO_TAB:
            return 20;
        case C_ACUT:
            return 15;
    }

    // Longer term for THUMB+alpha
    /* if (combo->keys[0] == MY_THR3 || */
    /*     combo->keys[0] == MY_THR2) { */
    /*     return 100; */
    /* } */

    return COMBO_TERM;
}
// }}}

bool get_combo_must_hold(uint16_t index, combo_t *combo) { // {{{
    switch(index) {
        case C_THUMB_CTL_SFT:
        case C_THUMB_ALT_SFT:
        case C_THUMB_ALT_CTL:
            return true;
    }
    switch(combo->keycode) {
        case QK_BOOT:
            return true;
    }
    if (KEYCODE_IS_MOD(combo->keycode)) return true;

    return false;
} // }}}

// process_combo_key_release {{{
#ifdef COMBO_PROCESS_KEY_RELEASE
bool process_combo_key_release(uint16_t combo_index, combo_t *combo, uint8_t key_index, uint16_t keycode) {
    switch (combo_index) {
        case C_THUMB_CTL_SFT:
        case C_THUMB_ALT_SFT:
        case C_THUMB_ALT_CTL:
            switch(keycode) {
                case MY_A:
                case MY_THL1:
                    unregister_mods(MOD_MASK_CTRL);
                    break;
                case MY_S:
                    unregister_mods(MOD_MASK_SHIFT);
                    break;
                case MY_THL2:
                    unregister_mods(MOD_MASK_ALT);
                    break;
            }
            break;
        case C_GMAIL:
            // true releases the combo immediately.
            return true;
    }
    return false;
}
#endif
// }}}

// combo_should_trigger {{{
#ifdef COMBO_SHOULD_TRIGGER
bool combo_should_trigger(uint16_t idx, combo_t *combo, uint16_t keycode, keyrecord_t *record) {

    if (layer_state_is(_FUNC)) {
        return false;
    }

    // gaming layer combos
    bool games = layer_state_is(_GAME);
    if (idx >= C_GAME_START && idx <= C_GAME_END) return games;
    else if (games) return false;
/* #ifdef KEYBOARD_splitkb_kyria */
/*                 || record->event.key.col > 7 */
/* #endif */


    // if dyn timer is less than X
    // AND key is from home row
    // then don't trigger combo
    if (
        dyn_combo_term_timer &&
        timer_elapsed(dyn_combo_term_timer) < DYN_COMBO_TERM_TIMEOUT &&
        record->event.key.row == 1
    ) {
        return false;
    }
    dyn_combo_term_timer = 0;

    return true;
}
#endif
// }}}


// combo_must_press_in_order {{{
#ifdef COMBO_MUST_PRESS_IN_ORDER_PER_COMBO
bool get_combo_must_press_in_order(uint16_t combo_index, combo_t *combo) {
    switch (combo_index) {
        case C_WE_TAB:
        case C_IO_TAB:
            return true;
        default:
            return false;
    }
}

#endif
// }}}
#endif
