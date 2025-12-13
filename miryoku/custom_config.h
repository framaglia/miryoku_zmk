// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

// Step 3: Define the actual GAME layer (Warzone - left hand only)
// QWERTY layout with gaming bindings, right side disabled for mouse use
#define MIRYOKU_LAYER_GAME \
&kp Q,             &kp W,             &kp E,             &kp R,             &kp T,             &none,             &none,             &none,             &none,             &none,             \
&kp A,             &kp S,             &kp D,             &kp F,             &kp G,             &none,             &none,             &none,             &none,             &none,             \
&kp Z,             &kp X,             &kp C,             &kp V,             &kp TAB,           &none,             &none,             &none,             &none,             &none,             \
&none,             &none,             &kp LCTRL,         &kp SPACE,         &kp LSHFT,         &none,             &none,             &none,             &none,             &none

#define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING

// Step 2b: Copy MIRYOKU_LAYER_LIST and add GAME
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

// Step 1: Copy ALL layer number definitions from miryoku_layer_list.h
#define U_BASE   0
#define U_EXTRA  1
#define U_TAP    2
#define U_BUTTON 3
#define U_NAV    4
#define U_MOUSE  5
#define U_MEDIA  6
#define U_NUM    7
#define U_SYM    8
#define U_FUN    9
#define U_GAME  10
