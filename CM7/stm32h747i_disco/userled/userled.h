#ifndef USERLED_H
#define USERLED_H

#include "led.h"
#include "hardware_cfg.h"

/* LED GPIO Configuration */
#define LED_Port        GPIOI         /**< LED GPIO Port */

/* LED Pin Definitions */
#define LED_1_PIN       12U /**< LED 1 Pin */
#define LED_2_PIN       13U /**< LED 2 Pin */
#define LED_3_PIN       14U /**< LED 3 Pin */
#define LED_4_PIN       15U /**< LED 4 Pin */

#ifdef LED_1_USED
extern LED_TypeDef LED_1;
#endif

#ifdef LED_2_USED
extern LED_TypeDef LED_2;
#endif

#ifdef LED_3_USED
extern LED_TypeDef LED_3;
#endif

#ifdef LED_4_USED
extern LED_TypeDef LED_4;
#endif

#endif