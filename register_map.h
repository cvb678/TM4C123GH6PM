typedef enum gpio_port_t_
{
    GPIO_PORT_A = 0,
    GPIO_PORT_B = 1,
    GPIO_PORT_C = 2,
    GPIO_PORT_D = 3,
    GPIO_PORT_E = 4,
    GPIO_PORT_F = 5
} gpio_port_t;

// addressing using APB (Advanced Peripheral Bus)
// legacy, backwards compatible
#define GPIO_PORT_BASE_AD_APB(x) (0x40004000 + 1000*x)
#define GPIO_PORT_BASE_E_APB(x)  (0x40024000)
#define GPIO_PORT_BASE_F_APB(x)  (0x40025000)
// addressing using AHB (Advanced High-Performance Bus)
#define GPIO_PORT_BASE_AF_AHB(x) (0x40058000 + 1000*x)

// generic GPIO registers
#define GPIODATA_REG_OFFSET     0x000 //data read/write
#define GPIODIR_REG_OFFSET      0x400 //direction
#define GPIOIEV_REG_OFFSET      0x40C //interrupt event
#define GPIOIM_REG_OFFSET       0x410 //interrupt mask
#define GPIORIS_REG_OFFSET      0x414 //raw interrupt status
#define GPIOICR_REG_OFFSET      0x41C //interrupt clear
#define GPIOAFSEL_REG_OFFSET    0x420 //alternate function select
#define GPIODEN_REG_OFFSET      0x51C //digital enable
#define GPIOLOCK_REG_OFFSET     0x520 //lock
#define GPIOAMSEL_REG_OFFSET    0x528 //analog mode select
#define GPIOPCTL_REG_OFFSET     0x52C //port control
#define GPIOADCCTL_REG_OFFSET   0x530 //ADC control
#define GPIODMACTL_REG_OFFSET   0x534 //dma control
