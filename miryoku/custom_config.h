// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

#define XXX &none

// Warzone gaming layer (LEFT HAND ONLY - right side disabled for mouse use)
// Mouse handles: Aim, shoot, weapon switching (mouse wheel)
// QWERTY layout with gaming bindings:
// Top row: Q, W, E, R, T (Equipment, Movement, Interact, Reload, Chat) | Right side disabled
// Middle row: A, S, D, F, G (Movement, Movement, Movement, Interact, Ping) | Right side disabled  
// Bottom row: Z, X, C, V (Prone, Equipment wheel, Melee, Armor plates) | Right side disabled
// Thumbs: Ctrl (crouch), Space (jump), Shift (sprint) | Right thumbs disabled
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp TAB,           U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
U_NP,              U_NP,              &kp LCTRL,         &kp SPACE,         &kp LSHFT,         U_NP,              U_NP,             U_NP,             U_NP,              U_NP

// MIRYOKU_LAYERMAPPING_BASE uses default mapping (no key switch to GAME)

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
MIRYOKU_X(GAME,   "Game")

// MIRYOKU_LAYERMAPPING_GAME uses default mapping (no key switch back to BASE)
// Use the combo again to return to BASE layer

#define U_BASE        0
#define U_EXTRA       1
#define U_TAP         2
#define U_BUTTON      3
#define U_NAV         4
#define U_MOUSE       5
#define U_MEDIA       6
#define U_NUM         7
#define U_SYM         8
#define U_FUN         9
#define U_GAME       10