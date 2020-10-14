#include "../GPIO/gpio_hal.h"

int main (void)
{
    gpio_port_s portA;
    portA.port_num = GPIO_PORT_A;
    portA.pins_used_mask = 0x20; //pin 5
    portA.port_control_mask = 0x00F00000; //
    portA.port_control = GPIO_PORT_CONTROL_SET;
    portA.pins_analog_function = GPIO_ANALOG_MODE_DISABLED;
    portA.pins_direction = GPIO_DIR_INPUT;
    portA.pins_alternate_control = GPIO_REGISTER_CTRL;
    portA.pins_digital_enable = GPIO_DIGITAL_ENABLE;

    gpio_port_init(&portA);
    while(1)
    {
        /**/
    }

}