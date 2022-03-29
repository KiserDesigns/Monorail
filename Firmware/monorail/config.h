/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x4D72
#define DEVICE_VER 	0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         Monorail

#define MATRIX_ROWS 5
#define MATRIX_COLS 12

#define LED0_PIN F4
#define LED1_PIN F1
#define LED2_PIN F0

// flip the 0 to a 1 to go back to a regular caps lock indicator, or remove these 2 lines entirely to eliminate the caps lock indicator function
#define LED_CAPS_LOCK_PIN F4
#define LED_PIN_ON_STATE 0

#define MATRIX_ROW_PINS { F5, B1, F7, F6, E6 }
#define MATRIX_COL_PINS { C7, C6, B6, B5, B4, D7, D6, D4, D3, D5, D2, B7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#define RGB_DI_PIN B0
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_MODE_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLED_NUM 12
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8


#endif
