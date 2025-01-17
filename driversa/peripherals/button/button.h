#ifndef BUTTON_H
#define BUTTON_H

#include "stm32h747xx.h"
#include "gpio.h"
#include "exti.h"
#include "syscfg.h"

typedef struct {
    GPIO_TypeDef*       port;
    GPIO_Pin_N          pin;
    EXTI_EventInput_N   exti;
    IRQn_Type           IRQn;
} Button_TypeDef;

void Button_Init(Button_TypeDef button);
void Button_Interrupt_Config(Button_TypeDef button);

#endif