/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Copyright (c) 2022 MediaTek Inc.
 */

#ifndef MT6983_ATF_H
#define MT6983_ATF_H

#include "conninfra.h"

int consys_init_atf_data_mt6983_atf(void);
int consys_polling_chipid_mt6983_atf(void);
int connsys_d_die_cfg_mt6983_atf(void);
int connsys_spi_master_cfg_mt6983_atf(unsigned int next_status);
int connsys_a_die_cfg_mt6983_atf(void);
int connsys_afe_wbg_cal_mt6983_atf(void);
void connsys_afe_sw_patch_mt6983_atf(void);
int connsys_subsys_pll_initial_mt6983_atf(void);
int connsys_low_power_setting_mt6983_atf(unsigned int curr_status, unsigned int next_status);
int consys_conninfra_wakeup_mt6983_atf(void);
int consys_conninfra_sleep_mt6983_atf(void);
int consys_spi_read_mt6983_atf(enum sys_spi_subsystem subsystem, unsigned int addr, unsigned int *data);
int consys_spi_write_mt6983_atf(enum sys_spi_subsystem subsystem, unsigned int addr, unsigned int data);
int consys_spi_update_bits_mt6983_atf(enum sys_spi_subsystem subsystem, unsigned int addr, unsigned int data, unsigned int mask);
int consys_spi_clock_switch_mt6983_atf(enum connsys_spi_speed_type type);
int consys_subsys_status_update_mt6983_atf(bool on, int radio);
int consys_thermal_query_mt6983_atf(void);
int consys_reset_power_state_mt6983_atf(void);
int consys_power_state_dump_mt6983_atf(char *buf, unsigned int size);
void consys_set_mcu_control_mt6983_atf(int type, bool onoff);
int consys_pre_cal_backup_mt6983_atf(unsigned int offset, unsigned int size);
int consys_pre_cal_clean_data_mt6983_atf(void);

#endif /* MT6983_ATF_H */
