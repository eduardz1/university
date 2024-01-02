#include "sprites.h"

const uint16_t highlighted_square_data[28 * 28] = {
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfee0, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f, 0xfee0,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f, 0xfb7f, 0xfee0, 0xfee0, 0xfee0, 0xfee0, 0xfb7f, 0xfb7f, 0xfb7f,
    0xfb7f};

const struct Sprite highlighted_square = {
    .width = 28,
    .height = 28,
    .data = highlighted_square_data,
};