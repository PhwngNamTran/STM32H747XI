#include "rcc.h"
#include "miscellaneous.h"
#include "stm32h747xx.h"

void RCC_GPIO_Clock_Enable(GPIO_TypeDef *GPIOx)
{
    if (GPIOx == GPIOA)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOAEN); /*!< Enable clock for GPIOA */
    }
    else if (GPIOx == GPIOB)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOBEN); /*!< Enable clock for GPIOB */
    }
    else if (GPIOx == GPIOC)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOCEN); /*!< Enable clock for GPIOC */
    }
    else if (GPIOx == GPIOD)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIODEN); /*!< Enable clock for GPIOD */
    }
    else if (GPIOx == GPIOE)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOEEN); /*!< Enable clock for GPIOE */
    }
    else if (GPIOx == GPIOF)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOFEN); /*!< Enable clock for GPIOF */
    }
    else if (GPIOx == GPIOG)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOGEN); /*!< Enable clock for GPIOG */
    }
    else if (GPIOx == GPIOH)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOHEN); /*!< Enable clock for GPIOH */
    }
    else if (GPIOx == GPIOI)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOIEN); /*!< Enable clock for GPIOI */
    }
    else if (GPIOx == GPIOJ)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOJEN); /*!< Enable clock for GPIOJ */
    }
    else if (GPIOx == GPIOK)
    {
        SET_BIT(RCC->AHB4ENR, RCC_AHB4ENR_GPIOKEN); /*!< Enable clock for GPIOK */
    }
    else
    {
        /* Invalid GPIO port, handle error if needed */
    }
}

