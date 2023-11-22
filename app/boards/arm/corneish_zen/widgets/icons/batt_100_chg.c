/*
 *
 * Copyright (c) 2021 Darryl deHaan
 * SPDX-License-Identifier: MIT
 *
 */

#include <lvgl.h>

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BATT_100_CHG
#define LV_ATTRIBUTE_IMG_BATT_100_CHG
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATT_100_CHG uint8_t
    batt_100_chg_map[] = {0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
                          0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

                          0x00, 0x00, 0x00, 0x7d, 0x5f, 0x00, 0x41, 0x41, 0x00, 0x5b,
                          0xed, 0x80, 0x5b, 0xed, 0x80, 0x5b, 0xed, 0x80, 0x59, 0xcd,
                          0x80, 0x40, 0x81, 0x00, 0x7e, 0xbf, 0x00, 0x00, 0x00, 0x00};

const lv_img_dsc_t batt_100_chg = {
    .header.always_zero = 0,
    .header.w = 18,
    .header.h = 10,
    .data_size = 32,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = batt_100_chg_map,
};
