#pragma once

#include_next <halconf.h>

#undef HAL_USE_PWM
#define HAL_USE_PWM TRUE

#undef HAL_USE_SERIAL
#define HAL_USE_SERIAL TRUE
