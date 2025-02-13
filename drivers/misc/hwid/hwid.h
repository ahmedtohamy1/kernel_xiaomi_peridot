/*
 * Copyright (C) 2021 XiaoMi, Inc.
 *               2022 The LineageOS Project
 *
 * SPDX-License-Identifier: GPL-2.0
 */

#ifndef __HWID_H__
#define __HWID_H__

#include <linux/types.h>

#define HARDWARE_PROJECT_UNKNOWN    0
#define HARDWARE_PROJECT_N1    		1 // aurora
#define HARDWARE_PROJECT_N2    		2 // shennong
#define HARDWARE_PROJECT_N3    		3 // houji
#define HARDWARE_PROJECT_N8    		4 // ruyi
#define HARDWARE_PROJECT_N11U       5 // manet
#define HARDWARE_PROJECT_N18    	6 // goku
#define HARDWARE_PROJECT_O11    	7 // zorn
// SM8635
#define HARDWARE_PROJECT_N16T    	8  // peridot
#define HARDWARE_PROJECT_N9       	9  // chenfeng
#define HARDWARE_PROJECT_O81    	10 // muyu
#define HARDWARE_PROJECT_O82    	11 // uke

typedef enum {
	CountryCN = 0x00,
	CountryGlobal = 0x01,
	CountryIndia = 0x02,
	CountryJapan = 0x03,
	INVALID = 0x04,
	CountryIDMax = 0x7FFFFFFF
} CountryType;

uint32_t get_hw_version_platform(void);
uint32_t get_hw_id_value(void);
uint32_t get_hw_country_version(void);
uint32_t get_hw_version_major(void);
uint32_t get_hw_version_minor(void);
uint32_t get_hw_version_build(void);

#endif /* __HWID_H__ */
