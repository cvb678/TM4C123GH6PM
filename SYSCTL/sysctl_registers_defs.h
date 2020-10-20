#include "../common/helpers.h"

typedef union SYSCTL_RCGCGPIO_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t portA : 1;
        uint32_t portB : 1;
        uint32_t portC : 1;
        uint32_t portD : 1;
        uint32_t portE : 1;
        uint32_t portF : 1;
        uint32_t rsvd : 26;
    } bits;
} SYSCTL_RCGCGPIO_T;
//assert(sizeof(SYSCTL_RCGCGPIO_T) != sizeof(uint32_t));
