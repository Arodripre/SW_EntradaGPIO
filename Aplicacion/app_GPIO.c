/*
 * app_GPIO.c
 *
 *  Created on: 06/11/2017
 *      Author: Alejandro
 */
#include "MKL25Z4.h"
#include "stdtypedef.h"
#include"app_GPIO.h"
#include "fsl_clock.h"
void app_GPIO_init(void)
{
	/*Habilitar relojes de los modulos necesarios*/

	CLOCK_EnableClock(kCLOCK_PortC);



}
