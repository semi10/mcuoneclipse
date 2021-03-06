/*
 * Platform.h
 *
 *  Created on: 18.04.2018
 *      Author: Erich Styger
 */

#ifndef SOURCES_PLATFORM_H_
#define SOURCES_PLATFORM_H_

#define PL_CONFIG_HAS_I2C_SPY     (0)
#define PL_CONFIG_HAS_SEGGER_RTT  (1)
#define PL_CONFIG_HAS_USB_CDC     (1)
#define PL_CONFIG_HAS_TSL2561     (1) /* ambient light sensor */
#define PL_CONFIG_HAS_SGP30       (1) /* air quality sensor */
#define PL_CONFIG_HAS_RTC_DS3231  (1)
#define PL_CONFIG_HAS_GUI         (1)
#define PL_CONFIG_HAS_KEYS        (1)
#define PL_CONFIG_HAS_GUI_KEY_NAV (1 && PL_CONFIG_HAS_GUI && PL_CONFIG_HAS_KEYS) /* GUI touchless navigation */
#define PL_CONFIG_HAS_MMA8451     (1)

#endif /* SOURCES_PLATFORM_H_ */
