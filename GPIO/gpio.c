#include "gpio_hal.h"
#include "../SYSCTL/sysctl_hal.h"

gpio_port_init(gpio_port_s* self)
{
    volatile unsigned long delay;
    // activate clock for Port A
    sysctl_enable_port_A_clock();
    // allow time for clock to start
    sysctl_wait_for_port_A_clock();
    // no need to unlock GPIO Port A
    // TODO: logic for different ports
}

gpio_configure_pins(gpio_port_s* self, gpio_pin_config* pin_config)
{
    gpio_port_t port_num = self->port_num;
    uint8_t pin_mask = self->pins_used_mask;

    gpio_analog_mode_set(port_num, pins_mask, pin_config->analog_function);
    gpio_port_control_set(port_num, port_control_mask, self->port_control);
    gpio_direction_set(port_num, pins_mask, pin_config->direction);
    gpio_alternate_function_set(port_num, pins_mask, pin_config->alternate_control);
    gpio_digital_enable_set(port_num, pins_mask, pin_config->digital_enable);
}

gpio_data_read_pins(gpio_port_s* self, gpio_pin_config* pin_config)
{
    return gpio_data_read(self->port_num) & pin_config->pins;
}

gpio_data_write_pins(gpio_port_s* self, gpio_pin_config* pin_config, uint8_t data)
{
    gpio_data_write(self->port_num, pin_config->pins, data);
}