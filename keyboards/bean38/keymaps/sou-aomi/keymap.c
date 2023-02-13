/* Copyright 2022 sou_aomi
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

// Defines names for use in layer keycodes and the keymap
enum layer_number {
  _DEFAULT = 0,
  _LOWER,
  _RAISE,
  _ADJUST,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT(
  //,--------------------------------------------.                                        ,--------------------------------------------.
      LGUI_T(KC_Q), KC_W, KC_E,  KC_R,    KC_T,                                              KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,
  //|--------+--------+--------+--------+--------|                                        |--------+--------+--------+--------+--------|
      KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                                             KC_H,    KC_J,    KC_K,    KC_L,   KC_SCLN,
  //|--------+--------+--------+--------+--------|                                        |--------+--------+--------+--------+--------|
      KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                                             KC_N,    KC_M,   KC_COMM,   KC_SLSH, KC_BSPC,
  //|--------+--------+--------+--------+--------+------------| 　　    |------------------+--------+--------+--------+--------+--------|
              KC_LALT,          KC_LSFT, KC_HANJ, LT(_LOWER, KC_SPC),   LT(_RAISE, KC_ENT), KC_HAEN, KC_RSFT,          KC_RCTL
  //         |--------+--------+--------+--------+------------.        |------------------+--------+--------+--------+--------+--------|

  ),

    [_LOWER] = LAYOUT(
  //,--------------------------------------------.                      ,--------------------------------------------.
      KC_TAB, LGUI(KC_W), KC_EXLM, S(KC_SLSH), KC_MINS,                    KC_EQL,  KC_BSLS, KC_LPRN, KC_RPRN, KC_GRV,
  //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
      KC_BSPC, KC_ENT,  KC_HASH, KC_PSLS, KC_COMM,                        KC_DOT,  KC_LEFT, KC_UP,  KC_RIGHT, KC_QUOT,
  //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
    LGUI(KC_Z),LGUI(KC_X),LGUI(KC_C),LGUI(KC_V),KC_LBRC,                  KC_RBRC, XXXXXXX, KC_DOWN, XXXXXXX, KC_DEL,
  //|--------+--------+--------+--------+--------+--------|   |---------+--------+--------+--------+--------+--------|
               _______,    LGUI(S(KC_4)), _______, _______,     KC_SPC,  _______, _______,         _______
  //         |--------+--------+--------+--------+--------.   |---------+--------+--------+--------+--------+--------|
  ),

    [_RAISE] = LAYOUT(
  //,--------------------------------------------.                      ,--------------------------------------------.
      KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                           KC_6,    KC_7,    KC_8,    KC_9,    KC_0,
  //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
      KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                        KC_DOT, KC_AMPR, KC_ASTR, KC_UNDS, KC_CIRC,
  //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
      KC_TAB,  KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS,                       KC_PIPE, KC_GRAVE, KC_PLUS, KC_LCBR, KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|   |---------+--------+--------+--------+--------+--------|
               _______,          KC_LSFT, _______, _______,    _______,  _______, _______,          _______
  //         |--------+--------+--------+--------+--------.   |---------+--------+--------+--------+--------+--------|
  ),

   [_ADJUST] = LAYOUT(
     //,--------------------------------------------.                      ,--------------------------------------------.
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
     //|--------+--------+--------+--------+--------|                      |--------+--------+--------+--------+--------|
         XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______,
     //|--------+--------+--------+--------+--------+--------|   |---------+--------+--------+--------+--------+--------|
                  _______,         _______, _______, _______,      _______,  _______, _______,          _______
     //         |--------+--------+--------+--------+--------.   |---------+--------+--------+--------+--------+--------|
    )
};
