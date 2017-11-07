/*
 * app_GPIO.c
 *
 *  Created on: 06/11/2017
 *      Author: Alejandro
 */
#include "stdio.h"
#include "MKL25Z4.h"
#include "stdtypedef.h"
#include"app_GPIO.h"
#include "fsl_clock.h"
#include "fsl_gpio.h"
#include "fsl_port.h"
void app_GPIO_init(void)
{
	/*Habilitar relojes de los modulos necesarios*/

	CLOCK_EnableClock(kCLOCK_PortC);
	port_pin_config_t ls_PinConfig;
	ls_PinConfig.mux = kPORT_MuxAsGpio;
	port_pin_config_t *lps_PinConfig;
	lps_PinConfig = &ls_PinConfig;
	PORT_SetPinConfig(PORTC, 9u, lps_PinConfig);


	/*configuracion del gpio para que el puerto c9*/
	gpio_pin_config_t ls_GPIOPinConfig;
	ls_GPIOPinConfig.pinDirection=kGPIO_DigitalInput;
	ls_GPIOPinConfig.pinDirection=FALSE;
	gpio_pin_config_t *lps_GPIOPinConfig;
	lps_GPIOPinConfig = &ls_GPIOPinConfig;

	GPIO_PinInit(GPIOC, 9u, lps_GPIOPinConfig);
}

T_UBYTE app_GPIO_GetPinValue(GPIO_Type *lps_BaseAddress, T_UBYTE lub_PinNumber)
{
	T_UBYTE lub_PinValue;

	lub_PinValue=(T_UBYTE)GPIO_ReadPinInput(lps_BaseAddress, lub_PinNumber);

		if(lub_PinValue == TRUE)
		{
			printf("TRUE");
		}
		else
		{
			printf("FALSE");
		}
}
