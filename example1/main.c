#include "../GPIO/gpio_hal.h"

int main (void)
{
    gpio_port_s portA;
    gpio_pin_config portA_pins_cfg;
    portA.port_num = GPIO_PORT_A;
    portA.pins_used_mask = PIN5;
    portA.port_control_mask = 0x00F00000;
    portA.port_control = GPIO_PORT_CONTROL_SET;
    portA_pins.analog_function = GPIO_ANALOG_MODE_DISABLED;
    portA_pins.direction = GPIO_DIR_INPUT;
    portA_pins.alternate_control = GPIO_REGISTER_CTRL;
    portA_pins.digital_enable = GPIO_DIGITAL_ENABLE;

    gpio_port_init(&portA, &portA_pins_cfg);
    gpio_configure_pins(&portA);

    while(1)
    {
        /**/
    }

}