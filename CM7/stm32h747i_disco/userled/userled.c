#include "userled.h"

#ifdef LED_1_USED
LED_TypeDef LED_1 = {LED_Port, LED_1_PIN};
#endif

#ifdef LED_2_USED
LED_TypeDef LED_2 = {LED_Port, LED_1_PIN};
#endif

#ifdef LED_3_USED
LED_TypeDef LED_3 = {LED_Port, LED_1_PIN};
#endif

#ifdef LED_4_USED
LED_TypeDef LED_4 = {LED_Port, LED_1_PIN};
#endif