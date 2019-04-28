/*
 * main.h
 *
 *  Created on: Apr 20, 2019
 *      Author: michal
 */

#ifndef MAIN_H_
#define MAIN_H_

#include "stm32f4xx.h"
#include "bb.h"
#include "gpio.h"
#include "stm32f4discovery.h"

#define MAX_I	0x5FFFF

// Functions declarations:
void hGPIOInit(void);
static void prvSetupHardware(void);


#endif /* MAIN_H_ */
