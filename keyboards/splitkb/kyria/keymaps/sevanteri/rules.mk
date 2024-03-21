MCU = RP2040
BOOTLOADER = rp2040
CONVERT_TO = promicro_rp2040


MIDI_ENABLE = yes
OLED_ENABLE = no
ENCODER_ENABLE = no       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow


ifneq ($(strip $(LEFT_SIDE)), yes)
    PIMORONI_TRACKBALL_ENABLE = yes
    QUANTUM_LIB_SRC += i2c_master.c
endif

CONSOLE_ENABLE = no
COMMAND_ENABLE = no
