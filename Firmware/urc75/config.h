// Copyright 2023 quarterpie
// SPDX-License-Identifier: GPL-2.0-or-later
#pragma once

/* Key matrix size */
#define MATRIX_ROWS 6
#define MATRIX_COLS 14

/* Key matrix pins */
#define MATRIX_ROW_PINS { GP18, GP19, GP20, GP21, GP22, GP23 }
#define MATRIX_COL_PINS { GP0, GP1, GP2, GP5, GP6, GP7, GP8, GP9, GP10, GP11, GP12, GP13, GP15, GP14 }

/* OLED configuration */
#define OLED_DISPLAY_128X32s
#define I2C_DRIVER I2CD0
#define I2C1_SCL_PIN GP25
#define I2C1_SDA_PIN GP24
#define OLED_TIMEOUT 30000

// Debounce 
#define DEBOUNCE 5
