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

typedef enum
{
    C_Button_Released_N, /**< Button is released */
    C_Button_Pressed_N   /**< Button is pressed */
} ButtonState_N;

void Button_Init(Button_TypeDef button);
ButtonState_N Button_GetState(Button_TypeDef button);
void Button_Interrupt_Config(Button_TypeDef button);

#endif