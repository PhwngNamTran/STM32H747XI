#include "userled.h"

#ifdef USERLED_1_USED
LED_TypeDef userled_1 = {userled_PORT, userled_1_PIN};
#endif

#ifdef USERLED_2_USED
LED_TypeDef userled_2 = {userled_PORT, userled_2_PIN};
#endif

#ifdef USERLED_3_USED
LED_TypeDef userled_3 = {userled_PORT, userled_3_PIN};
#endif

#ifdef USERLED_4_USED
LED_TypeDef userled_4 = {userled_PORT, userled_4_PIN};
#endif