#include "led.h"

/*
 * Function: LED_Init
 * ----------------------
 * Initializes LED:
 *   - Configures GPIO mode, pull resistor, and output type.
 *   - Sets default state to LED OFF.
 */
void LED_Init(uint8_t LEDx)
{
    switch (LEDx)
    {
        case LED_1:
            GPIO_Mode_Set(LED_Port, LED_1_PIN, GPIO_Mode_General_Purpose_Output_N);
            GPIO_Pull_Set(LED_Port, LED_1_PIN, GPIO_No_Pull_N);
            GPIO_OutputType_Set(LED_Port, LED_1_PIN, GPIO_Output_PushPull_N);
            LED_OFF(LED_1);
            break;

        case LED_2:
            GPIO_Mode_Set(LED_Port, LED_2_PIN, GPIO_Mode_General_Purpose_Output_N);
            GPIO_Pull_Set(LED_Port, LED_2_PIN, GPIO_No_Pull_N);
            GPIO_OutputType_Set(LED_Port, LED_2_PIN, GPIO_Output_PushPull_N);
            LED_OFF(LED_2);
            break;

        case LED_3:
            GPIO_Mode_Set(LED_Port, LED_3_PIN, GPIO_Mode_General_Purpose_Output_N);
            GPIO_Pull_Set(LED_Port, LED_3_PIN, GPIO_No_Pull_N);
            GPIO_OutputType_Set(LED_Port, LED_3_PIN, GPIO_Output_PushPull_N);
            LED_OFF(LED_3);
            break;

        case LED_4:
            GPIO_Mode_Set(LED_Port, LED_4_PIN, GPIO_Mode_General_Purpose_Output_N);
            GPIO_Pull_Set(LED_Port, LED_4_PIN, GPIO_No_Pull_N);
            GPIO_OutputType_Set(LED_Port, LED_4_PIN, GPIO_Output_PushPull_N);
            LED_OFF(LED_4);
            break;
    }
}

/*
 * Function: LED_ON
 * --------------------
 * Turns ON the specified LED.
 *
 * Parameters:
 *   LEDx: LED number to turn ON (LED_1, LED_2, LED_3, LED_4)
 */
void LED_ON(uint8_t LEDx)
{
    switch (LEDx)
    {
        case LED_1:
            GPIO_OutputData_Reset(LED_Port, LED_1_PIN);
            break;

        case LED_2:
            GPIO_OutputData_Reset(LED_Port, LED_2_PIN);
            break;

        case LED_3:
            GPIO_OutputData_Reset(LED_Port, LED_3_PIN);
            break;

        case LED_4:
            GPIO_OutputData_Reset(LED_Port, LED_4_PIN);
            break;

        default:
            break;
    }
}

/*
 * Function: LED_OFF
 * ---------------------
 * Turns OFF the specified LED.
 *
 * Parameters:
 *   LEDx: LED number to turn OFF (LED_1, LED_2, LED_3, LED_4)
 */
void LED_OFF(uint8_t LEDx)
{
    switch (LEDx)
    {
        case LED_1:
            GPIO_OutputData_Set(LED_Port, LED_1_PIN);
            break;

        case LED_2:
            GPIO_OutputData_Set(LED_Port, LED_2_PIN);
            break;

        case LED_3:
            GPIO_OutputData_Set(LED_Port, LED_3_PIN);
            break;

        case LED_4:
            GPIO_OutputData_Set(LED_Port, LED_4_PIN);
            break;

        default:
            break;
    }
}

/*
 * Function: LED_TOGGLE
 * ------------------------
 * Toggles the state of the specified LED (ON to OFF or OFF to ON).
 *
 * Parameters:
 *   LEDx: LED number to toggle (LED_1, LED_2, LED_3, LED_4)
 */
void LED_TOGGLE(uint8_t LEDx)
{
    switch (LEDx)
    {
        case LED_1:
            GPIO_OutputData_Toggle(LED_Port, LED_1_PIN);
            break;

        case LED_2:
            GPIO_OutputData_Toggle(LED_Port, LED_2_PIN);
            break;

        case LED_3:
            GPIO_OutputData_Toggle(LED_Port, LED_3_PIN);
            break;

        case LED_4:
            GPIO_OutputData_Toggle(LED_Port, LED_4_PIN);
            break;

        default:
            break;
    }
}
