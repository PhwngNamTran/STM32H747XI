#include "wkbutton.h"

#ifdef WK_BUTTON_USED

Button_TypeDef wk_button = {wk_button_PORT, wk_button_PIN, wk_button_EXTI, wk_button_IRQn};

#endif