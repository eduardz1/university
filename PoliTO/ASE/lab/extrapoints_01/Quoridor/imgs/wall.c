#include "sprites.h"

const uint16_t wall_data[2 * 32] = {
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
    0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c, 0x3b5c,
};

const struct Sprite wall = {
    .width = 2,
    .height = 32,
    .data = wall_data,
};