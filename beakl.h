int layer0[44] = {
    KEY_Z, KEY_Y, KEY_O, KEY_U, KEY_X, KEY_0, KEY_F, KEY_G, KEY_R, KEY_C, KEY_V,
    KEY_H, KEY_I, KEY_E, KEY_A, KEY_J, KEY_0, KEY_L, KEY_S, KEY_T, KEY_N, KEY_W,
    KEY_Q, KEY_COMMA, KEY_PERIOD, KEY_SLASH, KEY_QUOTE, KEYBOARD_LEFT_ALT, KEY_B, KEY_D, KEY_M, KEY_P, KEY_K,
    KEY_ESC, KEY_TAB, KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_MINUS, KEY_SEMICOLON, KEY_ENTER };

int layer1[44] = {
        SHIFT(KEY_1), SHIFT(KEY_2), SHIFT(KEY_LEFT_BRACE), SHIFT(KEY_RIGHT_BRACE), SHIFT(KEY_BACKSLASH), KEY_0, KEY_PAGE_UP, KEY_7, KEY_8, KEY_9, SHIFT(KEY_8),
        SHIFT(KEY_3), SHIFT(KEY_4), SHIFT(KEY_9), SHIFT(KEY_0), KEY_TILDE, KEY_0, KEY_PAGE_DOWN, KEY_4, KEY_5, KEY_6, SHIFT(KEY_EQUAL),
        SHIFT(KEY_5), KEYBOARD_NON_US_SLASH_PIPE, KEY_LEFT_BRACE, KEY_RIGHT_BRACE, SHIFT(KEY_TILDE), KEYBOARD_LEFT_ALT, SHIFT(KEY_7), KEY_1, KEY_2, KEY_3, KEY_BACKSLASH,
        FUNCTION(2), SHIFT(KEY_INSERT), KEYBOARD_LEFT_GUI, KEYBOARD_LEFT_SHIFT, KEY_BACKSPACE, KEYBOARD_LEFT_CTRL, KEY_SPACE, PRE_FUNCTION(1), KEY_PERIOD, KEY_0, KEY_EQUAL };

#include "layer2.h"

int *layers[] = {layer0, layer1, layer2};

#include "layout_common.h"