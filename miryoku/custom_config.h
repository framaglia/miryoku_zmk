// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

//#define MIRYOKU_KLUDGE_DOUBLETAPBOOT
#define MIRYOKU_KLUDGE_SOFT_OFF

// Step 3: Define the actual GAME layer (Warzone - left hand only)
// QWERTY layout shifted one column right: T/G/B (column 5 that falls off) goes to column 0
// Column 0: T, G, B (was column 4, now in column 0)
// Column 1: Q, A, Z (was column 0, shifted right)
// Column 2: W, S, X (was column 1, shifted right)
// Column 3: E, D, C (was column 2, shifted right)
// Column 4: R, F, V (was column 3, shifted right)
// This moves WASD one column right for better hand position
// Right side disabled for mouse use
#define MIRYOKU_LAYER_GAME \
&kp T,             &kp Q,             &kp W,             &kp E,             &kp R,             &none,             &none,             &none,             &none,             &none,             \
&kp G,             &kp A,             &kp S,             &kp D,             &kp F,             &none,             &none,             &none,             &none,             &none,             \
&kp B,             &kp Z,             &kp X,             &kp C,             &kp V,             &none,             &none,             &none,             &none,             &none,             \
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
