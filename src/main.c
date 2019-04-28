/*
 * author:	Michal Labowski
 * brief: 	This is a basic template for STM32F407VGT6
 */
#include "main.h"

int main(void)
{
	// Hardware configuration:
	prvSetupHardware();

	while(1)
	return 0;
}

static void prvSetupHardware(void)
{
	hGPIOInit();
}

void hGPIOInit(void)
{
	RCC->AHB1ENR |= RCC_AHB1ENR_GPIODEN; 	// Enable clock for GPIO PORT D
	__DSB();

	gpio_pin_cfg(GPIOD, PIN_LED_GREEN, gpio_mode_output_PP_FS); 	// GPIO config for LED GREEN
}







