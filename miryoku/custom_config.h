// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

// Add GAME layer to the layer list
// Must be defined before miryoku.h is included
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

// Define GAME layer number (must be defined after MIRYOKU_LAYER_LIST override)
// This ensures U_GAME is available when needed
#ifndef U_GAME
#define U_GAME 10
#endif

// Define GAME layer key bindings for Warzone (LEFT HAND ONLY)
// Layout: Left half only - right side disabled for mouse use
// Mouse handles: Aim, shoot, weapon switching (mouse wheel)
// Top row: Reload (R), Interact (E), Ping (G), Chat (T), Scoreboard (TAB) | Right side disabled
// Middle row: Movement (WASD), Interact (F) | Right side disabled  
// Bottom row: Equipment (Q), Prone (Z), Equipment wheel (X), Melee (C), Armor plates (V) | Right side disabled
// Thumbs: Ctrl (crouch), Space (jump), Shift (sprint) | Right thumbs disabled
#define MIRYOKU_ALTERNATIVES_GAME \
&kp R,             &kp E,             &kp G,             &kp T,             &kp TAB,           U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp W,             &kp A,             &kp S,             &kp D,             &kp F,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
&kp Q,             &kp Z,             &kp X,             &kp C,             &kp V,             U_NP,              U_NP,             U_NP,             U_NP,             U_NP,             \
U_NP,              U_NP,              &kp LCTRL,         &kp SPACE,         &kp LSHFT,         U_NP,              U_NP,             U_NP,             U_NP,              U_NP

// Define GAME layer selection
#if !defined(MIRYOKU_LAYER_GAME)
  #define MIRYOKU_LAYER_GAME MIRYOKU_ALTERNATIVES_GAME
#endif
#if !defined(MIRYOKU_LAYERMAPPING_GAME)
  #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
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
