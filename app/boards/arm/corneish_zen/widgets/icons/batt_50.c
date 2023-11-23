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

#ifndef LV_ATTRIBUTE_IMG_BATT_50
#define LV_ATTRIBUTE_IMG_BATT_50
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BATT_50 uint8_t
    batt_50_map[] = {0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
                     0x00, 0x00, 0x00, 0xff, /*Color of index 1*/

                     0x00, 0x00, 0x00, 0x7f, 0xff, 0x00, 0x40, 0x01, 0x00, 0x5b,
                     0x01, 0x80, 0x5b, 0x01, 0x80, 0x5b, 0x01, 0x80, 0x5b, 0x01,
                     0x80, 0x40, 0x01, 0x00, 0x7f, 0xff, 0x00, 0x00, 0x00, 0x00};

const lv_img_dsc_t batt_50 = {
    .header.always_zero = 0,
    .header.w = 18,
    .header.h = 10,
    .data_size = 32,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = batt_50_map,
};
