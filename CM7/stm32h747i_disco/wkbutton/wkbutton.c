#include "wkbutton.h"

#ifdef WK_BUTTON_USED

Button_TypeDef WK_Button = {WK_Button_Port, WK_Button_PIN, WK_Button_EXTI, WK_Button_IRQn};

#endif