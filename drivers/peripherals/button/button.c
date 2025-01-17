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

/*
 * Function: Button_Interrupt_Config
 * ----------------------------------
 * - Configures EXTI GPIO for utton.
 * - Enables Rising trigger and disables Falling trigger for Button event input.
 * - Enables NVIC IRQ for Button.
 */
void Button_Interrupt_Config(Button_TypeDef button)
{
    SYSCFG_EXITx_GPIO_Config(button.port, button.pin);
    EXTI_EventInput_Interrupt_Enable_CPU1(button.exti);
    EXTI_Falling_Trigger_Disable(button.exti);
    EXTI_Rising_Trigger_Enable(button.exti);
    NVIC_EnableIRQ(button.IRQn);
}