#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_NO,  // SW1 - configure later
        KC_NO,  // SW2 - configure later
        KC_NO,  // SW3 - configure later
        KC_NO,  // SW4 - configure later
        KC_NO   // Encoder button - configure later
    )
};

bool encoder_update_user(uint8_t index, bool clockwise) {
    if (clockwise) {
        tap_code(KC_VOLU);  // Volume up
    } else {
        tap_code(KC_VOLD);  // Volume down
    }
    return false;
}
