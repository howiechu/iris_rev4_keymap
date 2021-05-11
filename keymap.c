#include QMK_KEYBOARD_H

enum custom_keycodes {
  str1 = SAFE_RANGE,
  str2,
  str3,
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case str1:
      if (record->event.pressed) {
        SEND_STRING("str1");
      } else {

      }
      break;
    case str2:
      if (record->event.pressed) {
        SEND_STRING("str2");
      } else {

      }
      break;
    case str3:
      if (record->event.pressed) {
        SEND_STRING("str3");
      } else {

      }
      break;
  }
  return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [0] = LAYOUT(
  //┌───────────────┬──────────┬─────────┬────────┬───────────┬───────────┐                          ┌───────────┬────────┬────────┬────────┬────────┬────────┐
     KC_ESC,         str1,      str2,     str3,    SGUI(KC_4), SGUI(KC_5),                            C(A(KC_T)), _______, _______, _______, _______, KC_DEL,
  //├───────────────┼──────────┼─────────┼────────┼───────────┼───────────┤                          ├───────────┼────────┼────────┼────────┼────────┼────────┤
     KC_TAB,         KC_Q,      KC_W,     KC_E,    KC_R,       KC_T,                                  KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,    KC_BSLS,
  //├───────────────┼──────────┼─────────┼────────┼───────────┼───────────┤                          ├───────────┼────────┼────────┼────────┼────────┼────────┤
     LGUI_T(KC_ESC), KC_A,      KC_S,     KC_D,    KC_F,       KC_G,                                  KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  //├───────────────┼──────────┼─────────┼────────┼───────────┼───────────┼────────┐         ┌───────┼───────────┼────────┼────────┼────────┼────────┼────────┤
     KC_LSFT,        KC_Z,      KC_X,     KC_C,    KC_V,       KC_B,       KC_HOME,           KC_END, KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
  //└───────────────┴──────────┴───┬─────┴──┬─────┴──┬────────┴───────────┴────────┘         └────┬──┴─────┬─────┴──┬─────┴──┬─────┴────────┴────────┴────────┘
                                    TT(3),   TT(1),   KC_BSPC,                                     KC_SPC,  TT(2),   KC_LCTL
                                // └────────┴────────┴────────┘                                   └────────┴────────┴────────┘
  ),

  [1] = LAYOUT(
  //┌────────┬────────┬────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     KC_GRV,  _______, _______, _______, _______, _______,                            _______, _______, _______, _______, _______, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                               KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TO(0),   _______, _______, _______, _______, _______,                            _______, KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, _______,
  //├────────┼────────┼────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______, _______, _______, _______, _______, _______, KC_MPRV,          KC_MNXT, _______, _______, _______, _______, _______, _______,
  //└────────┴────────┴────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                    _______, _______, _______,                   _______, MO(4),   _______
                                // └────────┴────────┴────────┘                 └────────┴────────┴────────┘
  ),

  [2] = LAYOUT(
  //┌──────────┬────────┬────────┬────────┬─────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬────────┐
     S(KC_GRV), _______, _______, _______, _______,  _______,                            _______, _______, _______, _______, _______, _______,
  //├──────────┼────────┼────────┼────────┼─────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   KC_EXLM, KC_AT,   KC_HASH, KC_DLR,   KC_PERC,                            KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, _______,
  //├──────────┼────────┼────────┼────────┼─────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼────────┤
     TO(0),     _______, _______, _______, _______,  _______,                            _______, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, _______,
  //├──────────┼────────┼────────┼────────┼─────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼────────┤
     _______,   _______, _______, _______,  _______, _______, KC_MPLY,          KC_MUTE, _______, _______, _______, _______, _______, _______,
  //└──────────┴────────┴────────┴───┬────┴───┬─────┴──┬─────┴──┬─────┘        └───┬────┴───┬────┴───┬────┴───┬────┴────────┴────────┴────────┘
                                      _______, MO(4),   _______,                    _______, _______, _______
                                //   └────────┴────────┴────────┘                  └────────┴────────┴────────┘
  ),

  [3] = LAYOUT(
  //┌────────┬────────┬─────────┬─────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬───────────┐
     KC_F1,   KC_F2,   KC_F3,    KC_F4,    KC_F5,   KC_F6,                              KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  //├────────┼────────┼─────────┼─────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼───────────┤
     _______, _______, KC_UP,    _______,  _______, _______,                            KC_PMNS, KC_P4,   KC_P5,   KC_P6,   KC_PENT, _______,
  //├────────┼────────┼─────────┼──────────────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼───────────┤
     TO(0),   KC_LEFT, KC_DOWN,  KC_RIGHT, _______, _______,                            KC_PAST, KC_P1,   KC_P2,   KC_P3,   KC_PENT, _______,
  //├────────┼────────┼─────────┼─────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼───────────┤
     _______, _______, _______,  _______,  _______, _______, _______,          _______, KC_PSLS, KC_P0,   KC_P0,   KC_PDOT, _______, _______,
  //└────────┴────────┴─────────┴───┬─────┴───┬────┴───┬────┴───┬────┘        └─┬──────┴─┬──────┴─┬──────┴─┬──────┴────────┴────────┴───────────┘
                                     _______,  _______, _______,                 _______, _______, _______
                                  //└─────────┴────────┴────────┘               └────────┴────────┴────────┘
  ),

  [4] = LAYOUT(
  //┌────────┬──────────┬─────────┬────────┬────────┬────────┐                          ┌────────┬────────┬────────┬────────┬────────┬─────────────┐
     _______, _______,   _______,  _______, _______, _______,                            _______, _______, _______, _______, _______, G(C(KC_Q)),
  //├────────┼──────────┼─────────┼────────┼────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼─────────────┤
     _______, _______,   _______,  _______, _______, _______,                            _______, _______, _______, _______, _______, A(G(KC_ESC)),
  //├────────┼──────────┼─────────┼─────────────────┼────────┤                          ├────────┼────────┼────────┼────────┼────────┼─────────────┤
     TO(0),   RGB_TOG,   RGB_HUI,  RGB_SAI, RGB_VAI, _______,                            _______, _______, _______, _______, _______, RESET,
  //├────────┼──────────┼─────────┼────────┼────────┼────────┼────────┐        ┌────────┼────────┼────────┼────────┼────────┼────────┼─────────────┤
     _______, RGB_MOD,   RGB_HUD,  RGB_SAD, RGB_VAD, _______, _______,          _______, _______, _______, _______, _______, _______, _______,
  //└────────┴──────────┴─────────┴───┬────┴───┬────┴───┬────┴───┬────┘        └─┬──────┴─┬──────┴─┬──────┴─┬──────┴────────┴────────┴─────────────┘
                                       _______, _______, _______,                 _______, _______, _______
                                  //  └────────┴────────┴────────┘               └────────┴────────┴────────┘
  )
};

void encoder_update_user(uint8_t index, bool clockwise) {
  if (index == 0) {
    if(IS_LAYER_ON(1)) {
      if (clockwise) {
        tap_code16(C(KC_PGUP));
      }
      else {
        tap_code16(C(KC_PGDN));
      }
    }
    else {
      if (clockwise) {
        tap_code(KC_WH_D);
      }
      else {
        tap_code(KC_WH_U);
      }
    }
  }
  else if (index == 1) {
    if(IS_LAYER_ON(2)) {
      if (clockwise) {
        tap_code(KC_BRMD);
      }
      else {
        tap_code(KC_BRMU);
      }
    }
    else {
      if (clockwise) {
        tap_code(KC_VOLD);
      }
      else {
        tap_code(KC_VOLU);
      }
    }
  }
}