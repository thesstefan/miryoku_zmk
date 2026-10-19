#pragma once

// Keep the standard layer numbers and append the gaming layers after Fun.
#include "miryoku_babel/miryoku_layer_list.h"
#undef MIRYOKU_LAYER_LIST
#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "Base") \
MIRYOKU_X(EXTRA,  "Extra") \
MIRYOKU_X(TAP,    "Tap") \
MIRYOKU_X(BUTTON, "Button") \
MIRYOKU_X(NAV,    "Nav") \
MIRYOKU_X(MOUSE,  "Mouse") \
MIRYOKU_X(MEDIA,  "Media") \
MIRYOKU_X(NUM,    "Num") \
MIRYOKU_X(SYM,    "Sym") \
MIRYOKU_X(FUN,    "Fun") \
MIRYOKU_X(GAME,   "Gaming") \
MIRYOKU_X(GAME_NUM, "Gaming Numbers")

#define U_GAME 10
#define U_GAME_NUM 11
#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#define MIRYOKU_LAYERMAPPING_GAME_NUM MIRYOKU_MAPPING

// Plain QWERTY: movement keys and thumbs have no hold-tap delay.
// Left thumbs: Shift, Ctrl, Space. Right thumbs: Enter, Escape, return to Base.
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &kp Y,             &kp U,             &kp I,             &kp O,             &kp P,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &kp H,             &kp J,             &kp K,             &kp L,             &kp SQT,           \
&kp Z,             &kp X,             &kp C,             &kp V,             &mo U_GAME_NUM,    &kp N,             &kp M,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp LSHFT,         &kp LCTRL,         &kp SPACE,         &kp RET,           &kp ESC,           &to U_BASE,        U_NP,              U_NP

// Hold the left bottom inner key for numbers and one-handed utility keys.
// Keep the layer key and thumbs transparent; double-tap Base to leave Gaming.
#define MIRYOKU_LAYER_GAME_NUM \
&kp N1,            &kp N2,            &kp N3,            &kp N4,            &kp N5,            &trans,            &trans,            &trans,            &trans,            &trans,            \
&kp N6,            &kp N7,            &kp N8,            &kp N9,            &kp N0,            &trans,            &trans,            &trans,            &trans,            &trans,            \
&kp B,             &kp ESC,           &kp RET,           &u_to_U_BASE,      &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            \
U_NP,              U_NP,              &trans,            &trans,            &trans,            &trans,            &trans,            &trans,            U_NP,              U_NP

// Button: double-tap the left inner home key for Gaming; right retains Num Lock.

#define NUMLOCK &kp KP_NUMLOCK

#define MIRYOKU_LAYER_BUTTON \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &u_to_U_GAME,      NUMLOCK,           &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
U_NP,              U_NP,              U_BTN3,            U_BTN1,            U_BTN2,            U_BTN2,            U_BTN1,            U_BTN3,            U_NP,              U_NP
