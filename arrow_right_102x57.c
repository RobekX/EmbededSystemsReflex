#include "arrows.h"

/*
 * First element is width of image
 * Second element is height of image
 * Third element specifies compression (0=off, 1=on)
 * Fourth element specifies escape value used with compression
 */
const unsigned char _arrow_right[] = {0x66,0x39,0x01,0x01,
0x01,0x3f,0xff,0xb6,0xdf,0x01,0x64,0xff,0xdb,0x00,0xb6,0x01,0x64,0xff,0x00,0x00,
0x6d,0x01,0x63,0xff,0x00,0xd9,0x69,0x49,0xdb,0x01,0x61,0xff,0x49,0xd9,0xfc,0x91,
0x00,0xb6,0x01,0x60,0xff,0x92,0x91,0xfc,0xfc,0xd9,0x00,0x6d,0x01,0x5f,0xff,0x92,
0x91,0xfc,0xfc,0xfc,0xf8,0x6d,0x24,0xdb,0x01,0x5d,0xff,0xb6,0x69,0x01,0x05,0xfc,
0xb5,0x00,0x92,0x01,0x5c,0xff,0xd6,0x69,0x01,0x06,0xfc,0xd9,0x24,0x6d,0x01,0x5b,
0xff,0xb6,0x4d,0x01,0x07,0xfc,0xf8,0x6d,0x24,0xdb,0x01,0x59,0xff,0xba,0x4d,0x01,
0x09,0xfc,0xb5,0x00,0x92,0x01,0x58,0xff,0xba,0x69,0x01,0x0a,0xfc,0xd9,0x49,0x49,
0x01,0x57,0xff,0xb7,0x4d,0x01,0x0b,0xfc,0xf8,0x6d,0x00,0xba,0x01,0x55,0xff,0xb6,
0x4d,0x01,0x0d,0xfc,0xb5,0x00,0x92,0x01,0x54,0xff,0x92,0x91,0x01,0x0e,0xfc,0xd9,
0x49,0x49,0xfb,0x01,0x1c,0xff,0xdb,0x01,0x04,0x92,0xb6,0x01,0x2f,0xff,0xdb,0x00,
0xd9,0x01,0x0f,0xfc,0xf8,0x91,0x00,0xb6,0x01,0x19,0xff,0x92,0x24,0x00,0x6d,0x91,
0x6d,0x6d,0x49,0x00,0x24,0x6d,0x92,0xb6,0xdb,0x01,0x28,0xff,0x92,0x00,0xb5,0x01,
0x12,0xfc,0xb5,0x00,0x6d,0x01,0x16,0xff,0xb6,0x00,0x6d,0xb5,0x01,0x07,0xfc,0xd9,
0xb5,0x91,0x69,0x00,0x00,0x49,0x6d,0x92,0xb2,0xd6,0x01,0x20,0xff,0xb6,0x24,0x44,
0xd9,0x01,0x14,0xfc,0xf9,0x49,0x49,0xdf,0x01,0x13,0xff,0x6d,0x00,0xd5,0x01,0x0f,
0xfc,0xd5,0xb5,0x91,0x6d,0x4d,0x00,0x00,0x49,0x49,0x92,0x92,0xb6,0xb7,0xda,0x01,
0x12,0xff,0xdb,0xb6,0x92,0x48,0x00,0x6d,0xb5,0x01,0x18,0xfc,0x91,0x00,0xb6,0x01,
0x11,0xff,0x6d,0x49,0xf8,0x01,0x16,0xfc,0xf8,0xd9,0xb5,0x91,0x91,0x69,0x69,0x24,
0x00,0x00,0x00,0x01,0x05,0x49,0x6d,0x92,0x92,0x92,0x01,0x04,0x49,0x00,0x00,0x24,
0x6d,0x91,0xb5,0xf8,0x01,0x1b,0xfc,0xb5,0x00,0x6d,0x01,0x0f,0xff,0x92,0x49,0xf8,
0x01,0x21,0xfc,0xf8,0xd9,0xd9,0xd5,0xd9,0xd9,0xb1,0x91,0x91,0x91,0xd9,0xd5,0xd9,
0xd9,0xf9,0x01,0x22,0xfc,0xf8,0x6d,0x49,0xdb,0x01,0x0c,0xff,0xdb,0x00,0xd9,0x01,
0x55,0xfc,0x91,0x00,0xb6,0x01,0x0b,0xff,0x49,0x91,0x01,0x57,0xfc,0xd5,0x00,0x6d,
0x01,0x09,0xff,0xdb,0x00,0xf8,0x01,0x58,0xfc,0xf8,0x6d,0x24,0xdb,0x01,0x07,0xff,
0x6d,0x6d,0x01,0x5b,0xfc,0xb1,0x00,0x92,0x01,0x06,0xff,0x49,0xb5,0x01,0x5c,0xfc,
0xd9,0x24,0x6d,0x01,0x05,0xff,0x00,0xf8,0x01,0x5d,0xfc,0xf8,0x6d,0x24,0xdb,0xff,
0xff,0xff,0x00,0x01,0x60,0xfc,0xb5,0x00,0x92,0xff,0xff,0x00,0x01,0x60,0xfc,0xf8,
0x6d,0x00,0xdb,0xff,0x00,0x01,0x5f,0xfc,0xd9,0x49,0x49,0xff,0xff,0xff,0x24,0xd9,
0x01,0x5d,0xfc,0xb5,0x00,0x92,0x01,0x04,0xff,0x6d,0xb5,0x01,0x5b,0xfc,0xf8,0x6d,
0x24,0xdb,0x01,0x05,0xff,0x92,0x49,0x01,0x5a,0xfc,0xd9,0x24,0x6d,0x01,0x08,0xff,
0x00,0xd5,0x01,0x58,0xfc,0xb5,0x00,0x92,0x01,0x09,0xff,0x92,0x6d,0x01,0x56,0xfc,
0xf8,0x69,0x24,0xdb,0x01,0x0b,0xff,0x49,0x91,0x01,0x54,0xfc,0xd9,0x00,0x6d,0x01,
0x0d,0xff,0xdb,0x00,0xb5,0x01,0x1c,0xfc,0xd9,0xd5,0xd9,0x91,0x91,0x91,0x6d,0x6d,
0x6d,0x01,0x05,0x49,0x4d,0x49,0x4d,0x4d,0x69,0x91,0x91,0xb5,0xd9,0x01,0x1f,0xfc,
0x91,0x00,0xb6,0x01,0x0f,0xff,0xdb,0x00,0x91,0x01,0x13,0xfc,0xd9,0xd9,0xb1,0x91,
0x6d,0x4d,0x00,0x00,0x24,0x49,0x49,0x92,0x92,0x6d,0x92,0xb6,0xb6,0xdb,0xb6,0xdb,
0xb6,0xda,0xb6,0xba,0xb6,0xb6,0xb6,0x6e,0x92,0x49,0x24,0x00,0x69,0x91,0xd9,0x01,
0x19,0xfc,0xf8,0x6d,0x49,0xdb,0x01,0x11,0xff,0xdb,0x24,0x6d,0xd9,0x01,0x0b,0xfc,
0xd5,0xb5,0x91,0x6d,0x49,0x00,0x00,0x49,0x6d,0x92,0xb6,0xb7,0x01,0x1a,0xff,0xb6,
0x6d,0x00,0x49,0xb5,0x01,0x16,0xfc,0xd9,0x00,0x6d,0x01,0x15,0xff,0x92,0x00,0x4d,
0xb5,0xf9,0xfc,0xfc,0xf8,0xd9,0x91,0x6d,0x49,0x00,0x24,0x6d,0x92,0x92,0xb6,0x01,
0x24,0xff,0xb6,0x24,0x6d,0xf8,0x01,0x13,0xfc,0x91,0x00,0xb6,0x01,0x18,0xff,0xb6,
0x6d,0x01,0x04,0x00,0x49,0x92,0x92,0xb6,0x01,0x2c,0xff,0x6d,0x49,0x01,0x11,0xfc,
0xd9,0x49,0x49,0xdb,0x01,0x50,0xff,0x49,0xb5,0x01,0x0f,0xfc,0xb5,0x00,0x6d,0x01,
0x52,0xff,0x92,0x6d,0x01,0x0e,0xfc,0x91,0x00,0xb6,0x01,0x53,0xff,0xb6,0x49,0x01,
0x0c,0xfc,0xd9,0x49,0x24,0xdb,0x01,0x54,0xff,0xb7,0x49,0x01,0x0b,0xfc,0xb5,0x00,
0x92,0x01,0x56,0xff,0xb6,0x49,0x01,0x09,0xfc,0xf8,0x6d,0x00,0xb6,0x01,0x57,0xff,
0xda,0x4d,0x01,0x08,0xfc,0xd9,0x49,0x49,0x01,0x59,0xff,0xd6,0x69,0x01,0x07,0xfc,
0xb1,0x00,0x92,0x01,0x5a,0xff,0xba,0x6d,0x01,0x05,0xfc,0xf8,0x6d,0x24,0xb7,0x01,
0x5b,0xff,0x92,0x6d,0x01,0x04,0xfc,0xd9,0x44,0x6d,0x01,0x5d,0xff,0x92,0x91,0xfc,
0xfc,0xfc,0xb1,0x00,0x92,0x01,0x5e,0xff,0x6d,0xb5,0xfc,0xf8,0x6d,0x24,0xdb,0x01,
0x5f,0xff,0x49,0xd5,0xd9,0x24,0x4d,0x01,0x61,0xff,0x00,0x91,0x00,0xb6,0x01,0x61,
0xff,0xdb,0x00,0x49,0xdb,0x01,0x62,0xff,0x92,0x6d,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,0xff,
0xff,0xff,0xff,0xff,0xff
};
