#ifndef LED_H
#define LED_H

#include "gpio.h"
#include "stm32h747xx.h"

/* LED GPIO Configuration */
#define LED_Port        GPIOI         /**< LED GPIO Port */

/* LED Pin Definitions */
#define LED_1_PIN       GPIO_PIN_12_N /**< LED 1 Pin */
#define LED_2_PIN       GPIO_PIN_13_N /**< LED 2 Pin */
#define LED_3_PIN       GPIO_PIN_14_N /**< LED 3 Pin */
#define LED_4_PIN       GPIO_PIN_15_N /**< LED 4 Pin */

/* LED Index Definitions */
#define LED_1           0U  /**< LED 1 Index */
#define LED_2           1U  /**< LED 2 Index */
#define LED_3           2U  /**< LED 3 Index */
#define LED_4           3U  /**< LED 4 Index */

/*
 * Function declarations for managing LEDs:
 * - LED_Init: Initialize LED.
 * - LED_ON: Turn ON specified LED.
 * - LED_OFF: Turn OFF specified LED.
 * - LED_TOGGLE: Toggle specified LED.
 */
extern void LED_Init(uint8_t LEDx);   /**< Initialize LEDs */
extern void LED_ON(uint8_t LEDx);     /**< Turn ON specified LED */
extern void LED_OFF(uint8_t LEDx);    /**< Turn OFF specified LED */
extern void LED_TOGGLE(uint8_t LEDx); /**< Toggle specified LED */

#endif /* LED_H */
