/*
 * Copyright (C) 2017 OTA keys S.A.
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     drivers_adcxx1x
 * @{
 *
 * @file
 * @brief       Default configuration for ADCXX1C devices
 *
 * @author      Vincent Dupont <vincent@otakeys.com>
 */

#ifndef ADCXX1C_PARAMS_H
#define ADCXX1C_PARAMS_H

#include "board.h"
#include "saul_reg.h"
#include "adcxx1c.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @name    Set default configuration parameters for the ADCXX1C driver
 * @{
 */
#ifndef ADCXX1C_PARAM_I2C
#define ADCXX1C_PARAM_I2C        (I2C_DEV(0))
#endif
#ifndef ADCXX1C_PARAM_ADDR
#define ADCXX1C_PARAM_ADDR       (ADCXX1C_I2C_ADDRESS)
#endif
#ifndef ADCXX1C_PARAM_BITS
#define ADCXX1C_PARAM_BITS       (ADCXX1C_RES_DEFAULT)
#endif
#ifndef ADCXX1C_PARAM_CYCLE
#define ADCXX1C_PARAM_CYCLE      (ADCXX1C_CYCLE_DISABLED)
#endif
#ifndef ADCXX1C_PARAM_ALERT_PIN
#define ADCXX1C_PARAM_ALERT_PIN  (GPIO_UNDEF)
#endif
#ifndef ADCXX1C_PARAM_LOW_LIMIT
#define ADCXX1C_PARAM_LOW_LIMIT  (0)
#endif
#ifndef ADCXX1C_PARAM_HIGH_LIMIT
#define ADCXX1C_PARAM_HIGH_LIMIT (0)
#endif
#ifndef ADCXX1C_PARAM_HYSTERESIS
#define ADCXX1C_PARAM_HYSTERESIS (0)
#endif

#define ADCXX1C_PARAMS_DEFAULT  { .i2c        = ADCXX1C_PARAM_I2C, \
                                  .addr       = ADCXX1C_PARAM_ADDR, \
                                  .bits       = ADCXX1C_PARAM_BITS, \
                                  .cycle      = ADCXX1C_PARAM_CYCLE, \
                                  .alert_pin  = ADCXX1C_PARAM_ALERT_PIN, \
                                  .low_limit  = ADCXX1C_PARAM_LOW_LIMIT, \
                                  .high_limit = ADCXX1C_PARAM_HIGH_LIMIT, \
                                  .hysteresis = ADCXX1C_PARAM_HYSTERESIS }
/** @} */

/**
 * @brief   ADCXX1C configuration
 */
static const adcxx1c_params_t adcxx1c_params[] =
{
#ifdef ADCXX1C_PARAMS_BOARD
    ADCXX1C_PARAMS_BOARD,
#else
    ADCXX1C_PARAMS_DEFAULT,
#endif
};


/**
 * @brief   Additional meta information to keep in the SAUL registry
 */
static const saul_reg_info_t adcxx1c_saul_info[] =
{
    {
        .name = "adcxx1c",
    },
};

#ifdef __cplusplus
}
#endif

#endif /* ADCXX1C_PARAMS_H */
/** @} */
