#ifndef WKBUTTON_H
#define WKBUTTON_H

#include "button.h"
#include "exti.h"
#include "stm32h747xx.h"
#include "hardware_cfg.h"

#ifdef WK_BUTTON_USED

#define wk_button_PORT  GPIOC         
#define wk_button_PIN   GPIO_PIN_13_N    
#define wk_button_EXTI  EXTI_EventInput_EXTI_13_N
#define wk_button_IRQn  EXTI15_10_IRQn

extern Button_TypeDef wk_button;
#endif
#endif