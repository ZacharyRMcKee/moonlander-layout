#include QMK_KEYBOARD_H
#include "version.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  HSV_0_255_255,
  HSV_86_255_128,
  HSV_172_255_255,
  JBO_PA,
  JBO_RE,
  JBO_CI,
  JBO_VO,
  JBO_MU,
  JBO_GAhU,
  JBO_LE,
  JBO_LO,
  JBO_LA,
  JBO_NIhA,
  JBO_PU,
  JBO_CA,
  JBO_BA,
  JBO_ZUhA,
  JBO_RIhU,
  JBO_NU,
  JBO_XU,
  JBO_XA,
  JBO_ZE,
  JBO_BI,
  JBO_SO,
  JBO_NO,
  JBO_ZIhO,
  JBO_LOhU,
  JBO_LU,
  JBO_ZOI,
  JBO_CAhU,
  JBO_TIhA,
  JBO_VEI,
  JBO_VEhO,
  JBO_ZO,
  JBO_I,
  JBO_NOI,
  JBO_FOh,
  JBO_KOhA,
  JBO_KOhE,
  JBO_KOhI,
  JBO_KOhO,
  JBO_KOhU,
  JBO_GOI,
  JBO_LEI,
  JBO_LOI,
  JBO_LAI,
  JBO_KU,
  JBO_CU,
  JBO_KEI,
  JBO_DUhU,
  JBO_KA,
  JBO_CEI,
  JBO_BRODA,
  JBO_BRODE,
  JBO_BRODI,
  JBO_BRODO,
  JBO_BRODU,
  JBO_FA,
  JBO_FE,
  JBO_FI,
  JBO_FO,
  JBO_FU,
  JBO_SE,
  JBO_TE,
  JBO_VE,
  JBO_XE,
  JBO_LEhU,
  JBO_LIhU,
  JBO_KUhO,
  JBO_POI,
  JBO_AhA,
  JBO_EhA,
  JBO_IhA,
  JBO_OhA,
  JBO_UhA,
  JBO_ROhA,
  JBO_ROhU,
  JBO_AhE,
  JBO_EhE,
  JBO_IhE,
  JBO_OhE,
  JBO_UhE,
  JBO_ROhE,
  JBO_REhE,
  JBO_AhI,
  JBO_EhI,
  JBO_IhI,
  JBO_OhI,
  JBO_UhI,
  JBO_ROhI,
  JBO_AhO,
  JBO_EhO,
  JBO_IhO,
  JBO_OhO,
  JBO_UhO,
  JBO_ROhO,
  JBO_AhU,
  JBO_EhU,
  JBO_IhU,
  JBO_OhU,
  JBO_UhU,
  JBO_NAI,
  JBO_UA,
  JBO_IA,
  JBO_UE,
  JBO_IE,
  JBO_UI,
  JBO_OI,
  JBO_II,
  JBO_EI,
  JBO_AI,
  JBO_UO,
  JBO_IO,
  JBO_PEI,
  JBO_UU,
  JBO_IU,
  JBO_AU,
  JBO_CUhI,
  JBO_RUhE,
  JBO_SAI,
  JBO_CAI,
  DE_LSPO,
  DE_RSPC,
  JBO_NAICAI,
  JBO_NAISAI,
  JBO_NAIRUhE,
  JBO_LAhE,
  JBO_LEhE,
  JBO_LOhE,
  JBO_LUhE,
  JBO_LI,
  JBO_LAhI,
  JBO_LEhI,
  JBO_LOhI,
  JBO_LUhI,
  JBO_JAI
};

enum layers {
    BASE,
    GAMING, 
    SYMBOLS,
    MEDIA,
    JBOSUhA,
    JBOGAhI,
    CNIMAhO
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_PGUP,                                        TG(1),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_PGDOWN,                                      TG(2),          KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_EQUAL,       
    KC_BSPACE,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           TG(4),                                          TG(3),          KC_H,           KC_J,           KC_K,           KC_L,           LT(2,KC_SCOLON),LGUI_T(KC_QUOTE),
    KC_LSHIFT,      KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         RCTL_T(KC_SLASH),KC_RSHIFT,      
    KC_LCTRL,       KC_LGUI,        KC_LALT,        KC_LEFT,        KC_RIGHT,                       KC_DELETE,                                      KC_BSPACE,                      KC_UP,          KC_DOWN,        KC_LBRACKET,    KC_RBRACKET,    KC_GRAVE,       
                                                                    KC_SPACE,       KC_LSHIFT,      KC_COLN,                                        KC_TAB,         KC_RSHIFT,      KC_ENTER
  ),
  [GAMING] = LAYOUT_moonlander(
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_TAB,         KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_A,           KC_S,           KC_D,           KC_F,           KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_LSHIFT,      KC_Z,           KC_X,           KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                          KC_NO,                                          KC_NO,                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                                    KC_SPACE,       KC_H,           KC_NO,                                          KC_NO,          KC_NO,          KC_TRANSPARENT
  ),
  [SYMBOLS] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_NO,                                          KC_NO,          KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_NO,          KC_EXLM,        KC_AT,          KC_LCBR,        KC_RCBR,        KC_PIPE,        KC_NO,                                          KC_NO,          KC_UP,          KC_7,           KC_8,           KC_9,           KC_ASTR,        KC_F12,         
    KC_NO,          KC_HASH,        KC_DLR,         KC_LPRN,        KC_RPRN,        KC_GRAVE,       KC_NO,                                          KC_NO,          KC_DOWN,        KC_4,           KC_5,           KC_6,           KC_KP_PLUS,     KC_NO,          
    KC_NO,          KC_PERC,        KC_CIRC,        KC_LBRACKET,    KC_RBRACKET,    KC_TILD,                                                                        KC_AMPR,        KC_1,           KC_2,           KC_3,           KC_BSLASH,      KC_NO,          
    KC_NO,          KC_COMMA,       HSV_0_255_255,  HSV_86_255_128, HSV_172_255_255,                RGB_MOD,                                        RGB_TOG,                        KC_NO,          KC_DOT,         KC_0,           KC_EQUAL,       KC_NO,          
                                                                    RGB_VAD,        RGB_VAI,        KC_NO,                                          KC_NO,          RGB_HUD,        RGB_HUI
  ),
  [MEDIA] = LAYOUT_moonlander(
    AU_TOG,         KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          RESET,          
    MU_TOG,         KC_NO,          KC_NO,          KC_MS_UP,       KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_NO,          KC_UP,          KC_NO,          KC_NO,          KC_NO,          
    MU_MOD,         KC_NO,          KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_MEDIA_PLAY_PAUSE,
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_NO,  KC_NO,          
    KC_NO,          KC_NO,          KC_NO,          KC_MS_BTN1,     KC_MS_BTN2,                     KC_NO,                                          KC_NO,                          KC_AUDIO_VOL_UP,KC_AUDIO_VOL_DOWN,KC_AUDIO_MUTE,  KC_NO,        KC_NO,          
                                                                    KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_NO,          KC_WWW_BACK
  ),
  [JBOSUhA] = LAYOUT_moonlander(
    KC_TAB,         JBO_PA,         JBO_RE,         JBO_CI,         JBO_VO,         JBO_MU,         JBO_GAhU,                                       KC_NO,          JBO_XA,         JBO_ZE,         JBO_BI,         JBO_SO,         JBO_NO,         JBO_ZIhO,    
    JBO_LE,         JBO_LO,         JBO_LA,         KC_NO,          KC_NO,          KC_NO,          JBO_NIhA,                                       TO(6),          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_MINUS,       
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                          KC_NO,          KC_QUOTE,       KC_NO,          KC_NO,          KC_NO,          JBO_LOhU,       JBO_LU,    
    KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,                                                                          KC_NO,          KC_NO,          KC_COMMA,       KC_DOT,         JBO_ZOI,        KC_NO,          
    JBO_PU,         JBO_CA,         JBO_BA,         JBO_ZUhA,       JBO_RIhU,                       OSL(5),                                         KC_NO,                          JBO_CAhU,       JBO_TIhA,       JBO_VEI,        JBO_VEhO,       JBO_ZO,    
                                                                    KC_NO,          JBO_NU,         JBO_XU,                                         JBO_I,          JBO_NOI,        KC_TRANSPARENT
  ),
  [JBOGAhI] = LAYOUT_moonlander(
    JBO_FOh,        JBO_KOhA,       JBO_KOhE,       JBO_KOhI,       JBO_KOhO,       JBO_KOhU,       JBO_GOI,                                        JBO_CEI,        JBO_BRODA,      JBO_BRODE,      JBO_BRODI,      JBO_BRODO,      JBO_BRODU,      KC_NO,          
    KC_NO,          JBO_LAhE,       JBO_LEhE,       KC_NO,          JBO_LOhE,       JBO_LUhE,       JBO_CU,                                         TO(6),          JBO_FA,         JBO_FE,         JBO_FI,         JBO_FO,         JBO_FU,         KC_NO,          
    KC_NO,          JBO_LA,         JBO_LE,         JBO_LI,         JBO_LO,         JBO_LU,         JBO_KU,                                         KC_NO,          JBO_JAI,        JBO_SE,         JBO_TE,         JBO_VE,         JBO_XE,         JBO_LIhU,    
    KC_NO,          JBO_LAhI,       JBO_LEhI,       KC_NO,          JBO_LOhI,       JBO_LUhI,                                                                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          JBO_LEhU,          
    KC_NO,          JBO_LAI,        JBO_LEI,        KC_NO,          JBO_LOI,                        KC_NO,                                          JBO_KUhO,                       KC_NO,          KC_NO,          KC_NO,          KC_NO,          KC_NO,          
                                                                    JBO_KEI,        JBO_DUhU,       JBO_KA,                                         JBO_KUhO,       JBO_NOI,        JBO_POI
  ),
  [CNIMAhO] = LAYOUT_moonlander(
    JBO_AhA,        JBO_EhA,        JBO_IhA,        JBO_OhA,        JBO_UhA,        JBO_ROhA,       JBO_ROhU,                                       KC_NO,          KC_NO,          JBO_UA,         KC_NO,          JBO_IA,         KC_NO,          KC_NO,          
    JBO_AhE,        JBO_EhE,        JBO_IhE,        JBO_OhE,        JBO_UhE,        JBO_ROhE,       JBO_REhE,                                       TO(4),          KC_NO,          JBO_UE,         KC_SPACE,       JBO_IE,         KC_BSPACE,      KC_NO,          
    JBO_AhI,        JBO_EhI,        JBO_IhI,        JBO_OhI,        JBO_UhI,        JBO_ROhI,       KC_NO,                                          KC_NO,          KC_NO,          JBO_UI,         JBO_OI,         JBO_II,         JBO_EI,         JBO_AI,   
    JBO_AhO,        JBO_EhO,        JBO_IhO,        JBO_OhO,        JBO_UhO,        JBO_ROhO,                                                                       KC_NO,          JBO_UO,         KC_DOT,         JBO_IO,         JBO_PEI,        KC_NO,          
    JBO_AhU,        JBO_EhU,        JBO_IhU,        JBO_OhU,        JBO_UhU,                        JBO_NAI,                                        JBO_CUhI,                       JBO_UU,         KC_NO,          JBO_IU,         KC_NO,          JBO_AU,   
                                                                    JBO_NAICAI,     JBO_NAISAI,     JBO_NAIRUhE,                                    JBO_RUhE,       JBO_SAI,        JBO_CAI
  ),
};

extern bool g_suspend_state;
extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255}, {139,127,255} },

    [2] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {72,222,234}, {72,222,234}, {72,222,234}, {0,0,0}, {0,0,0}, {72,222,234}, {72,222,234}, {72,222,234}, {0,0,0}, {0,0,0}, {72,222,234}, {72,222,234}, {72,222,234}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [3] = { {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,255}, {0,0,255}, {0,0,255}, {134,255,213}, {134,255,213}, {0,0,255}, {72,222,234}, {0,0,255}, {0,0,255}, {134,255,213}, {0,0,255}, {85,203,158}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {131,176,255}, {152,254,255}, {152,254,255}, {0,0,255}, {131,176,255}, {131,176,255}, {152,254,255}, {152,254,255}, {0,0,255}, {0,0,255}, {131,176,255}, {0,0,255}, {152,254,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255} },

    [4] = { {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {32,255,234}, {172,166,244}, {129,195,255}, {224,136,255}, {224,136,255}, {32,255,234}, {172,166,244}, {129,195,255}, {224,136,255}, {224,136,255}, {32,255,234}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {12,225,241}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {12,225,241}, {12,225,241}, {224,136,255}, {224,136,255}, {146,224,255}, {146,224,255}, {146,224,255}, {172,166,244}, {224,136,255}, {240,225,255}, {224,136,255}, {240,225,255}, {172,166,244}, {224,136,255}, {240,225,255}, {240,225,255}, {172,166,244}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {172,166,244}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {12,225,241}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {12,225,241}, {172,166,244}, {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {224,136,255}, {146,224,255}, {146,224,255}, {224,136,255} },

    [6] = { {5,255,255}, {5,255,255}, {5,255,255}, {5,255,255}, {5,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {23,255,255}, {43,255,215}, {43,255,215}, {43,255,215}, {43,255,215}, {43,255,215}, {87,253,248}, {87,253,248}, {87,253,248}, {87,253,248}, {87,253,248}, {132,224,255}, {132,224,255}, {132,224,255}, {132,224,255}, {132,224,255}, {168,224,255}, {168,224,255}, {168,224,255}, {168,224,255}, {196,252,255}, {196,252,255}, {0,0,195}, {196,252,255}, {196,252,255}, {196,252,255}, {196,252,255}, {0,0,195}, {0,0,195}, {5,255,255}, {0,0,195}, {5,255,255}, {0,0,195}, {0,0,195}, {23,255,255}, {0,0,195}, {0,0,195}, {43,255,215}, {43,255,215}, {43,255,215}, {43,255,215}, {43,255,215}, {0,0,195}, {0,0,195}, {87,253,248}, {0,0,195}, {0,0,195}, {132,224,255}, {132,224,255}, {132,224,255}, {132,224,255}, {132,224,255}, {0,0,195}, {0,0,195}, {0,0,195}, {0,0,195}, {0,0,195}, {0,0,195}, {0,0,195}, {196,252,255}, {196,252,255}, {196,252,255}, {196,252,255} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
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

void rgb_matrix_indicators_user(void) {
  if (g_suspend_state || keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
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
    case 6:
      set_layer_color(6);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case JBO_PA:
    if (record->event.pressed) {
      SEND_STRING("pa");

    }
    break;
    case JBO_RE:
    if (record->event.pressed) {
      SEND_STRING("re");

    }
    break;
    case JBO_CI:
    if (record->event.pressed) {
      SEND_STRING("ci");

    }
    break;
    case JBO_VO:
    if (record->event.pressed) {
      SEND_STRING("vo");

    }
    break;
    case JBO_MU:
    if (record->event.pressed) {
      SEND_STRING("mu");

    }
    break;
    case JBO_GAhU:
    if (record->event.pressed) {
      SEND_STRING("ga'u");

    }
    break;
    case JBO_LE:
    if (record->event.pressed) {
      SEND_STRING("le");

    }
    break;
    case JBO_LO:
    if (record->event.pressed) {
      SEND_STRING("lo");

    }
    break;
    case JBO_LA:
    if (record->event.pressed) {
      SEND_STRING("la");

    }
    break;
    case JBO_NIhA:
    if (record->event.pressed) {
      SEND_STRING("ni'a");

    }
    break;
    case JBO_PU:
    if (record->event.pressed) {
      SEND_STRING("pu");

    }
    break;
    case JBO_CA:
    if (record->event.pressed) {
      SEND_STRING("ca");

    }
    break;
    case JBO_BA:
    if (record->event.pressed) {
      SEND_STRING("ba");

    }
    break;
    case JBO_ZUhA:
    if (record->event.pressed) {
      SEND_STRING("zu'a");

    }
    break;
    case JBO_RIhU:
    if (record->event.pressed) {
      SEND_STRING("ri'u");

    }
    break;
    case JBO_NU:
    if (record->event.pressed) {
      SEND_STRING("nu");

    }
    break;
    case JBO_XU:
    if (record->event.pressed) {
      SEND_STRING("xu");

    }
    break;
    case JBO_XA:
    if (record->event.pressed) {
      SEND_STRING("xa");

    }
    break;
    case JBO_ZE:
    if (record->event.pressed) {
      SEND_STRING("ze");

    }
    break;
    case JBO_BI:
    if (record->event.pressed) {
      SEND_STRING("bi");

    }
    break;
    case JBO_SO:
    if (record->event.pressed) {
      SEND_STRING("so");

    }
    break;
    case JBO_NO:
    if (record->event.pressed) {
      SEND_STRING("no");

    }
    break;
    case JBO_ZIhO:
    if (record->event.pressed) {
      SEND_STRING("zi'o");

    }
    break;
    case JBO_LOhU:
    if (record->event.pressed) {
      SEND_STRING("lo'u");

    }
    break;
    case JBO_LU:
    if (record->event.pressed) {
      SEND_STRING("lu");

    }
    break;
    case JBO_ZOI:
    if (record->event.pressed) {
      SEND_STRING("zoi");

    }
    break;
    case JBO_CAhU:
    if (record->event.pressed) {
      SEND_STRING("ca'u");

    }
    break;
    case JBO_TIhA:
    if (record->event.pressed) {
      SEND_STRING("ti'a");

    }
    break;
    case JBO_VEI:
    if (record->event.pressed) {
      SEND_STRING("vei");

    }
    break;
    case JBO_VEhO:
    if (record->event.pressed) {
      SEND_STRING("ve'o");

    }
    break;
    case JBO_ZO:
    if (record->event.pressed) {
      SEND_STRING("zo");

    }
    break;
    case JBO_I:
    if (record->event.pressed) {
      SEND_STRING(".i");

    }
    break;
    case JBO_NOI:
    if (record->event.pressed) {
      SEND_STRING("noi");

    }
    break;
    case JBO_FOh:
    if (record->event.pressed) {
      SEND_STRING("fo'");

    }
    break;
    case JBO_KOhA:
    if (record->event.pressed) {
      SEND_STRING("ko'a");

    }
    break;
    case JBO_KOhE:
    if (record->event.pressed) {
      SEND_STRING("ko'e");

    }
    break;
    case JBO_KOhI:
    if (record->event.pressed) {
      SEND_STRING("ko'i");

    }
    break;
    case JBO_KOhO:
    if (record->event.pressed) {
      SEND_STRING("ko'o");

    }
    break;
    case JBO_KOhU:
    if (record->event.pressed) {
      SEND_STRING("ko'u");

    }
    break;
    case JBO_GOI:
    if (record->event.pressed) {
      SEND_STRING("goi");

    }
    break;
    case JBO_LEI:
    if (record->event.pressed) {
      SEND_STRING("lei");

    }
    break;
    case JBO_LOI:
    if (record->event.pressed) {
      SEND_STRING("loi");

    }
    break;
    case JBO_LAI:
    if (record->event.pressed) {
      SEND_STRING("lai");

    }
    break;
    case JBO_KU:
    if (record->event.pressed) {
      SEND_STRING("ku");

    }
    break;
    case JBO_CU:
    if (record->event.pressed) {
      SEND_STRING("cu");

    }
    break;
    case JBO_KEI:
    if (record->event.pressed) {
      SEND_STRING("kei");

    }
    break;
    case JBO_DUhU:
    if (record->event.pressed) {
      SEND_STRING("du'u");

    }
    break;
    case JBO_KA:
    if (record->event.pressed) {
      SEND_STRING("ka");

    }
    break;
    case JBO_CEI:
    if (record->event.pressed) {
      SEND_STRING("cei");

    }
    break;
    case JBO_BRODA:
    if (record->event.pressed) {
      SEND_STRING("broda");

    }
    break;
    case JBO_BRODE:
    if (record->event.pressed) {
      SEND_STRING("brode");

    }
    break;
    case JBO_BRODI:
    if (record->event.pressed) {
      SEND_STRING("brodi");

    }
    break;
    case JBO_BRODO:
    if (record->event.pressed) {
      SEND_STRING("brodo");

    }
    break;
    case JBO_BRODU:
    if (record->event.pressed) {
      SEND_STRING("brodu");

    }
    break;
    case JBO_FA:
    if (record->event.pressed) {
      SEND_STRING("fa");

    }
    break;
    case JBO_FE:
    if (record->event.pressed) {
      SEND_STRING("fe");

    }
    break;
    case JBO_FI:
    if (record->event.pressed) {
      SEND_STRING("fi");

    }
    break;
    case JBO_FO:
    if (record->event.pressed) {
      SEND_STRING("fo");

    }
    break;
    case JBO_FU:
    if (record->event.pressed) {
      SEND_STRING("fu");

    }
    break;
    case JBO_SE:
    if (record->event.pressed) {
      SEND_STRING("se");

    }
    break;
    case JBO_TE:
    if (record->event.pressed) {
      SEND_STRING("te");

    }
    break;
    case JBO_VE:
    if (record->event.pressed) {
      SEND_STRING("ve");

    }
    break;
    case JBO_XE:
    if (record->event.pressed) {
      SEND_STRING("xe");

    }
    break;
    case JBO_LEhU:
    if (record->event.pressed) {
      SEND_STRING("le'u");

    }
    break;
    case JBO_LIhU:
    if (record->event.pressed) {
      SEND_STRING("li'u");

    }
    break;
    case JBO_KUhO:
    if (record->event.pressed) {
      SEND_STRING("ku'o");

    }
    break;
    case JBO_POI:
    if (record->event.pressed) {
      SEND_STRING("poi");

    }
    break;
    case JBO_LAhE:
    if (record->event.pressed) {
      SEND_STRING("la'e");

    }
    break;
        case JBO_LEhE:
    if (record->event.pressed) {
      SEND_STRING("le'e");

    }
    break;
    case JBO_LOhE:
    if (record->event.pressed) {
      SEND_STRING("lo'e");

    }
    break;
    case JBO_LUhE:
    if (record->event.pressed) {
      SEND_STRING("lu'e");

    }
    break;
    case JBO_LI:
    if (record->event.pressed) {
      SEND_STRING("li");

    }
    break;
    case JBO_LAhI:
    if (record->event.pressed) {
      SEND_STRING("la'i");

    }
    break;
    case JBO_LEhI:
    if (record->event.pressed) {
      SEND_STRING("le'i");

    }
    break;
    case JBO_LOhI:
    if (record->event.pressed) {
      SEND_STRING("lo'i");

    }
    break;
    case JBO_LUhI:
    if (record->event.pressed) {
      SEND_STRING("lu'i");

    }
    break;
    case JBO_JAI:
    if (record->event.pressed) {
      SEND_STRING("jai");

    }
    break;
  // cnima'o
    case JBO_AhA:
    if (record->event.pressed) {
      SEND_STRING("a'a");

    }
    break;
    case JBO_EhA:
    if (record->event.pressed) {
      SEND_STRING("e'a");

    }
    break;
    case JBO_IhA:
    if (record->event.pressed) {
      SEND_STRING("i'a");

    }
    break;
    case JBO_OhA:
    if (record->event.pressed) {
      SEND_STRING("o'a");

    }
    break;
    case JBO_UhA:
    if (record->event.pressed) {
      SEND_STRING("u'a");

    }
    break;
    case JBO_ROhA:
    if (record->event.pressed) {
      SEND_STRING("ro'a");

    }
    break;
    case JBO_ROhU:
    if (record->event.pressed) {
      SEND_STRING("ro'u");

    }
    break;
    case JBO_AhE:
    if (record->event.pressed) {
      SEND_STRING("a'e");

    }
    break;
    case JBO_EhE:
    if (record->event.pressed) {
      SEND_STRING("e'e");

    }
    break;
    case JBO_IhE:
    if (record->event.pressed) {
      SEND_STRING("i'e");

    }
    break;
    case JBO_OhE:
    if (record->event.pressed) {
      SEND_STRING("o'e");

    }
    break;
    case JBO_UhE:
    if (record->event.pressed) {
      SEND_STRING("u'e");

    }
    break;
    case JBO_ROhE:
    if (record->event.pressed) {
      SEND_STRING("ro'e");

    }
    break;
    case JBO_REhE:
    if (record->event.pressed) {
      SEND_STRING("re'e");

    }
    break;
    case JBO_AhI:
    if (record->event.pressed) {
      SEND_STRING("a'i");

    }
    break;
    case JBO_EhI:
    if (record->event.pressed) {
      SEND_STRING("e'i");

    }
    break;
    case JBO_IhI:
    if (record->event.pressed) {
      SEND_STRING("i'i");

    }
    break;
    case JBO_OhI:
    if (record->event.pressed) {
      SEND_STRING("o'i");

    }
    break;
    case JBO_UhI:
    if (record->event.pressed) {
      SEND_STRING("u'i");

    }
    break;
    case JBO_ROhI:
    if (record->event.pressed) {
      SEND_STRING("ro'i");

    }
    break;
    case JBO_AhO:
    if (record->event.pressed) {
      SEND_STRING("a'o");

    }
    break;
    case JBO_EhO:
    if (record->event.pressed) {
      SEND_STRING("e'o");

    }
    break;
    case JBO_IhO:
    if (record->event.pressed) {
      SEND_STRING("i'o");

    }
    break;
    case JBO_OhO:
    if (record->event.pressed) {
      SEND_STRING("o'o");

    }
    break;
    case JBO_UhO:
    if (record->event.pressed) {
      SEND_STRING("u'o");

    }
    break;
    case JBO_ROhO:
    if (record->event.pressed) {
      SEND_STRING("ro'o");

    }
    break;
    case JBO_AhU:
    if (record->event.pressed) {
      SEND_STRING("a'u");

    }
    break;
    case JBO_EhU:
    if (record->event.pressed) {
      SEND_STRING("e'u");

    }
    break;
    case JBO_IhU:
    if (record->event.pressed) {
      SEND_STRING("i'u");

    }
    break;
    case JBO_OhU:
    if (record->event.pressed) {
      SEND_STRING("o'u");

    }
    break;
    case JBO_UhU:
    if (record->event.pressed) {
      SEND_STRING("u'u");

    }
    break;
    case JBO_NAI:
    if (record->event.pressed) {
      SEND_STRING("nai");

    }
    break;
    case JBO_UA:
    if (record->event.pressed) {
      SEND_STRING("ua");

    }
    break;
    case JBO_IA:
    if (record->event.pressed) {
      SEND_STRING("ia");

    }
    break;
    case JBO_UE:
    if (record->event.pressed) {
      SEND_STRING("ue");

    }
    break;
    case JBO_IE:
    if (record->event.pressed) {
      SEND_STRING("ie");

    }
    break;
    case JBO_UI:
    if (record->event.pressed) {
      SEND_STRING("ui");

    }
    break;
    case JBO_OI:
    if (record->event.pressed) {
      SEND_STRING("oi");

    }
    break;
    case JBO_II:
    if (record->event.pressed) {
      SEND_STRING("ii");

    }
    break;
    case JBO_EI:
    if (record->event.pressed) {
      SEND_STRING("ei");

    }
    break;
    case JBO_AI:
    if (record->event.pressed) {
      SEND_STRING("ai");

    }
    break;
    case JBO_UO:
    if (record->event.pressed) {
      SEND_STRING("uo");

    }
    break;
    case JBO_IO:
    if (record->event.pressed) {
      SEND_STRING("io");

    }
    break;
    case JBO_PEI:
    if (record->event.pressed) {
      SEND_STRING("pei");

    }
    break;
    case JBO_UU:
    if (record->event.pressed) {
      SEND_STRING("uu");

    }
    break;
    case JBO_IU:
    if (record->event.pressed) {
      SEND_STRING("iu");

    }
    break;
    case JBO_AU:
    if (record->event.pressed) {
      SEND_STRING("au");

    }
    break;
    case JBO_CUhI:
    if (record->event.pressed) {
      SEND_STRING("cu'i");

    }
    break;
    case JBO_RUhE:
    if (record->event.pressed) {
      SEND_STRING("ru'e");

    }
    break;
    case JBO_SAI:
    if (record->event.pressed) {
      SEND_STRING("sai");

    }
    break;
    case JBO_CAI:
    if (record->event.pressed) {
      SEND_STRING("cai");

    }
    break;
    case JBO_NAICAI:
    if (record->event.pressed) {
      SEND_STRING("naicai");

    }
    break;
    case JBO_NAISAI:
    if (record->event.pressed) {
      SEND_STRING("naisai");

    }
    break;
    case JBO_NAIRUhE:
    if (record->event.pressed) {
      SEND_STRING("nairu'e");

    }
    break;
    case DE_LSPO:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_8);
      return false;
    case DE_RSPC:
      perform_space_cadet(record, keycode, KC_LSFT, KC_LSFT, KC_9);
      return false;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
    case HSV_0_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(0,255,255);
      }
      return false;
    case HSV_86_255_128:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(86,255,128);
      }
      return false;
    case HSV_172_255_255:
      if (record->event.pressed) {
        rgblight_mode(1);
        rgblight_sethsv(172,255,255);
      }
      return false;
  }
  return true;
}
