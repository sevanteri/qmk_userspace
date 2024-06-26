#ifdef TAPPING_TERM
#undef TAPPING_TERM
#endif
#define TAPPING_TERM 200
/* #define TAPPING_TOGGLE 2 */
/* #define ONESHOT_TAP_TOGGLE 2 */
/* #define TAPPING_TERM_PER_KEY */
/* #define TAPPING_FORCE_HOLD */

#ifdef PERMISSIVE_HOLD
#undef PERMISSIVE_HOLD
#endif
/* #define PERMISSIVE_HOLD_PER_KEY */

#define HOLD_ON_OTHER_KEY_PRESS
#define HOLD_ON_OTHER_KEY_PRESS_PER_KEY

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define LAYER_STATE_8BIT

// COMBOS
#ifdef COMBO_TERM
#undef COMBO_TERM
#endif

#define COMBO_STRICT_TIMER
#define COMBO_TERM 25
#define COMBO_HOLD_TERM 100
#define COMBO_PROCESS_KEY_RELEASE

#define COMBO_VARIABLE_LEN
#define COMBO_PERMISSIVE_HOLD
#define COMBO_TERM_PER_COMBO
#define COMBO_MUST_TAP_PER_COMBO
/* #define COMBO_MUST_HOLD_MODS */
#define COMBO_MUST_HOLD_PER_COMBO
#define COMBO_BUFFER_LENGTH 5
#define COMBO_ONLY_FROM_LAYER 0
#define EXTRA_SHORT_COMBOS
/* #define COMBO_MUST_PRESS_IN_ORDER_PER_COMBO */
#define COMBO_SHOULD_TRIGGER

#define DEFAULT_XCASE_SEPARATOR LSFT(KC_SLASH)
// #define DEFAULT_XCASE_SEPARATOR FI_UNDS
//
#define LEADER_ESC_KEY KC_NO

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE

/* #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET */
/* #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_LED GP25 */
/* #define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U */

