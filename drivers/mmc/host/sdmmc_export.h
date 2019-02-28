/*
 * Realtek SD/MMC/mini SD card driver
 *
 * Authors:
 * Copyright (C) 2017 Realtek Ltd.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */
#ifndef CONFIG_ARCH_RTD119X
#ifdef CONFIG_SUSPEND

extern int get_RTK_PM_STATE(void);

#endif //CONFIG_SUSPEND

extern int initial_flag2;

extern int get_RTK_initial_flag(void);

extern void set_RTK_initial_flag(int flag);

#endif
