#include "interrupts.h"

void SysTick_Handler(void)
{
	GPIO_TOGGLE(GPIOD, PIN_LED_GREEN);
}
