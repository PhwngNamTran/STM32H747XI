#ifndef RCC_H
#define RCC_H

#include "stm32h747xx.h"
#include "gpio.h"

void RCC_GPIO_Clock_Enable(GPIO_TypeDef *GPIOx);

#endif