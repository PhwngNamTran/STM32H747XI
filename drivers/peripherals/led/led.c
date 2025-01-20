#include "led.h"

/*
 * Function: LED_Init
 * ----------------------
 * Initializes LED:
 *   - Configures GPIO mode, pull resistor, and output type.
 *   - Sets default state to LED OFF.
 *
 * Parameters:
 *   led: LED to initialize
 */
void LED_Init(LED_TypeDef led)
{
    RCC_GPIO_Clock_Enable(led.port);
    GPIO_Mode_Set(led.port, led.pin, GPIO_Mode_General_Purpose_Output_N);
    GPIO_Pull_Set(led.port, led.pin, GPIO_No_Pull_N);
    GPIO_OutputType_Set(led.port, led.pin, GPIO_Output_PushPull_N);
    LED_OFF(led);
}

/*
 * Function: LED_ON
 * --------------------
 * Turns ON the specified LED.
 *
 * Parameters:
 *   led: LED to turn ON
 */
void LED_ON(LED_TypeDef led)
{
    GPIO_OutputData_Reset(led.port, led.pin);
}

/*
 * Function: LED_OFF
 * ---------------------
 * Turns OFF the specified LED.
 *
 * Parameters:
 *   led: LED to turn OFF
 */
void LED_OFF(LED_TypeDef led)
{
    GPIO_OutputData_Set(led.port, led.pin);
}

/*
 * Function: LED_TOGGLE
 * ------------------------
 * Toggles the state of the specified LED (ON to OFF or OFF to ON).
 *
 * Parameters:
 *   led: LED to toggle
 */
void LED_TOGGLE(LED_TypeDef led)
{
    GPIO_OutputData_Toggle(led.port, led.pin);
}
