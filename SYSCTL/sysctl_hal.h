#include "sysctl_registers_map.h"
#include "sysctl.h"

static inline void
sysctl_enable_port_a_clock()
{
    SYSCTL_RCGCGPIO_T* reg;
    reg = SYSCTL_RCGCGPIO_REG;
    reg->bits.portA = CLOCK_ENABLED;
}

static inline void
sysctl_wait_for_port_A_clock()
{
    SYSCTL_RCGCGPIO_T* reg;
    reg = SYSCTL_RCGCGPIO_REG;
    while (CLOCK_ENABLED != reg->bits.portA)
    {
        
    }
}