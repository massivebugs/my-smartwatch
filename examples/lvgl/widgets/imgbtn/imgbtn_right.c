#include "lvgl.h"


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBTN_RIGHT
#define LV_ATTRIBUTE_IMG_IMGBTN_RIGHT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBTN_RIGHT uint8_t imgbtn_right_map[] = {

#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Blue: 5 bit, Green: 6 bit, Red: 5 bit, Alpha 8 bit*/
  0xc0, 0x61, 0x23, 0xc0, 0x61, 0x14, 0xc0, 0x61, 0x04, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x60, 0x59, 0xff, 0x80, 0x59, 0xdf, 0xc0, 0x61, 0xb0, 0xc0, 0x61, 0x34, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x5c, 0xf7, 0xff, 0x10, 0xb5, 0xff, 0x01, 0x6a, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x17, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2c, 0xa4, 0xff, 0x80, 0x59, 0xff, 0xc0, 0x61, 0x77, 0x00, 0x00, 0x00, 0xc0, 0x61, 0x00,
  0x05, 0xe5, 0xff, 0x47, 0xe5, 0xff, 0xec, 0xed, 0xff, 0xff, 0xff, 0xff, 0xae, 0xac, 0xff, 0x80, 0x59, 0xfc, 0xc0, 0x61, 0x23, 0x00, 0x00, 0x00,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x47, 0xe5, 0xff, 0xbd, 0xff, 0xff, 0xa5, 0x7a, 0xff, 0xc0, 0x61, 0xb4, 0x00, 0x00, 0x00,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x89, 0xed, 0xff, 0xcf, 0xb4, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x07,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x25, 0xe5, 0xff, 0x0c, 0xcd, 0xff, 0xe1, 0x61, 0xff, 0xc0, 0x61, 0x47,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0xa7, 0xcc, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x57,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x44, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x44, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x64, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x65, 0xcc, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x25, 0xe5, 0xff, 0x65, 0xc4, 0xff, 0xe0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x26, 0xe5, 0xff, 0x05, 0xb4, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x05, 0xe5, 0xff, 0x26, 0xe5, 0xff, 0x89, 0xe5, 0xff, 0x23, 0x93, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x05, 0xe5, 0xff, 0x26, 0xe5, 0xff, 0x47, 0xe5, 0xff, 0x8a, 0xed, 0xff, 0x25, 0xbc, 0xff, 0x81, 0x82, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x54,
  0x68, 0xed, 0xff, 0x89, 0xed, 0xff, 0x8a, 0xe5, 0xff, 0xe5, 0xb3, 0xff, 0xe1, 0x92, 0xff, 0xe2, 0x8a, 0xff, 0xc0, 0x61, 0xff, 0xc0, 0x61, 0x44,
  0x49, 0xe5, 0xff, 0x66, 0xc4, 0xff, 0x02, 0x9b, 0xff, 0xe1, 0x92, 0xff, 0x22, 0x9b, 0xff, 0xc2, 0x82, 0xff, 0xa0, 0x59, 0xff, 0xe0, 0x69, 0x0c,
  0xc1, 0x8a, 0xff, 0xe1, 0x92, 0xff, 0x02, 0x93, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0xe1, 0x61, 0xff, 0xa0, 0x59, 0xcb, 0x00, 0x00, 0x00,
  0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0x63, 0x9b, 0xff, 0x82, 0x7a, 0xff, 0x40, 0x49, 0xff, 0x60, 0x49, 0x40, 0x00, 0x00, 0x00,
  0x43, 0x9b, 0xff, 0x63, 0x9b, 0xff, 0x43, 0x9b, 0xff, 0xa2, 0x7a, 0xff, 0x00, 0x39, 0xff, 0x20, 0x41, 0xb0, 0x20, 0x08, 0x10, 0x00, 0x00, 0x00,
  0x43, 0x9b, 0xff, 0xc2, 0x82, 0xff, 0xe1, 0x59, 0xff, 0x20, 0x41, 0xff, 0x00, 0x39, 0xc7, 0x40, 0x08, 0x44, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x20, 0x41, 0xff, 0x20, 0x41, 0xff, 0x20, 0x41, 0xf8, 0xa0, 0x28, 0x93, 0x00, 0x00, 0x57, 0x00, 0x00, 0x34, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0xe0, 0x30, 0xb0, 0xa0, 0x20, 0x8c, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x54, 0x00, 0x00, 0x50, 0x00, 0x00, 0x24, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x57, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x57, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x50, 0x00, 0x00, 0x48, 0x00, 0x00, 0x34, 0x00, 0x00, 0x18, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x27, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x61, 0xc0, 0x23, 0x61, 0xc0, 0x14, 0x61, 0xc0, 0x04, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x59, 0x60, 0xff, 0x59, 0x80, 0xdf, 0x61, 0xc0, 0xb0, 0x61, 0xc0, 0x34, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xf7, 0x5c, 0xff, 0xb5, 0x10, 0xff, 0x6a, 0x01, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0xff, 0x17, 0xff, 0xff, 0xbc, 0xff, 0xff, 0xff, 0xff, 0xa4, 0x2c, 0xff, 0x59, 0x80, 0xff, 0x61, 0xc0, 0x77, 0x00, 0x00, 0x00, 0x61, 0xc0, 0x00,
  0xe5, 0x05, 0xff, 0xe5, 0x47, 0xff, 0xed, 0xec, 0xff, 0xff, 0xff, 0xff, 0xac, 0xae, 0xff, 0x59, 0x80, 0xfc, 0x61, 0xc0, 0x23, 0x00, 0x00, 0x00,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x47, 0xff, 0xff, 0xbd, 0xff, 0x7a, 0xa5, 0xff, 0x61, 0xc0, 0xb4, 0x00, 0x00, 0x00,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xed, 0x89, 0xff, 0xb4, 0xcf, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x07,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x25, 0xff, 0xcd, 0x0c, 0xff, 0x61, 0xe1, 0xff, 0x61, 0xc0, 0x47,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xcc, 0xa7, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x57,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x44, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x44, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xc4, 0x64, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xcc, 0x65, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x25, 0xff, 0xc4, 0x65, 0xff, 0x61, 0xe0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x26, 0xff, 0xb4, 0x05, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x05, 0xff, 0xe5, 0x26, 0xff, 0xe5, 0x89, 0xff, 0x93, 0x23, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x54,
  0xe5, 0x05, 0xff, 0xe5, 0x26, 0xff, 0xe5, 0x47, 0xff, 0xed, 0x8a, 0xff, 0xbc, 0x25, 0xff, 0x82, 0x81, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x54,
  0xed, 0x68, 0xff, 0xed, 0x89, 0xff, 0xe5, 0x8a, 0xff, 0xb3, 0xe5, 0xff, 0x92, 0xe1, 0xff, 0x8a, 0xe2, 0xff, 0x61, 0xc0, 0xff, 0x61, 0xc0, 0x44,
  0xe5, 0x49, 0xff, 0xc4, 0x66, 0xff, 0x9b, 0x02, 0xff, 0x92, 0xe1, 0xff, 0x9b, 0x22, 0xff, 0x82, 0xc2, 0xff, 0x59, 0xa0, 0xff, 0x69, 0xe0, 0x0c,
  0x8a, 0xc1, 0xff, 0x92, 0xe1, 0xff, 0x93, 0x02, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x61, 0xe1, 0xff, 0x59, 0xa0, 0xcb, 0x00, 0x00, 0x00,
  0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x43, 0xff, 0x9b, 0x63, 0xff, 0x7a, 0x82, 0xff, 0x49, 0x40, 0xff, 0x49, 0x60, 0x40, 0x00, 0x00, 0x00,
  0x9b, 0x43, 0xff, 0x9b, 0x63, 0xff, 0x9b, 0x43, 0xff, 0x7a, 0xa2, 0xff, 0x39, 0x00, 0xff, 0x41, 0x20, 0xb0, 0x08, 0x20, 0x10, 0x00, 0x00, 0x00,
  0x9b, 0x43, 0xff, 0x82, 0xc2, 0xff, 0x59, 0xe1, 0xff, 0x41, 0x20, 0xff, 0x39, 0x00, 0xc7, 0x08, 0x40, 0x44, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
  0x41, 0x20, 0xff, 0x41, 0x20, 0xff, 0x41, 0x20, 0xf8, 0x28, 0xa0, 0x93, 0x00, 0x00, 0x57, 0x00, 0x00, 0x34, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
  0x30, 0xe0, 0xb0, 0x20, 0xa0, 0x8c, 0x00, 0x00, 0x5c, 0x00, 0x00, 0x54, 0x00, 0x00, 0x50, 0x00, 0x00, 0x24, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x57, 0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x57, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x58, 0x00, 0x00, 0x58, 0x00, 0x00, 0x54, 0x00, 0x00, 0x40, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x50, 0x00, 0x00, 0x48, 0x00, 0x00, 0x34, 0x00, 0x00, 0x18, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x27, 0x00, 0x00, 0x18, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif

};

const lv_img_dsc_t imgbtn_right = {
  .header.always_zero = 0,
  .header.w = 8,
  .header.h = 50,
  .data_size = 400 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgbtn_right_map,
};

