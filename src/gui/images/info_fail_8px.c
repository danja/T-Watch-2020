#include "lvgl/lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_INFO_FAIL_8PX
#define LV_ATTRIBUTE_IMG_INFO_FAIL_8PX
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_INFO_FAIL_8PX uint8_t info_fail_8px_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Alpha 8 bit, Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x80, 0x00, 0xe0, 0x2b, 0xe0, 0xb4, 0xe0, 0xf3, 0xe0, 0xf0, 0xe0, 0xac, 0xe0, 0x24, 0x20, 0x00, 
  0xe0, 0x2c, 0xe0, 0xf3, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xec, 0xe0, 0x23, 
  0xe0, 0xb7, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xa7, 
  0xe0, 0xf7, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe7, 
  0xe0, 0xf7, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xe7, 
  0xe0, 0xb7, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xa7, 
  0xe0, 0x2c, 0xe0, 0xf3, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xff, 0xe0, 0xec, 0xe0, 0x23, 
  0x80, 0x00, 0xe0, 0x2b, 0xe0, 0xb4, 0xe0, 0xf3, 0xe0, 0xf0, 0xe0, 0xac, 0xe0, 0x24, 0x20, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x90, 0x00, 0x00, 0xf8, 0x2b, 0x00, 0xf8, 0xb4, 0x00, 0xf8, 0xf3, 0x00, 0xf8, 0xf0, 0x00, 0xf8, 0xac, 0x00, 0xf8, 0x24, 0x00, 0x18, 0x00, 
  0x00, 0xf8, 0x2c, 0x00, 0xf8, 0xf3, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xec, 0x00, 0xf8, 0x23, 
  0x00, 0xf8, 0xb7, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xa7, 
  0x00, 0xf8, 0xf7, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xe7, 
  0x00, 0xf8, 0xf7, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xe7, 
  0x00, 0xf8, 0xb7, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xa7, 
  0x00, 0xf8, 0x2c, 0x00, 0xf8, 0xf3, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xff, 0x00, 0xf8, 0xec, 0x00, 0xf8, 0x23, 
  0x00, 0x90, 0x00, 0x00, 0xf8, 0x2b, 0x00, 0xf8, 0xb4, 0x00, 0xf8, 0xf3, 0x00, 0xf8, 0xf0, 0x00, 0xf8, 0xac, 0x00, 0xf8, 0x24, 0x00, 0x18, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
  0x90, 0x00, 0x00, 0xf8, 0x00, 0x2b, 0xf8, 0x00, 0xb4, 0xf8, 0x00, 0xf3, 0xf8, 0x00, 0xf0, 0xf8, 0x00, 0xac, 0xf8, 0x00, 0x24, 0x18, 0x00, 0x00, 
  0xf8, 0x00, 0x2c, 0xf8, 0x00, 0xf3, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xec, 0xf8, 0x00, 0x23, 
  0xf8, 0x00, 0xb7, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xa7, 
  0xf8, 0x00, 0xf7, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xe7, 
  0xf8, 0x00, 0xf7, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xe7, 
  0xf8, 0x00, 0xb7, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xa7, 
  0xf8, 0x00, 0x2c, 0xf8, 0x00, 0xf3, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xff, 0xf8, 0x00, 0xec, 0xf8, 0x00, 0x23, 
  0x90, 0x00, 0x00, 0xf8, 0x00, 0x2b, 0xf8, 0x00, 0xb4, 0xf8, 0x00, 0xf3, 0xf8, 0x00, 0xf0, 0xf8, 0x00, 0xac, 0xf8, 0x00, 0x24, 0x18, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0xff, 0x2b, 0x00, 0x00, 0xff, 0xb4, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xac, 0x00, 0x00, 0xff, 0x24, 0x00, 0x00, 0x1c, 0x00, 
  0x00, 0x00, 0xff, 0x2c, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xec, 0x00, 0x00, 0xff, 0x23, 
  0x00, 0x00, 0xff, 0xb7, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xa7, 
  0x00, 0x00, 0xff, 0xf7, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xe7, 
  0x00, 0x00, 0xff, 0xf7, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xe7, 
  0x00, 0x00, 0xff, 0xb7, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xa7, 
  0x00, 0x00, 0xff, 0x2c, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xec, 0x00, 0x00, 0xff, 0x23, 
  0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, 0xff, 0x2b, 0x00, 0x00, 0xff, 0xb4, 0x00, 0x00, 0xff, 0xf3, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xac, 0x00, 0x00, 0xff, 0x24, 0x00, 0x00, 0x1c, 0x00, 
#endif
};

const lv_img_dsc_t info_fail_8px = {
  .header.always_zero = 0,
  .header.w = 8,
  .header.h = 8,
  .data_size = 64 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = info_fail_8px_map,
};

