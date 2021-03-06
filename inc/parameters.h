#ifndef PARAMETERS_H
#define PARAMETERS_H

#include "includes.h"

#define TELLER_TIME_LOW 30
#define TELLER_TIME_HIGH (TIME_MINUTE * 6)

#define CUSTOMER_SPAWN_LOW TIME_MINUTE
#define CUSTOMER_SPAWN_HIGH (TIME_MINUTE * 4)

#define NUM_TELLERS 3

#define BREAK_DELAY_LOW (30 * TIME_MINUTE)
#define BREAK_DELAY_HIGH (60 * TIME_MINUTE)
#define BREAK_TIME_LOW (TIME_MINUTE)
#define BREAK_TIME_HIGH (TIME_MINUTE * 4)

#endif
