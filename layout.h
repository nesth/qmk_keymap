// layers
#define BASE 0
#define LOWER 1
#define RAISE 2
#define ADJUST 3

// Mod-Tap
#define KC_LGESC LGUI_T(KC_ESC)
#define RATLCOL LCTL_T(KC_COLN)
#define KC_RACL KC_COLN

// Default 3x6_3 split layout
#define _BASE \
    KC_TAB,     KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,       KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_BSPC,  \
    KC_LCTL,    KC_A,   KC_S,   KC_D,   KC_F,   KC_G,       KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT, \
    SC_LSPO,    KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,       KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,SC_RSPC, \
                                KC_LGESC,LOWER, KC_SPC,     KC_ENT, RAISE,  KC_RACL

#define _LOWER \
    KC_ESC,     KC_1,   KC_2,   KC_3,   KC_4,   KC_5,       KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_DEL, \
    KC_LCTL,    KC_NO,  KC_MS_L,KC_BTN1,KC_BTN2,KC_BTN3,    KC_LEFT,KC_DOWN,KC_UP,  KC_RIGHT,KC_NO, KC_NO, \
    KC_LSFT,    KC_NO,  KC_BTN2,KC_WH_D,KC_WH_U,KC_BTN1,    KC_HOME,KC_PGDN,KC_PGUP,KC_END,  KC_NO, KC_NO, \
                                KC_LGUI,LOWER,  KC_SPC,     KC_ENT, RAISE,  KC_RACL

#define _RAISE \
    KC_ESC,     KC_EXLM,KC_AT,  KC_HASH,KC_DLR, KC_PERC,    KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,KC_BSPC, \
    KC_LCTL,    KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,      KC_MINS,KC_EQL, KC_LCBR,KC_RCBR,KC_PIPE,KC_GRV, \
    KC_LSFT,    KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10,     KC_UNDS,KC_PLUS,KC_LBRC,KC_RBRC,KC_BSLS,KC_TILD, \
                                KC_LGUI, LOWER, KC_SPC,     KC_ENT, RAISE,  KC_RALT

#define _ADJUST \
    QK_BOOT,    RGB_M_P,KC_NO,  KC_NO,  KC_NO,  EH_LEFT,    EH_RGHT,KC_MUTE,KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    RGB_TOG,    RGB_HUI,RGB_SAI,RGB_VAI,RGB_SPI,KC_NO,      KC_PAUS,KC_VOLU,KC_NO,  KC_NO,  KC_NO,  KC_NO, \
    RGB_MOD,    RGB_HUD,RGB_SAD,RGB_VAD,RGB_SPD,KC_NO,      KC_SCRL,KC_VOLD,KC_NO,  KC_NO,  KC_NO,  RGB_RMOD, \
                                KC_LGUI,LOWER,  KC_SPC,     KC_ENT, RAISE, KC_RALT

#define _TRACK1 \
    KC_BTN1, KC_BTN3, KC_BTN2, \
        KC_BTN4, LT(1, KC_BTN5)

#define _TRACK2 \
    DRAG_SCROLL, KC_NO, KC_NO, \
        KC_NO, KC_NO

#define _TRACK3 \
    KC_NO, KC_NO, KC_NO \
        KC_NO, KC_NO

#define LAYOUT_crkbd_w(...) LAYOUT_split_3x6_3(__VA_ARGS__)
#define LAYOUT_trackball_c(...) LAYOUT(__VA_ARGS__)
