/*
 * app_GPIO.h
 *
 *  Created on: 06/11/2017
 *      Author: Alejandro
 */

#ifndef APLICACION_APP_GPIO_H_
#define APLICACION_APP_GPIO_H_
#include "stdtypedef.h"

extern void app_GPIO_init(void);

extern T_UBYTE app_GPIO_GetPinValue(GPIO_Type *lps_BaseAddress, T_UBYTE lub_PinNumber);

#endif /* APLICACION_APP_GPIO_H_ */
