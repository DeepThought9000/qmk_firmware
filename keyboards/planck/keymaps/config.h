{\rtf1\ansi\ansicpg1252\cocoartf1504\cocoasubrtf830
{\fonttbl\f0\fmodern\fcharset0 Courier;}
{\colortbl;\red255\green255\blue255;\red0\green0\blue0;}
{\*\expandedcolortbl;;\cssrgb\c0\c0\c0;}
\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs26 \cf0 \expnd0\expndtw0\kerning0
#ifndef CONFIG_USER_H\
#define CONFIG_USER_H\
\
#include "../../config.h"\
\
#ifdef AUDIO_ENABLE\
    #define STARTUP_SONG SONG(PLANCK_SOUND)\
    // #define STARTUP_SONG SONG(NO_SOUND)\
\
    #define DEFAULT_LAYER_SONGS \{ SONG(QWERTY_SOUND), \\\
                                  SONG(COLEMAK_SOUND), \\\
                                  SONG(DVORAK_SOUND) \\\
                                \}\
#endif\
\
#define MUSIC_MASK (keycode != KC_NO)\
\
/*\
 * MIDI options\
 */\
\
/* Prevent use of disabled MIDI features in the keymap */\
//#define MIDI_ENABLE_STRICT 1\
\
/* enable basic MIDI features:\
   - MIDI notes can be sent when in Music mode is on\
*/\
                                \
#define MIDI_BASIC\
\
/* enable advanced MIDI features:\
   - MIDI notes can be added to the keymap\
   - Octave shift and transpose\
   - Virtual sustain, portamento, and modulation wheel\
   - etc.\
*/\
//#define MIDI_ADVANCED\
\
/* override number of MIDI tone keycodes (each octave adds 12 keycodes and allocates 12 bytes) */\
//#define MIDI_TONE_KEYCODE_OCTAVES 2\
\
#endif}