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

#ifndef LV_ATTRIBUTE_IMG_BLUETOOTH_CONNECTED_RIGHT
#define LV_ATTRIBUTE_IMG_BLUETOOTH_CONNECTED_RIGHT
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_BLUETOOTH_CONNECTED_RIGHT
    uint8_t bluetooth_connected_right_map[] = {
        0xff, 0xff, 0xff, 0xff, /*Color of index 0*/
        0x00, 0x00, 0x00, 0xff, /*Color of index 1*/
};

const lv_img_dsc_t bluetooth_connected_right = {
    .header.always_zero = 0,
    .header.w = 0,
    .header.h = 0,
    .data_size = 8,
    .header.cf = LV_IMG_CF_INDEXED_1BIT,
    .data = bluetooth_connected_right_map,
};
