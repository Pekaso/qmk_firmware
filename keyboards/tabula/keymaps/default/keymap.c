/* Copyright 2020 pekaso
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#include QMK_KEYBOARD_H
#include "keymap_jp.h"

// Defines names for use in layer keycodes and the keymap
#define _ANSI 0
#define _JIS  1

// Defines the keycodes used by our macros in process_record_user
// enum custom_keycodes {

// };

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ANSI] = LAYOUT(
        KC_ESC,             KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,    KC_F12,  KC_INS,
        KC_GRV,    KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,    KC_BSPC, KC_DEL,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,   KC_BSLS, KC_HOME,
        KC_LCAP,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NO,     KC_ENT,  KC_END,
        KC_LSHIFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M,   KC_COMM, KC_DOT,  KC_SLSH, KC_NO,   KC_RSHIFT, KC_UP,
        KC_LCTL,   KC_LGUI, KC_LALT, KC_LCTL, KC_SPC, KC_ENT,  KC_NO,   KC_NO,  KC_RALT, KC_RGUI, KC_RCTL,          KC_LEFT,   KC_DOWN, KC_RIGHT
    ),
    [_JIS] = LAYOUT(
        KC_ESC,             KC_F1,   KC_F2,   KC_F3,  KC_F4,   KC_F5,   KC_F6,  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,    KC_F12,  KC_INS,
        JP_ZKHK,   KC_1,    KC_2,    KC_3,    KC_4,   KC_5,    KC_6,    KC_7,   KC_8,    KC_9,    KC_0,    JP_MINS, JP_CIRC,   KC_BSPC, KC_DEL,
        KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,   KC_T,    KC_Y,    KC_U,   KC_I,    KC_O,    KC_P,    JP_AT,   JP_LBRC,   JP_YEN,  KC_HOME,
        KC_LCAP,   KC_A,    KC_S,    KC_D,    KC_F,   KC_G,    KC_H,    KC_J,   KC_K,    KC_L,    JP_SCLN, JP_COLN, JP_RBRC,   KC_ENT,  KC_END,
        KC_LSHIFT, KC_Z,    KC_X,    KC_C,    KC_V,   KC_B,    KC_N,    KC_M,   JP_COMM, JP_DOT,  JP_SLSH, JP_BSLS, KC_RSHIFT, KC_UP,
        KC_LCTL,   KC_LGUI, KC_LALT, JP_MHEN, KC_SPC, JP_HENK, KC_LCTL, KC_ENT, JP_KANA, KC_RALT, KC_APP,           KC_LEFT,   KC_DOWN, KC_RIGHT
    )
};

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     bool result = false;
//     return result;
// }
