#ifndef USERLED_H
#define USERLED_H

#include "led.h"
#include "hardware_cfg.h"

#if defined (USERLED_1_USED) || defined (USERLED_2_USED) || defined (USERLED_3_USED) || defined (USERLED_4_USED)
#define userled_PORT        GPIOI
#endif


#if defined (USERLED_1_USED)
#define userled_1_PIN  GPIO_PIN_12_N 
extern LED_TypeDef userled_1;
#endif

#if defined (USERLED_2_USED)
#define userled_1_PIN  GPIO_PIN_13_N
extern LED_TypeDef userled_2;
#endif

#if defined (USERLED_3_USED)
#define userled_1_PIN  GPIO_PIN_14_N
extern LED_TypeDef userled_3;
#endif

#if defined (USERLED_4_USED)
#define userled_1_PIN  GPIO_PIN_15_N
extern LED_TypeDef userled_4;
#endif

#endif