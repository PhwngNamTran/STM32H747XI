#ifndef WKBUTTON_H
#define WKBUTTON_H

#include "button.h"
#include "exti.h"
#include "stm32h747xx.h"
#include "hardware_cfg.h"

#ifdef WK_BUTTON_USED

#define WK_Button_Port  GPIOC                       /**< WK Button GPIO Port */
#define WK_Button_PIN   GPIO_PIN_13_N               /**< WK Button GPIO Pin number */
#define WK_Button_EXTI  EXTI_EventInput_EXTI_13_N   /**< WK Button Event Input */
#define WK_Button_IRQn  EXTI15_10_IRQn              /**< WK Button IRQ number */

extern Button_TypeDef WK_Button;
#endif
#endif