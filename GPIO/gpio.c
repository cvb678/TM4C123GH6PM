#include "gpio_hal.h"

#define SYSCTL_RCGC2_R (*((volatile unsigned long *)0x400FE108))

gpio_port_init(gpio_port_s* port_s)
{
    gpio_port_t port_num = port_s->port_num;
    uint8_t pins_mask = port_s->pins_used_mask;
    volatile unsigned long delay;

    SYSCTL_RCGC2_R |= 0x00000001;     // 1) activate clock for Port A
    delay = SYSCTL_RCGC2_R;           // allow time for clock to start
    // 2) no need to unlock GPIO Port A
    // 3) disable analog on PA5 - GPIO_PORTA_AMSEL_R &= ~0x20;
    gpio_analog_mode_set(port_num, pins_mask, port_s->pins_analog_function);
    // 4) PCTL GPIO on PA5 - GPIO_PORTA_PCTL_R &= ~0x00F00000;
    gpio_port_control_set(port_num, port_control_mask, port_s->port_control);
    // 5) direction PA5 input - GPIO_PORTA_DIR_R &= ~0x20;
    gpio_direction_set(port_num, pins_mask, port_s->pins_direction);
    // 6) PA5 regular port function - GPIO_PORTA_AFSEL_R &= ~0x20;
    gpio_alternate_function_set(port_num, pins_mask, port_s->pins_alternate_control);
    // 7) enable PA5 digital port - GPIO_PORTA_DEN_R |= 0x20;
    gpio_digital_enable_set(port_num, pins_mask, port_s->pins_digital_enable);
}