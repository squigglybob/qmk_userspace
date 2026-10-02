// Copyright 2024 splitkb.com (support@splitkb.com)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0xEA, 0x55, 0x2E, 0xF9, 0x02, 0xA3, 0x12, 0x94}

#define VIAL_UNLOCK_COMBO_ROWS { 0, 4 }
#define VIAL_UNLOCK_COMBO_COLS { 1, 1 }

// Increase the EEPROM size for layout options
#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2

#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_KEYPRESSES

#define DYNAMIC_KEYMAP_LAYER_COUNT 8

#define TAPPING_TOGGLE 2 // can double tap into a layer if set using TT
#define TAPPING_TERM 175

// Cirque trackpad (left half). The module's own config
// (users/halcyon_modules/splitkb/hlc_cirque_trackpad/config.h) already sets
// absolute mode, tap-to-click, glide, circular scroll, 180° rotation and the
// curved overlay; those are toggled at runtime in trackpad.c. The options
// below aren't set by the module, so they can be enabled here.
//
// Sensitivity of the sensor itself (1X = most sensitive, 4X = least).
// The module's curved overlay makes this default to 2X.
// #define CIRQUE_PINNACLE_ATTENUATION EXTREG__TRACK_ADCCONFIG__ADC_ATTENUATE_2X
//
// How long a touch can last and still count as a tap-click (ms).
// #define CIRQUE_PINNACLE_TAPPING_TERM 150
//
// Flip an axis.
// #define POINTING_DEVICE_INVERT_X
// #define POINTING_DEVICE_INVERT_Y
//
// Switch to a mouse layer automatically when the trackpad is touched. Needs a
// layer with mouse buttons on it, and set_auto_mouse_enable(true) in trackpad.c.
// #define POINTING_DEVICE_AUTO_MOUSE_ENABLE
// #define AUTO_MOUSE_DEFAULT_LAYER <mouse layer number>
