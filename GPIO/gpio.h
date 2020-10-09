typedef enum gpio_port_t_
{
    GPIO_PORT_A = 0,
    GPIO_PORT_B = 1,
    GPIO_PORT_C = 2,
    GPIO_PORT_D = 3,
    GPIO_PORT_E = 4,
    GPIO_PORT_F = 5
} gpio_port_t;

typedef enum gpio_direction_t_
{
    GPIO_DIR_INPUT = 0,
    GPIO_DIR_OUTPUT = 0xFF
} gpio_direction_t;

typedef enum gpio_int_sense_t_
{
    GPIO_INT_SENSE_EDGE = 0,
    GPIO_INT_SENSE_LEVEL = 0xFF
} gpio_int_sense_t;

typedef enum gpio_int_both_edges_t_
{
    GPIO_IEV_CONTROLLED = 0,
    GPIO_BOTH_EDGES = 0xFF
} gpio_int_both_edges_t;

typedef enum gpio_afsel_t_
{
    GPIO_REGISTER_CTRL = 0,
    GPIO_ALTERNATE_HW_CTRL = 0xFF
} gpio_afsel_t;

typedef enum gpio_den_t_
{
    GPIO_DIGITAL_DISABLE = 0,
    GPIO_DIGITAL_ENABLE = 0xFF
} gpio_den_t;

typedef enum gpio_amsel_t_
{
    GPIO_ANALOG_MODE_DISABLED = 0,
    GPIO_ANALOG_MODE_ENABLED = 0xFF
} gpio_amsel_t;

typedef enum gpio_port_control_t_
{
    GPIO_PORT_CONTROL_DISABLE = 0,
    GPIO_PORT_CONTROL_SET = 0xFFFFFFFF
} gpio_port_control_t;