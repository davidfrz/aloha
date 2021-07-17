/////////////////////////////////////////////////////////////////////////
// Bitmap点阵数据表                                                    //
// 图片: C:\..999999999.bmp,横向取模左高位,数据排列:从左到右从上到下   //
// 图片尺寸: 128 * 64                                                  //
/////////////////////////////////////////////////////////////////////////
unsigned char code nBitmapDot[] =                  // 数据表
{
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0x5F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFA,0x5F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0x48,0x77,0xA2,0x9F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFD,0x23,0x00,0x10,0x3F,0xFF,0xFF,
      0xFF,0x8F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF1,0x10,0xA0,0x96,0x9F,0xFF,0xFF,
      0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xC4,0xAA,0x14,0x48,0x3F,0xFF,0xFF,
      0xFF,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x92,0x44,0xD3,0x12,0xBF,0xFF,0xFF,
      0xFE,0x1C,0xC9,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x48,0x22,0x10,0x42,0x3F,0xFB,0xFF,
      0xFF,0x7B,0x67,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x45,0x11,0x15,0x2A,0x3F,0xF5,0xFF,
      0xFF,0x7B,0x6F,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFD,0x32,0x94,0xA0,0x81,0x7F,0xCB,0xFF,
      0xFF,0x7B,0x6F,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x04,0x21,0x16,0x54,0x7F,0xB5,0xFF,
      0xFE,0x1C,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF2,0x55,0x8C,0x91,0x11,0x7F,0x93,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xC1,0x00,0xA0,0x04,0x8C,0xFF,0x93,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE0,0x54,0x81,0x52,0x51,0xFC,0xDD,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0x81,0x23,0x74,0x09,0x01,0xFD,0x21,0xFF,
      0xFF,0xBF,0xDE,0xBF,0xFF,0xFF,0xFF,0xFF,
      0xA8,0x8D,0xB4,0x49,0x53,0xFA,0x9F,0xFF,
      0xFF,0xBF,0xBA,0x7F,0xFF,0xFF,0xFF,0xFF,
      0x80,0x54,0xB6,0x24,0x93,0xF2,0xC1,0xFF,
      0xFF,0xBF,0x82,0xDF,0xFF,0xFF,0xFF,0xFF,
      0xA2,0x6A,0x95,0x08,0x4B,0xE5,0x2F,0xFF,
      0xFF,0xBF,0xFF,0x1F,0xFF,0xFF,0xFF,0xFF,
      0x80,0xA1,0x6A,0x25,0x27,0x89,0x51,0xFF,
      0xFD,0xB7,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xC0,0x86,0x2D,0x04,0x20,0x0A,0x55,0xFF,
      0xFD,0xBB,0xBA,0xDF,0xFF,0xFF,0xFF,0xFF,
      0xC5,0x02,0x26,0x65,0x15,0x4B,0x57,0xFF,
      0xFB,0xBB,0x82,0xBF,0xFF,0xFF,0xFF,0xFF,
      0xD2,0x00,0x1B,0x00,0x80,0xB4,0x91,0xFF,
      0xFB,0xBD,0xBA,0x7F,0xFF,0xFF,0xFF,0xFF,
      0xE1,0x00,0x2C,0x2D,0x15,0x12,0x6B,0xFF,
      0xF7,0xBD,0x82,0xDF,0xFF,0xFF,0xFF,0xFF,
      0xF2,0x00,0x26,0x80,0x48,0x4D,0x29,0xFF,
      0xFF,0xBF,0xBB,0x1F,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x00,0x76,0x6C,0x88,0x65,0xAD,0xFF,
      0xFF,0xBF,0xAD,0xBF,0xFF,0xFF,0xFF,0xFF,
      0xF9,0x00,0xA8,0x90,0x65,0x28,0x25,0xFF,
      0xFE,0x3F,0x76,0xDF,0xFF,0xFF,0xFF,0xFF,
      0xFC,0xC1,0x54,0x41,0x10,0x97,0xDB,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x7B,0x5A,0x15,0x15,0x50,0x27,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x0D,0xC1,0x44,0x85,0x57,0x5F,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x92,0x2A,0x31,0x01,0x29,0x2F,0xFF,
      0xFF,0xDF,0xFD,0xFF,0x77,0xFF,0x1F,0xFF,
      0xFF,0xE8,0x91,0x40,0x56,0xAA,0xFF,0xFF,
      0xFF,0xDF,0xFD,0xFF,0x77,0xE0,0xFF,0xFF,
      0xFF,0xFC,0x08,0x24,0x01,0x48,0xFF,0xFF,
      0xFF,0xDF,0xF8,0x07,0x40,0xEF,0xFF,0xFF,
      0xFF,0xFF,0xC8,0x10,0x75,0x6F,0xFF,0xFF,
      0xFF,0xDF,0xFB,0xF5,0x36,0xEE,0xFF,0xFF,
      0xFF,0xFC,0xB5,0x4A,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xC0,0x77,0xED,0x76,0xEE,0xFF,0xFF,
      0xFF,0xF9,0x69,0x25,0x0F,0xFF,0xFB,0xBF,
      0xFC,0x1F,0xEB,0xED,0x76,0xE0,0x0F,0xFF,
      0xFF,0xFD,0x24,0xA0,0xA3,0xFF,0xC0,0x07,
      0xFF,0xDF,0xDD,0xDD,0x00,0x7E,0xFF,0xFF,
      0xFF,0xFD,0xE2,0x14,0x11,0xFF,0xFB,0xBF,
      0xFF,0xDF,0xFD,0xBF,0x77,0xF6,0xDF,0xFF,
      0xFF,0xFE,0xA8,0xA2,0xA0,0xFF,0xEF,0xFF,
      0xFF,0xDF,0xFE,0x7F,0x6B,0xF6,0xEF,0xFF,
      0xFF,0xFE,0x55,0x0C,0x0C,0xFF,0xF4,0x0F,
      0xFF,0xDF,0x7E,0xFF,0x6B,0xEE,0xF7,0xFF,
      0xFF,0xFD,0x20,0xA2,0xA2,0x7F,0xFD,0xEF,
      0xFF,0xDF,0x79,0xFF,0x5D,0xDE,0xF7,0xFF,
      0xFF,0xF8,0xAA,0x92,0x11,0x3F,0xDD,0xEF,
      0xFF,0xE0,0x47,0xFF,0x3E,0x78,0xFF,0xFF,
      0xFF,0xFA,0x04,0x44,0xCA,0x7F,0xED,0xEF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE8,0x92,0x2B,0x10,0x9F,0xFD,0x9F,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x02,0x91,0x05,0x4A,0x5F,0xF5,0xF7,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF0,0xA8,0x48,0xA5,0x09,0x1F,0xED,0xF7,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF4,0x04,0x15,0x46,0xE2,0x4F,0xDE,0x07,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF2,0x29,0x44,0x21,0x44,0x3F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF0,0x84,0x22,0x14,0x51,0x0F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x02,0xA8,0x12,0x4A,0xAF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF0,0x95,0x00,0x45,0x28,0x4F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF8,0x00,0xA2,0x90,0x85,0x27,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0xA8,0x88,0x84,0x51,0x23,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFC,0xA4,0xA4,0x15,0x14,0x93,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x01,0x00,0x80,0x41,0x29,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x08,0xAA,0x26,0x9A,0x43,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x04,0x24,0x92,0x48,0x2F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x42,0x02,0x02,0x06,0x8F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x80,0x28,0x81,0x50,0x7F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFD,0x04,0x24,0x25,0x3F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFA,0x93,0x25,0xFF,0xFF,0xFF
};
