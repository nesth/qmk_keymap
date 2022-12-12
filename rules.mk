VPATH += $(USER_PATH)/features
SRC += nesth.c  combos.c

COMBO_ENABLE = yes

ifeq ($(strip $(MCU)), atmega32u4)
	LTO_ENABLE = yes
	BOOTLOADER = atmel-dfu
endif

ifeq ($(KEYBOARD), crkbd/rev1)
	RGBLIGHT_ENABLE    = no
	RGB_MATRIX_ENABLE  = yes
	RGB_MATRIX_DRIVER  = WS2812
	MOUSEKEY_ENABLE    = yes
	NKRO_ENABLE        = no
	OLED_ENABLE 	   = yes
	OLED_DRIVER        = SSD1306
	SLEEP_LED_ENABLE   = no
endif


# RP2040-specific options
#PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.
#SERIAL_DRIVER = vendor
