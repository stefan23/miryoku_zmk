// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

# Uncomment the following lines to enable the Corne RGB Underglow
CONFIG_ZMK_RGB_UNDERGLOW=y
CONFIG_WS2812_STRIP=y

# Uncomment the following line to enable the Corne OLED Display
CONFIG_ZMK_DISPLAY=y
CONFIG_ZMK_RGB_UNDERGLOW_EFF_START=3
CONFIG_ZMK_RGB_UNDERGLOW_HUE_STEP=1

&led_strip { chain-length = <27>; };
