#ifndef LED_H
#define LED_H

#include "gpio.h"
#include "stm32h747xx.h"

typedef struct {
    GPIO_TypeDef*   port;
    GPIO_Pin_N      pin;
} LED_TypeDef;

void LED_Init(LED_TypeDef led);   /**< Initialize LEDs */
void LED_ON(LED_TypeDef led);     /**< Turn ON specified LED */
void LED_OFF(LED_TypeDef led);    /**< Turn OFF specified LED */
void LED_TOGGLE(LED_TypeDef led); /**< Toggle specified LED */

#endif /* LED_H */
