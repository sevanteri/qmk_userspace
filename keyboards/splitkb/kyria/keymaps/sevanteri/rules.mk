MCU = RP2040
BOOTLOADER = rp2040
CONVERT_TO = promicro_rp2040


MIDI_ENABLE = yes
OLED_ENABLE = no
ENCODER_ENABLE = no       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow

POINTING_DEVICE_ENABLE = yes
POINTING_DEVICE_DRIVER = pimoroni_trackball
POINTING_DEVICE_ROTATION_180 = yes
POINTING_DEVICE_TASK_THROTTLE_MS = 8

# RGB_MATRIX_ENABLE = no



# ifneq ($(strip $(LEFT_SIDE)), yes)
#     PIMORONI_TRACKBALL_ENABLE = yes
#     QUANTUM_LIB_SRC += i2c_master.c
# endif

CONSOLE_ENABLE = yes
COMMAND_ENABLE = no
