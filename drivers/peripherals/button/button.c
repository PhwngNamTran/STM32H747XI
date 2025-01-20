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
 * Function: Button_GetState
 * -------------------------
 * Checks the status of the Button.
 *
 * Returns:
 *   Button state:
 *   - C_Button_Released_N (0): Button released.
 *   - C_Button_Pressed_N (1): Button pressed.
 */
ButtonState_N Button_GetState(Button_TypeDef button)
{
    ButtonState_N l_Button_State_N = C_Button_Released_N;
    l_Button_State_N = (ButtonState_N)CHECK_BIT(button.port->IDR, (0x1 << button.pin));
    return l_Button_State_N;
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