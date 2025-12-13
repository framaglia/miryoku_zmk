// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku
// GAME Layer Mapping - Include this after the mapping file

// Define GAME layer mapping (must be after MIRYOKU_MAPPING is defined)
// Remove placeholder and define the real mapping
#ifdef MIRYOKU_LAYERMAPPING_GAME_PLACEHOLDER
  #undef MIRYOKU_LAYERMAPPING_GAME_PLACEHOLDER
#endif
#if !defined(MIRYOKU_LAYERMAPPING_GAME)
  #define MIRYOKU_LAYERMAPPING_GAME MIRYOKU_MAPPING
#endif

