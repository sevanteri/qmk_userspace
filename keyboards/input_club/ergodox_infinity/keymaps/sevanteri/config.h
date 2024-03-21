#pragma once

// https://github.com/qmk/qmk_firmware/issues/19420#issuecomment-1372134274
#define usb_lld_disconnect_bus(usbp)

#include "sevanteri_config.h"

/* #include "../../config.h" */

#define EE_HANDS

#define LAYER_STATE_16BIT

#ifdef SLEEP_LED_ENABLE
#undef SLEEP_LED_ENABLE
#endif
