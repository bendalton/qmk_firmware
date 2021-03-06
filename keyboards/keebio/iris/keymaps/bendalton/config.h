/*
Copyright 2017 Danny Nguyen <danny@keeb.io>

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

// #define USE_I2C
// #define EE_HANDS

#undef RGBLED_NUM
#define RGBLED_NUM 14
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 4
#define RGBLIGHT_VAL_STEP 8
#define TAPPING_TERM_PER_KEY
#define IGNORE_MOD_TAP_INTERRUPT
// #define PERMISSIVE_HOLD
#define RGBLIGHT_SLEEP
// #define TAPPING_FORCE_HOLD
// #define RETRO_TAPPING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define COMBO_COUNT 8
#define COMBO_TERM 30
#define COMBO_ALLOW_ACTION_KEYS
#define IGNORE_MOD_TAP_INTERRUPT
#define FORCE_NKRO
