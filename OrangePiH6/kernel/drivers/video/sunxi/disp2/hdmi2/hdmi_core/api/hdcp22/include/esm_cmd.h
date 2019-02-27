/*
 * Allwinner SoCs hdmi2.0 driver.
 *
 * Copyright (C) 2016 Allwinner.
 *
 * This file is licensed under the terms of the GNU General Public
 * License version 2.  This program is licensed "as is" without any
 * warranty of any kind, whether express or implied.
 */
#ifndef _ESM_CMD_H_
#define _ESM_CMD_H_

/* establish starting points for application code*/
#define ESM_CMD_START    32
#define ESM_CMD_SC_START 96
#define ESM_CMD_SA_START 128
#define ESM_CMD_MAX      256

/* 0 .. 255 are reserved for external messages */

/* Internal Command States */
#define ESM_CMD_SYSTEM_END 0
#define ESM_CMD_NONE       ESM_CMD_SYSTEM_END

/* Unsolicited RESPONSE Boot message */
#define ESM_CMD_SYSTEM_REQ_RESP_START  1

/* External Command States (with no parameters) */
#define ESM_CMD_SYSTEM_CMD_NO_PARAM         1
#define ESM_CMD_SYSTEM_BOOT_REQ             (ESM_CMD_SYSTEM_CMD_NO_PARAM + 0)
#define ESM_CMD_SYSTEM_BOOT_RESP            (ESM_CMD_SYSTEM_CMD_NO_PARAM + 0)
#define ESM_CMD_SYSTEM_RESET_REQ            (ESM_CMD_SYSTEM_CMD_NO_PARAM + 1)
#define ESM_CMD_SYSTEM_RESET_RESP           (ESM_CMD_SYSTEM_CMD_NO_PARAM + 1)
#define ESM_CMD_SYSTEM_GET_STATE_REQ        (ESM_CMD_SYSTEM_CMD_NO_PARAM + 2)
#define ESM_CMD_SYSTEM_GET_STATE_RESP       (ESM_CMD_SYSTEM_CMD_NO_PARAM + 2)
#define ESM_CMD_SYSTEM_RESEED_REQ           (ESM_CMD_SYSTEM_CMD_NO_PARAM + 3)
#define ESM_CMD_SYSTEM_RESEED_RESP          (ESM_CMD_SYSTEM_CMD_NO_PARAM + 3)
#define ESM_CMD_SYSTEM_GET_ERROR_REQ        (ESM_CMD_SYSTEM_CMD_NO_PARAM + 4)
#define ESM_CMD_SYSTEM_GET_ERROR_RESP       (ESM_CMD_SYSTEM_CMD_NO_PARAM + 4)
#define ESM_CMD_SYSTEM_DISABLE_LOGGING_REQ  (ESM_CMD_SYSTEM_CMD_NO_PARAM + 5)
#define ESM_CMD_SYSTEM_DISABLE_LOGGING_RESP (ESM_CMD_SYSTEM_CMD_NO_PARAM + 5)
#define ESM_CMD_SYSTEM_RESET_EXCEPT_REQ     (ESM_CMD_SYSTEM_CMD_NO_PARAM + 6)
#define ESM_CMD_SYSTEM_RESET_EXCEPT_RESP    (ESM_CMD_SYSTEM_CMD_NO_PARAM + 6)
#define ESM_CMD_SYSTEM_GET_INFO_REQ         (ESM_CMD_SYSTEM_CMD_NO_PARAM + 7)
#define ESM_CMD_SYSTEM_GET_INFO_RESP        (ESM_CMD_SYSTEM_CMD_NO_PARAM + 7)
#define ESM_CMD_SYSTEM_ON_EXIT_REQ          (ESM_CMD_SYSTEM_CMD_NO_PARAM + 8)
#define ESM_CMD_SYSTEM_ON_EXIT_RESP         (ESM_CMD_SYSTEM_CMD_NO_PARAM + 8)

/* External Command States with 1 parameter */
#define ESM_CMD_SYSTEM_CMD_WITH_1_PARAM   10
#define ESM_CMD_SYSTEM_ENABLE_LOGGING_REQ  (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 0)
#define ESM_CMD_SYSTEM_ENABLE_LOGGING_RESP (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 0)
#define ESM_CMD_SYSTEM_NOTIFY_LOGGING_REQ  (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 1)
#define ESM_CMD_SYSTEM_NOTIFY_LOGGING_RESP (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 1)
#define ESM_CMD_SYSTEM_EXT_MEM_READ_REQ    (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 2)
#define ESM_CMD_SYSTEM_EXT_MEM_READ_RESP   (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 2)

/* #ifdef DEBUG */
#define ESM_CMD_SYSTEM_REG_READ_REQ        (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 5)
#define ESM_CMD_SYSTEM_REG_READ_RESP       (ESM_CMD_SYSTEM_CMD_WITH_1_PARAM + 5)
/* #endif */

/* External Command States with 2 parameter */
#define ESM_CMD_SYSTEM_CMD_WITH_2_PARAM   16
#define ESM_CMD_SYSTEM_VERIFY_CONFIG_REQ         (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 0)
#define ESM_CMD_SYSTEM_VERIFY_CONFIG_RESP        (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 0)
#define ESM_CMD_SYSTEM_SET_MEMORY_PARTITION_REQ  (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 1)
#define ESM_CMD_SYSTEM_SET_MEMORY_PARTITION_RESP (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 1)
#define ESM_CMD_SYSTEM_HPI_COMM_SETTING_REQ      (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 2)
#define ESM_CMD_SYSTEM_HPI_COMM_SETTING_RESP     (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 2)
#define ESM_CMD_SYSTEM_EXT_MEM_WRITE_REQ         (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 3)
#define ESM_CMD_SYSTEM_EXT_MEM_WRITE_RESP        (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 3)

/* #ifdef DEBUG */
#define ESM_CMD_SYSTEM_REG_WRITE_REQ             (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 15)
#define ESM_CMD_SYSTEM_REG_WRITE_RESP            (ESM_CMD_SYSTEM_CMD_WITH_2_PARAM + 15)
/* #endif */

/* COMM settings for COMM_SETTING_REQ */
#define ESM_COMM_SETTING_I2C_FREQ   0
#define ESM_COMM_SETTING_CAP_MODE   1
#define ESM_COMM_SETTING_REAUTH_REQ 2

#define ESM_CMD_SYSTEM_CMD_END             ESM_CMD_START

#endif /* _ESM_CMD_H_ */
