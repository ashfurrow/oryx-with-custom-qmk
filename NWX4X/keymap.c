#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
};


typedef struct {
    uint16_t tap;
    uint16_t hold;
    uint16_t held;
} tap_dance_tap_hold_t;
tap_dance_action_t *action;

enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    RGB_TOG,        KC_1,           KC_2,           KC_3,           TD(DANCE_0),    TD(DANCE_1),                                    KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_SYSTEM_SLEEP,
    CW_TOGG,        TD(DANCE_2),    TD(DANCE_3),    KC_E,           TD(DANCE_4),    TD(DANCE_5),                                    KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_TRANSPARENT, 
    TD(DANCE_6),    MT(MOD_LCTL, KC_A),MT(MOD_LALT, KC_S),MT(MOD_LGUI, KC_D),MT(MOD_LSFT, KC_F),KC_G,                                           KC_H,           MT(MOD_RSFT, KC_J),MT(MOD_RGUI, KC_K),MT(MOD_RALT, KC_L),MT(MOD_RCTL, KC_SCLN),KC_QUOTE,       
    KC_GRAVE,       TD(DANCE_7),    TD(DANCE_8),    TD(DANCE_9),    TD(DANCE_10),   KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_BSLS,        
                                                    LT(2,KC_SPACE), KC_BSPC,                                        ALL_T(KC_TAB),  LT(1,KC_ENTER)
  ),
  [1] = LAYOUT_voyager(
    QK_DYNAMIC_TAPPING_TERM_UP,KC_F14,         KC_F15,         KC_AUDIO_MUTE,  KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,                                KC_TRANSPARENT, KC_TRANSPARENT, LGUI(KC_UP),    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    QK_DYNAMIC_TAPPING_TERM_DOWN,RGB_VAD,        RGB_VAI,        LALT(KC_DELETE),LALT(KC_BSPC),  KC_TRANSPARENT,                                 LCTL(LSFT(KC_TAB)),LALT(KC_LEFT),  KC_UP,          LALT(KC_RIGHT), LCTL(KC_TAB),   KC_TRANSPARENT, 
    QK_DYNAMIC_TAPPING_TERM_PRINT,KC_LEFT_CTRL,   KC_LEFT_ALT,    MT(MOD_LGUI, KC_DELETE),KC_LEFT_SHIFT,  KC_TRANSPARENT,                                 LGUI(KC_LEFT),  KC_LEFT,        KC_DOWN,        KC_RIGHT,       LGUI(KC_RIGHT), KC_TRANSPARENT, 
    RGB_MODE_FORWARD,RGB_SPD,        RGB_SPI,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, LGUI(KC_LBRC),  LGUI(KC_DOWN),  LGUI(KC_RBRC),  KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_COLN,        KC_QUES,        KC_LABK,        KC_RABK,        KC_DQUO,                                        KC_TRANSPARENT, KC_UNDS,        KC_PLUS,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCLN,        KC_SLASH,       KC_COMMA,       KC_DOT,         KC_QUOTE,                                       KC_TRANSPARENT, KC_MINUS,       KC_EQUAL,       KC_LBRC,        KC_RBRC,        KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_SPACE,       KC_TRANSPARENT
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,                                          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_F11,         KC_F12,         KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          OSM(MOD_LSFT),  KC_NO,                                          KC_NO,          OSM(MOD_RSFT),  KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                    KC_NO,          KC_NO,                                          KC_NO,          KC_NO
  ),
};

const uint16_t PROGMEM combo0[] = { TD(DANCE_0), TD(DANCE_0), KC_E, TD(DANCE_0), COMBO_END};
const uint16_t PROGMEM combo1[] = { OSM(MOD_LSFT), OSM(MOD_RSFT), COMBO_END};
const uint16_t PROGMEM combo2[] = { KC_GRAVE, KC_BSLS, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo0, TO(4)),
    COMBO(combo1, TO(0)),
    COMBO(combo2, OSL(3)),
};

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case TD(DANCE_2):
            return g_tapping_term + 40;
        case TD(DANCE_3):
            return g_tapping_term + 40;
        case TD(DANCE_4):
            return g_tapping_term + 40;
        case MT(MOD_LALT, KC_S):
            return g_tapping_term + 20;
        case MT(MOD_LSFT, KC_F):
            return g_tapping_term -40;
        case LT(2,KC_SPACE):
            return g_tapping_term -40;
        case MT(MOD_RSFT, KC_J):
            return g_tapping_term -20;
        case MT(MOD_RALT, KC_L):
            return g_tapping_term + 20;
        default:
            return g_tapping_term;
    }
}

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [1] = { {140,26,255}, {45,255,255}, {45,255,255}, {100,241,248}, {100,241,248}, {100,241,248}, {140,26,255}, {140,26,255}, {140,26,255}, {213,244,245}, {0,255,255}, {0,0,0}, {140,26,255}, {169,255,255}, {169,255,255}, {213,244,245}, {169,255,255}, {0,0,0}, {140,26,255}, {140,26,255}, {140,26,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,255,255}, {0,0,0}, {0,0,0}, {0,245,245}, {0,0,0}, {0,0,0}, {0,0,0}, {41,255,255}, {0,245,245}, {188,255,255}, {0,245,245}, {41,255,255}, {0,0,0}, {41,255,255}, {188,255,255}, {188,255,255}, {188,255,255}, {41,255,255}, {0,0,0}, {0,0,0}, {41,255,255}, {0,245,245}, {41,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {169,255,255}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {0,0,0}, {169,255,255}, {169,255,255}, {74,255,202}, {74,255,202}, {169,255,255}, {0,0,0}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {169,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {147,183,204}, {147,183,204}, {147,183,204}, {74,255,202}, {74,255,202}, {0,0,0}, {0,0,0}, {169,255,255}, {0,255,255}, {74,255,202}, {74,255,202}, {0,0,0}, {0,0,0}, {169,255,255}, {0,255,255}, {74,255,202}, {74,255,202}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,0}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {0,0,0}, {147,183,204}, {147,183,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {147,183,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {147,183,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {147,183,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {

    case TD(DANCE_0):
    case TD(DANCE_1):
    case TD(DANCE_2):
    case TD(DANCE_3):
    case TD(DANCE_4):
    case TD(DANCE_5):
    case TD(DANCE_6):
    case TD(DANCE_7):
    case TD(DANCE_8):
    case TD(DANCE_9):
    case TD(DANCE_10):
        action = &tap_dance_actions[TD_INDEX(keycode)];
        if (!record->event.pressed && action->state.count && !action->state.finished) {
            tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)action->user_data;
            tap_code16(tap_hold->tap);
        }
        break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

void tap_dance_tap_hold_finished(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (state->pressed) {
        if (state->count == 1
#ifndef PERMISSIVE_HOLD
            && !state->interrupted
#endif
        ) {
            register_code16(tap_hold->hold);
            tap_hold->held = tap_hold->hold;
        } else {
            register_code16(tap_hold->tap);
            tap_hold->held = tap_hold->tap;
        }
    }
}

void tap_dance_tap_hold_reset(tap_dance_state_t *state, void *user_data) {
    tap_dance_tap_hold_t *tap_hold = (tap_dance_tap_hold_t *)user_data;

    if (tap_hold->held) {
        unregister_code16(tap_hold->held);
        tap_hold->held = 0;
    }
}

#define ACTION_TAP_DANCE_TAP_HOLD(tap, hold) \
    { .fn = {NULL, tap_dance_tap_hold_finished, tap_dance_tap_hold_reset}, .user_data = (void *)&((tap_dance_tap_hold_t){tap, hold, 0}), }


tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_TAP_HOLD(KC_4, LGUI(LSFT(KC_4))),
        [DANCE_1] = ACTION_TAP_DANCE_TAP_HOLD(KC_5, LGUI(LSFT(KC_5))),
        [DANCE_2] = ACTION_TAP_DANCE_TAP_HOLD(KC_Q, LGUI(KC_Q)),
        [DANCE_3] = ACTION_TAP_DANCE_TAP_HOLD(KC_W, LGUI(KC_W)),
        [DANCE_4] = ACTION_TAP_DANCE_TAP_HOLD(KC_R, LGUI(KC_R)),
        [DANCE_5] = ACTION_TAP_DANCE_TAP_HOLD(KC_T, LGUI(KC_T)),
        [DANCE_6] = ACTION_TAP_DANCE_TAP_HOLD(KC_ESCAPE, LALT(LGUI(KC_ESCAPE))),
        [DANCE_7] = ACTION_TAP_DANCE_TAP_HOLD(KC_Z, LGUI(KC_Z)),
        [DANCE_8] = ACTION_TAP_DANCE_TAP_HOLD(KC_X, LGUI(KC_X)),
        [DANCE_9] = ACTION_TAP_DANCE_TAP_HOLD(KC_C, LGUI(KC_C)),
        [DANCE_10] = ACTION_TAP_DANCE_TAP_HOLD(KC_V, LGUI(KC_V)),
};

// https://docs.qmk.fm/tap_hold#quick-tap-term
uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        // Apply "Tapping Force Hold" (aka "Quick Tap Term") for these keys.
        case LT(2,KC_SPACE):
            return 0;
        default:
            return QUICK_TAP_TERM;
    }
}
