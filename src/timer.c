#ifndef TIMER_H
#include "timer.h"

/* It is a common interface for different realizations of u8CheckMsTimeout(). */
uint8_t u8MsTimeout(uint8_t f100Ms)
{
    uint8_t u8Retval = 0;

    if( u8CheckMsTimeout(f100Ms) )
    {
        u8Retval = 1;
    }
    return u8Retval;
}

#endif
