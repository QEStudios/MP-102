// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┐
     * │ F13 │ F14 │ F15 │ F16 │
     * ├─────┼─────┼─────┼─────┤
     * │ F17 │ F18 │ F19 │ F20 │
     * └─────┼─────┼─────┼─────┘
     *  (F23)│ F21 │ F22 │(F24)
     *       └─────┴─────┘
     */
    [0] = LAYOUT_ortho_4x3(
        KC_F13,   KC_F14,   KC_F15,   KC_F16,
        KC_F17,   KC_F18,   KC_F19,   KC_F20,
        KC_F23,   KC_F21,   KC_F22,   KC_F24
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = { ENCODER_CCW_CW(MS_WHLU, MS_WHLD),  ENCODER_CCW_CW(KC_VOLD, KC_VOLU)  },
};
#endif