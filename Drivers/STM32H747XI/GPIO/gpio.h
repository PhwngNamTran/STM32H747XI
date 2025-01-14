#ifndef GPIO_H
#define GPIO_H

#include "stm32h747xx.h"
#include "miscellaneous.h"
#include "standard_libs.h"

/**
  * @brief   Enum for GPIO pins
  */
typedef enum
{
    GPIO_PIN_0_N = 0U,  /*!< GPIO pin 0 */
    GPIO_PIN_1_N,       /*!< GPIO pin 1 */
    GPIO_PIN_2_N,       /*!< GPIO pin 2 */
    GPIO_PIN_3_N,       /*!< GPIO pin 2 */
    GPIO_PIN_4_N,       /*!< GPIO pin 2 */
    GPIO_PIN_5_N,       /*!< GPIO pin 2 */
    GPIO_PIN_6_N,       /*!< GPIO pin 2 */
    GPIO_PIN_7_N,       /*!< GPIO pin 2 */
    GPIO_PIN_8_N,       /*!< GPIO pin 2 */
    GPIO_PIN_9_N,       /*!< GPIO pin 2 */
    GPIO_PIN_10_N,      /*!< GPIO pin 2 */
    GPIO_PIN_11_N,      /*!< GPIO pin 2 */
    GPIO_PIN_12_N,      /*!< GPIO pin 2 */
    GPIO_PIN_13_N,      /*!< GPIO pin 2 */
    GPIO_PIN_14_N,      /*!< GPIO pin 2 */
    GPIO_PIN_15_N       /*!< GPIO pin 2 */
} GPIO_Pin_N;

/**
  * @brief   Enum for GPIO Modes
  */
typedef enum
{
    GPIO_Mode_Input_N = 0U,             /*!< GPIO Input Mode */
    GPIO_Mode_General_Purpose_Output_N, /*!< GPIO General Purpose Output Mode */
    GPIO_Mode_Alternate_Function_N,     /*!< GPIO Alternate Function Mode */
    GPIO_Mode_Analog_N                  /*!< GPIO Analog Mode */
} GPIO_Mode_N;

/**
  * @brief   Enum for GPIO Pull configurations
  */
typedef enum
{
    GPIO_No_Pull_N = 0U,   /*!< GPIO No Pull */
    GPIO_Pull_Up_N,        /*!< GPIO Pull Up */
    GPIO_Pull_Down_N,      /*!< GPIO Pull Down */
    GPIO_Pull_Reserved_N   /*!< GPIO Reserved Pull */
} GPIO_Pull_N;

/**
  * @brief   Enum for GPIO Speed settings
  */
typedef enum
{
    GPIO_Speed_Low_N = 0U,    /*!< GPIO Speed Low */
    GPIO_Speed_Medium_N,      /*!< GPIO Speed Medium */
    GPIO_Speed_High_N,        /*!< GPIO Speed High */
    GPIO_Speed_VeryHigh_N     /*!< GPIO Speed Very High */
} GPIO_Speed_N;

/**
  * @brief   Enum for GPIO Alternate Functions
  */
typedef enum
{
    GPIO_AF0_N = 0U,  /*!< GPIO Alternate Function 0 */
    GPIO_AF1_N,       /*!< GPIO Alternate Function 1 */
    GPIO_AF2_N,       /*!< GPIO Alternate Function 2 */
    GPIO_AF3_N,       /*!< GPIO Alternate Function 3 */
    GPIO_AF4_N,       /*!< GPIO Alternate Function 4 */
    GPIO_AF5_N,       /*!< GPIO Alternate Function 5 */
    GPIO_AF6_N,       /*!< GPIO Alternate Function 6 */
    GPIO_AF7_N,       /*!< GPIO Alternate Function 7 */
    GPIO_AF8_N,       /*!< GPIO Alternate Function 8 */
    GPIO_AF9_N,       /*!< GPIO Alternate Function 9 */
    GPIO_AF10_N,      /*!< GPIO Alternate Function 10 */
    GPIO_AF11_N,      /*!< GPIO Alternate Function 11 */
    GPIO_AF12_N,      /*!< GPIO Alternate Function 12 */
    GPIO_AF13_N,      /*!< GPIO Alternate Function 13 */
    GPIO_AF14_N,      /*!< GPIO Alternate Function 14 */
    GPIO_AF15_N       /*!< GPIO Alternate Function 15 */
} GPIO_AlternateFunction_N;

/**
  * @brief   Enum for GPIO Output Types
  */
typedef enum
{
    GPIO_Output_PushPull_N = 0U,   /*!< GPIO Push-Pull Output Type */
    GPIO_Output_OpenDrain_N        /*!< GPIO Open-Drain Output Type */
} GPIO_OutputType_N;

/**
  * @brief   Enum for GPIO Lock Key settings
  */
typedef enum
{
    GPIO_LockKey_NotActive_N = 0U,    /*!< GPIO Lock Key Not Active */
    GPIO_LockKey_Active_N             /*!< GPIO Lock Key Active */
} GPIO_LockKey_N;

/**
  * @brief   Enum for GPIO Lock settings
  */
typedef enum
{
    GPIO_NoLocked_N = 0U,    /*!< GPIO No Lock */
    GPIO_Locked_N            /*!< GPIO Locked */
} GPIO_Lock_N;

extern ReturnType GPIO_Mode_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_Mode_N mode);
extern ReturnType GPIO_OutputType_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_OutputType_N outputtype);
extern ReturnType GPIO_Pull_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_Pull_N pull);
extern ReturnType GPIO_Alternate_Function_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin, GPIO_AlternateFunction_N AFx);
extern boolean    GPIO_OutputData_Get(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin);
extern ReturnType GPIO_OutputData_Set(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin);
extern ReturnType GPIO_OutputData_Reset(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin);
extern ReturnType GPIO_OutputData_Toggle(GPIO_TypeDef *GPIOx, GPIO_Pin_N pin);

#endif