// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Define GAME layer key bindings FIRST (before layer list override)
// This ensures MIRYOKU_ALTERNATIVES_GAME is defined when needed
#define MIRYOKU_ALTERNATIVES_GAME \
&kp R,             &kp E,             &kp G,             &kp T,             &kp TAB,           U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp W,             &kp A,             &kp S,             &kp D,             &kp F,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp Q,             &kp Z,             &kp X,             &kp C,             &kp V,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
U_NP,              U_NP,              &kp LCTRL,         &kp SPACE,         &kp LSHFT,         U_NP,              U_NP,             U_NP,             U_NP,              U_NP

// Define GAME layer selection (before layer list override)
// Note: MIRYOKU_LAYERMAPPING_GAME will be defined after MIRYOKU_MAPPING is available
#if !defined(MIRYOKU_LAYER_GAME)
  #define MIRYOKU_LAYER_GAME MIRYOKU_ALTERNATIVES_GAME
#endif
// MIRYOKU_LAYERMAPPING_GAME will be defined in a separate file included after the mapping

// Add GAME layer to the layer list
// Must be defined before miryoku.h is included (which includes miryoku_layer_list.h)
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
MIRYOKU_X(GAME,   "Game")

// Define GAME layer number (after layer list, but before it's used)
#ifndef U_GAME
#define U_GAME 10
#endif

// GAME Layer Activation:
// 
// EASIEST METHOD: Include the activation file in your keymap
// Add this line to your keymap file (e.g., config/corne.keymap) after miryoku.dtsi:
//
//   #include "../miryoku/miryoku_game_activation.dtsi"
//
// This creates a combo: Hold both left thumb keys (Ctrl + Space) to toggle GAME layer
//
// ALTERNATIVE METHODS:
//
// 1. Toggle key: Add &to U_GAME to any key (press to enter, press again to exit)
// 2. Momentary: Add &mo U_GAME to any key (hold to activate, release to exit)
// 3. Layer-tap: Use U_LT(U_GAME, KEY) to hold for GAME, tap for key
//
// To use: Hold both left thumb keys simultaneously to toggle into GAME layer
//         Hold them again to return to BASE layer
