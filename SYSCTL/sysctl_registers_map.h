#include "sysctl_registers_defs.h"

#define SYSCTL_REGISTERS_BASE 0x400FE000

#define SYSCTL_RCGCGPIO_OFFSET 0x608

#define SYSCTL_RCGCGPIO_REG ((SYSCTL_RCGCGPIO_T*) (SYSCTL_REGISTERS_BASE + SYSCTL_RCGCGPIO_OFFSET))
