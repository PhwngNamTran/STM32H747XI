#ifndef BUTTON_H
#define BUTTON_H

#include "gpio.h"
#include "stm32h747xx.h"

typedef struct {
    GPIO_TypeDef*   port;
    uint16_t        pin;
} Button_TypeDef;

#endif