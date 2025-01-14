#ifndef SYSCFG_H
#define SYSCFG_H

#include "stm32h747xx.h"
#include "miscellaneous.h"
#include "standard_libs.h"
#include "gpio.h"

extern ReturnType SYSCFG_EXITx_GPIO_Config(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin);

#endif