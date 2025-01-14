#include "button.h"

/*
 * Function: Button_Init
 * ------------------------
 * Initializes the Button.
 * - Configures GPIO Mode as Input.
 * - No Pull up/down resistor needed because it already has a pull-down resistor at the HW level.
 */
void Button_Init(Button_TypeDef button)
{
    GPIO_Mode_Set(button.port, button.pin, GPIO_Mode_Input_N);
    GPIO_Pull_Set(button.port, button.pin, GPIO_No_Pull_N);
}