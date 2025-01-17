#include "gpio.h"

/*
 * Function: GPIO_Mode_Set
 * -----------------------
 * Configures the mode of a specific GPIO pin by clearing the existing mode and setting a new mode.
 * 
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the port being configured.
 *   pin   - GPIO pin number to configure (0-15 for standard GPIO ports).
 *   mode  - New mode to set for the pin (input, output, alternate function, or analog).
 *
 * Returns:
 *   E_OK   - If configuration was successful.
 */
ReturnType GPIO_Mode_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_Mode_N mode)
{
    // Clear the mode register for the specified pin
    CLEAR_BIT(GPIOx->MODER, (GPIO_MODER_MODEx_MASK << (pin * GPIO_MODER_MODEx_SIZE)));
    // Set the new mode for the specified pin
    SET_BIT(GPIOx->MODER, ((mode & GPIO_MODER_MODEx_MASK) << (pin * GPIO_MODER_MODEx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_OutputType_Set
 * -----------------------------
 * Configures the output type for a specified GPIO pin.
 *
 * Parameters:
 *   GPIOx      - Pointer to the GPIO structure for the specific GPIO port
 *   pin        - Pin number to configure (GPIO_Pin_N)
 *   outputtype - Desired output type (GPIO_OutputType_N)
 *
 * Returns:
 *   E_OK   - If configuration was successful.
 */
ReturnType GPIO_OutputType_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_OutputType_N outputtype)
{
    // Clear the output type register for the specified pin
    CLEAR_BIT(GPIOx->OTYPER, (GPIO_OTYPER_OTx_MASK << (pin * GPIO_OTYPER_OTx_SIZE)));
    
    // Set the new output type for the specified pin, applying a mask to ensure only relevant bits are set
    SET_BIT(GPIOx->OTYPER, ((outputtype & GPIO_OTYPER_OTx_MASK) << (pin * GPIO_OTYPER_OTx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_Pull_Set
 * -----------------------
 * Configures the pull-up/pull-down resistor for a specified GPIO pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to configure (GPIO_Pin_N)
 *   pull  - Desired pull-up/pull-down configuration (GPIO_Pull_N)
 *
 * Returns:
 *   E_OK   - If configuration was successful.
 */
ReturnType GPIO_Pull_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_Pull_N pull)
{
    // Clear the pull-up/pull-down register for the specified pin
    CLEAR_BIT(GPIOx->PUPDR, (GPIO_PUPDR_PUPDx_MASK << (pin * GPIO_PUPDR_PUPDx_SIZE)));
    
    // Set the new pull-up/pull-down configuration for the specified pin, applying a mask to ensure only relevant bits are set
    SET_BIT(GPIOx->PUPDR, ((pull & GPIO_PUPDR_PUPDx_MASK) << (pin * GPIO_PUPDR_PUPDx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_Alternate_Function_Set
 * -------------------------------------
 * Configures the alternate function for a specified GPIO pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to configure (GPIO_Pin_N)
 *   AFx   - Desired alternate function (GPIO_AlternateFunction_N)
 *
 * Returns:
 *   E_OK   - If configuration was successful.
 */
ReturnType GPIO_Alternate_Function_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_AlternateFunction_N AFx)
{
    // Clear the current alternate function for the specified pin
    CLEAR_BIT(GPIOx->AFR[(pin / GPIO_AFRx_PINS_PER_REGISTER)],
             (GPIO_AFRx_AFSELx_MASK << ((pin % GPIO_AFRx_PINS_PER_REGISTER) * GPIO_AFRx_AFSELx_SIZE)));
    
    // Set the new alternate function for the specified pin
    SET_BIT(GPIOx->AFR[(pin / GPIO_AFRx_PINS_PER_REGISTER)], 
           ((AFx & GPIO_AFRx_AFSELx_MASK) << ((pin % GPIO_AFRx_PINS_PER_REGISTER) * GPIO_AFRx_AFSELx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_OutputData_Get
 * -----------------------------
 * Reads the output data register for the specified pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to read (GPIO_Pin_N)
 *
 * Returns:
 *   boolean - true if the pin is set, false if it is reset
 */
boolean GPIO_OutputData_Get(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin)
{
    // Read the output data register for the specified pin and return as boolean (true for set, false for reset)
    return (boolean)((READ_BIT(GPIOx->ODR, (GPIO_ODR_ODx_MASK << (pin * GPIO_ODR_ODx_SIZE)))) ? true : false);
}

/*
 * Function: GPIO_OutputData_Set
 * -----------------------------
 * Sets the output data register for the specified pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to set (GPIO_Pin_N)
 *
 * Returns:
 *   E_OK   - If the operation was successful.
 */
ReturnType GPIO_OutputData_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin)
{
    // Set the output data register for the specified pin
    SET_BIT(GPIOx->ODR, (GPIO_ODR_ODx_MASK << (pin * GPIO_ODR_ODx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_OutputData_Reset
 * -------------------------------
 * Clears the output data register for the specified pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to reset (GPIO_Pin_N)
 *
 * Returns:
 *   E_OK   - If the operation was successful.
 */
ReturnType GPIO_OutputData_Reset(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin)
{
    // Clear the output data register for the specified pin
    CLEAR_BIT(GPIOx->ODR, (GPIO_ODR_ODx_MASK << (pin * GPIO_ODR_ODx_SIZE)));

    return E_OK;
}

/*
 * Function: GPIO_OutputData_Toggle
 * --------------------------------
 * Toggles the output data register for the specified pin.
 *
 * Parameters:
 *   GPIOx - Pointer to the GPIO structure for the specific GPIO port
 *   pin   - Pin number to toggle (GPIO_Pin_N)
 *
 * Returns:
 *   E_OK   - If the operation was successful.
 */
ReturnType GPIO_OutputData_Toggle(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin)
{
    // Toggle the output data register for the specified pin
    if (GPIO_OutputData_Get(GPIOx, pin))
    {
        GPIO_OutputData_Reset(GPIOx, pin);  // Pin is set, so reset it
    }
    else
    {
        GPIO_OutputData_Set(GPIOx, pin);    // Pin is reset, so set it
    }

    return E_OK;
}
