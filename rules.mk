SRC += nesth.c 

ifeq ($(KEYBOARD), crkbd/rev1)
	RGBLIGHT_ENABLE    = no
	RGB_MATRIX_ENABLE  = yes
	RGB_MATRIX_DRIVER  = WS2812
	MOUSEKEY_ENABLE    = yes
	NKRO_ENABLE        = no
	OLED_ENABLE 	   = yes
	OLED_DRIVER        = SSD1306
	LTO                = yes
	SLEEP_LED_ENABLE   = no
endif

# RP2040-specific options
#PICO_INTRINSICS_ENABLED = no # ATM Unsupported by ChibiOS.
#SERIAL_DRIVER = vendor
