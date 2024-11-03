// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum custom_keycodes {
    GIT_DIFF = SAFE_RANGE,
    GIT_PULL,
    GIT_STATUS,
    GIT_COMMIT,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case GIT_DIFF:
            if (record->event.pressed) {
                SEND_STRING("git diff");
            }
            break;
        case GIT_PULL:
            if (record->event.pressed) {
                SEND_STRING("git pull");
            }
            break;
        case GIT_STATUS:
            if (record->event.pressed) {
                SEND_STRING("git status");
            }
            break;
        case GIT_COMMIT:
            if (record->event.pressed) {
                SEND_STRING("git commit -m \"\"");
                tap_code(KC_LEFT);
            }
            break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // clang-format off
    [0] = LAYOUT_ortho_4x3(
        TO(1),      LGUI(S(KC_S)), C(KC_MINUS), C(KC_EQUAL),
        C(S(KC_T)), C(S(KC_B)),    C(KC_R),     C(KC_T),
        GIT_DIFF,   GIT_PULL,      GIT_STATUS,  GIT_COMMIT
    ),
    [1] = LAYOUT_ortho_4x3(
        TO(0),   UG_TOGG, UG_PREV, UG_NEXT,
        UG_SPDU, UG_HUEU, UG_SATU, UG_VALU,
        UG_SPDD, UG_HUED, UG_SATD, UG_VALD
    ),
    //clang-format on
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [1] = {ENCODER_CCW_CW(UG_PREV, UG_NEXT)},
};
#endif

void keyboard_post_init_user(void) {
    layer_state_set(0);
}
