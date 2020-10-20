#include "../GPIO/gpio_hal.h"

void delayms(unsigned long ms);

int main (void)
{
    gpio_port_s portE;
    portE.port_num = GPIO_PORT_E;
    portE.port_control_mask = 0x00F00FFF;
    portE.port_control = GPIO_PORT_CONTROL_SET;

    gpio_pin_config portE_arm_cfg;
    portE_switch_cfg.pins = PIN2;
    portE_switch_cfg.analog_function = GPIO_ANALOG_MODE_DISABLED;
    portE_switch_cfg.direction = GPIO_DIR_INPUT;
    portE_switch_cfg.alternate_control = GPIO_REGISTER_CTRL;
    portE_switch_cfg.digital_enable = GPIO_DIGITAL_ENABLE;

    gpio_pin_config portE_sensor_cfg;
    portE_switch_cfg.pins = PIN0 | PIN1;
    portE_switch_cfg.analog_function = GPIO_ANALOG_MODE_DISABLED;
    portE_switch_cfg.direction = GPIO_DIR_INPUT;
    portE_switch_cfg.alternate_control = GPIO_REGISTER_CTRL;
    portE_switch_cfg.digital_enable = GPIO_DIGITAL_ENABLE;

    gpio_pin_config portE_LED_cfg;
    portE_LED_cfg.pins = PIN4;
    portE_LED_cfg.analog_function = GPIO_ANALOG_MODE_DISABLED;
    portE_LED_cfg.direction = GPIO_DIR_OUTPUT;
    portE_LED_cfg.alternate_control = GPIO_REGISTER_CTRL;
    portE_LED_cfg.digital_enable = GPIO_DIGITAL_ENABLE;

    gpio_port_init(&portE); 
    gpio_configure_pins(&portE, &portE_arm_cfg);
    gpio_configure_pins(&portE, &portE_sensor_cfg);
    gpio_configure_pins(&portE, &portE_LED_cfg);

    /**
     * When arm switch is toggled alarm is armed / disabled
     * Once alarm is armed two switches imitate sensors - if one of them is toggled it means break in
     */

    uint8_t arm, sensor, alarm;
    alarm = 0;
    while(1)
    {
        arm = gpio_data_read_pins(&portE, &portE_arm_cfg); // arm 0 if deactivated, 1 if activated
        sensor = gpio_data_read_pins(&portE, &portE_sensor_cfg); // 0 means ok, 1 means break in
        
        if(arm && sensor)
        {
            gpio_data_write_pins(&portE, &portE_LED_CFG, alarm ^= alarm); // toggle output for alarm
            delayms(100);  // 100ms delay makes a 5Hz period
        }
        else
        {
            gpio_data_write_pins(&portE, &portE_LED_CFG, 0); // toggle output for alarm;   // LED off if deactivated
        }
    }

}

void delayms(unsigned long ms)
{
    unsigned long count;
    while(ms > 0 ) 
    { // repeat while still ms to delay
        count = 4000000;
        while (count > 0)
        {
            count--;
        } // This while loop takes approximately 3 cycles
        ms--;
    }
}