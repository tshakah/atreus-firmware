int layer0[44] = {
  KEY_QUOTE, KEY_COMMA, KEY_PERIOD, KEY_P, KEY_Y, KEY_0, KEY_F, KEY_G, KEY_C, KEY_R, KEY_Z,
  KEY_A, KEY_O, KEY_E, KEY_U, KEY_I, KEY_0, KEY_D, KEY_H, KEY_T, KEY_N, KEY_S,
  KEY_SEMICOLON, KEY_Q, KEY_J, KEY_K, KEY_X, KEYBOARD_LEFT_ALT, KEY_B, KEY_M, KEY_W, KEY_V, KEY_L,
  KEY_ESC, KEY_TAB, KEYBOARD_LEFT_GUI, KEY_BACKSPACE, KEYBOARD_LEFT_SHIFT, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_SLASH, KEY_MINUS, KEY_ENTER };

int layer1[44] = {
  KEY_INSERT, KEY_HOME, KEY_UP, KEY_END, SHIFT(KEY_9), KEY_0, KEY_PAGE_UP, KEY_7, KEY_8, KEY_9, KEY_SLASH,
  KEY_DELETE, KEY_LEFT, KEY_DOWN, KEY_RIGHT, SHIFT(KEY_0), KEY_0, KEY_PAGE_DOWN, KEY_4, KEY_5, KEY_6, KEY_EQUAL,
  KEY_LEFT_BRACE, KEY_RIGHT_BRACE, SHIFT(KEY_LEFT_BRACE), SHIFT(KEY_RIGHT_BRACE), KEY_BACKSLASH, KEYBOARD_LEFT_ALT, KEY_TILDE, KEY_1, KEY_2, KEY_3, KEYBOARD_NON_US_SLASH_PIPE,
  FUNCTION(2), KEYBOARD_APPLICATION, KEYBOARD_LEFT_GUI, KEY_DELETE, KEYBOARD_LEFT_SHIFT, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_PERIOD, KEY_0, KEYPAD_ENTER };

int layer2[44] = {
  KEY_INSERT, KEY_HOME, KEY_UP, KEY_END, KEY_PAGE_UP, KEY_0, KEY_UP, KEY_F7, KEY_F8, KEY_F9, KEY_F10,
  KEY_DELETE, KEY_LEFT, KEY_DOWN, KEY_RIGHT, KEY_PAGE_DOWN, KEY_0, KEY_DOWN, KEY_F4, KEY_F5, KEY_F6, KEY_F11,
  KEYBOARD_MUTE, KEYBOARD_VOLUME_UP, KEYBOARD_VOLUME_DOWN, KEY_PRINTSCREEN, 0, KEYBOARD_RIGHT_ALT, 0, KEY_F1, KEY_F2, KEY_F3, KEY_F12,
  0, KEYBOARD_POWER, KEYBOARD_LEFT_GUI, KEY_BACKSPACE, KEYBOARD_LEFT_SHIFT, KEYBOARD_RIGHT_CTRL, KEY_SPACE, PRE_FUNCTION(1), 0, FUNCTION(0), KEY_ENTER };

int *layers[] = {layer0, layer1, layer2};

#include "layout_common.h"
