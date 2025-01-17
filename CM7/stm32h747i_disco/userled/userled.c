#include "userled.h"

#ifdef USERLED_1_USED
LED_TypeDef userled_1 = {USERLED_Port, USERLED_1_PIN};
#endif

#ifdef USERLED_2_USED
LED_TypeDef userled_2 = {USERLED_Port, USERLED_2_PIN};
#endif

#ifdef USERLED_3_USED
LED_TypeDef userled_3 = {USERLED_Port, USERLED_3_PIN};
#endif

#ifdef USERLED_4_USED
LED_TypeDef userled_4 = {USERLED_Port, USERLED_4_PIN};
#endif