/*
This is the c configuration file for the keymap

Copyright 2012 Jun Wako <wakojun@gmail.com>
Copyright 2015 Jack Humbert

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

#pragma once

/* Select hand configuration */

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define SPLIT_WPM_ENABLE
#define QUICK_TAP_TERM 0
#define TAPPING_TERM 100

#undef RGBLIGHT_DEFAULT_MODE
#undef RGBLIGHT_DEFAULT_HUE
#undef RGBLIGHT_DEFAULT_SAT
#undef RGBLIGHT_DEFAULT_VAL
#undef RGBLIGHT_LED_COUNT

#define RGBLIGHT_LED_COUNT 8
#define RGBLED_SPLIT { 4, 4 }
#define RGBLIGHT_SPLIT
#define RGBLIGHT_EFFECT_BREATHING

// Default settings for clearing the EEPROM
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_BREATHING
#define RGBLIGHT_DEFAULT_HUE 235
#define RGBLIGHT_DEFAULT_SAT 128
#define RGBLIGHT_DEFAULT_VAL 255
