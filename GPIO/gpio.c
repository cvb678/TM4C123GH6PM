#include "gpio_hal.h"
#include "../SYSCTL/sysctl_hal.h"

void gpio_port_init(gpio_port_s* self)
{
    volatile unsigned long delay;
    // activate clock for Port A
    sysctl_enable_port_E_clock();
    // allow time for clock to start
    sysctl_wait_for_port_E_clock();
    // no need to unlock GPIO Port A
    // TODO: logic for different ports
}

void gpio_configure_pins(gpio_port_s* self, gpio_pin_config* pin_config)
{
    gpio_port_t port_num = self->port_num;
    uint8_t pins_mask = pin_config->pins;

    gpio_analog_mode_set(port_num, pins_mask, pin_config->analog_function);
    gpio_port_control_set(port_num, self->port_control_mask);
    gpio_direction_set(port_num, pins_mask, pin_config->direction);
    gpio_alternate_function_set(port_num, pins_mask, pin_config->alternate_control);
    gpio_digital_enable_set(port_num, pins_mask, pin_config->digital_enable);
}

uint8_t gpio_data_read_pins(gpio_port_s* self, gpio_pin_config* pin_config)
{
    return gpio_data_read(self->port_num) & pin_config->pins;
}

void gpio_data_write_pins(gpio_port_s* self, gpio_pin_config* pin_config, uint8_t data)
{
    gpio_data_write(self->port_num, pin_config->pins, data);
}
