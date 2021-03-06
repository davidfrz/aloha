/////////////////////////////////////////////////////////////////////////
// Bitmap点阵数据表                                                    //
// 图片: C:\..碶262英雄.bmp,横向取模左高位,数据排列:从左到右从上到下   //
// 图片尺寸: 128 * 64                                                  //
/////////////////////////////////////////////////////////////////////////
unsigned char code nBitmapDot[] =                  // 数据表
{
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xBF,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x7F,0xFF,0x9F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x7F,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x3F,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x7F,0xFF,0xD3,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x1C,0x71,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x3F,0xFF,0xC1,0xFF,0xFF,0xFF,0xFF,
      0xFE,0xEB,0x6E,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFB,0x5E,0xFF,0xB5,0xFF,0xFF,0xFF,0xFF,
      0xFE,0xEB,0xEE,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF9,0x3F,0xFA,0x88,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xD8,0x7D,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0xDE,0x7C,0xC1,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xBB,0xBB,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF8,0x5E,0x7A,0x94,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x7B,0xB7,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x9E,0x08,0xC2,0xFF,0xFF,0xFF,0xFF,
      0xFE,0xFB,0xAF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF5,0x4B,0x42,0x18,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x0C,0x60,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0xA6,0x28,0x02,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x55,0x02,0xA8,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x88,0x82,0x65,0xFE,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFA,0x44,0x7C,0x21,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFD,0x12,0x99,0x1B,0xF8,0xBF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFD,0x49,0x8C,0x8B,0xFE,0x3F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x04,0xEC,0x33,0xFB,0xDF,0xFF,0xFF,
      0xFF,0xBB,0xF7,0xAF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x10,0xD1,0x43,0xF7,0xAF,0xFF,0xFF,
      0xFC,0x00,0x77,0xBF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xC5,0x24,0x0D,0xFE,0xFF,0xFF,0xFF,
      0xFF,0xBB,0xC1,0x07,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF1,0xB6,0xBD,0xE7,0x77,0xFF,0xFF,
      0xFF,0xEF,0xF7,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFD,0xFB,0xFF,0xFD,0xBF,0xFF,0xFF,
      0xFE,0x00,0xEE,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFB,0xDF,0x58,0xCF,0xD7,0xFF,0xFF,
      0xFE,0xEE,0xEB,0x07,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF0,0xED,0xFC,0x17,0x7F,0xFF,0xFF,
      0xFE,0xEE,0xEB,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF0,0xFE,0xAA,0x5D,0xF7,0xFF,0xFF,
      0xFE,0xEE,0xD7,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xCA,0x6F,0xF1,0x07,0x6F,0xFF,0xFF,
      0xFC,0x00,0x77,0x07,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xA4,0x3D,0xB4,0x53,0xCF,0xFF,0xFF,
      0xFF,0xD7,0xED,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFF,0x11,0x0F,0xE3,0x08,0x0F,0xFF,0xFF,
      0xFF,0x39,0xE1,0x5F,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x49,0x02,0xCB,0x22,0x5F,0xFF,0xFF,
      0xFC,0xFE,0x7D,0x07,0xFF,0xFF,0xFF,0xFF,
      0xFC,0x20,0xF4,0x1F,0x11,0x3F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFB,0x4A,0xDF,0x6B,0x8A,0x7F,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF0,0x04,0x6D,0xFD,0x1B,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF1,0x31,0x77,0x6F,0xBF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE8,0xFC,0x7B,0x74,0x3F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE4,0xDE,0xAF,0xBF,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE1,0xF6,0x1A,0xEA,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xED,0x7F,0x4E,0xFE,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE1,0xB7,0x8F,0x5A,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xE5,0xDE,0xA5,0xEC,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xF0,0xFB,0x92,0xB9,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFE,0x7D,0x97,0xE9,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE9,0x9D,0x7B,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFE,0x4F,0xBB,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFE,0x4A,0xD7,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFA,0x27,0xF3,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF9,0x25,0xA1,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF8,0x93,0xC9,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFA,0x44,0x82,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF2,0x52,0xA8,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF9,0x10,0x22,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xEC,0x4A,0x95,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF7,0xA7,0x1F,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE5,0x8F,0x44,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE2,0x3F,0x22,0x7F,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE8,0x9F,0x10,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xE4,0x1F,0x84,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xF9,0x7F,0xF2,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFD,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,
      0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF
};
