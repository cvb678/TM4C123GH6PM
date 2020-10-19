#include "gpio_registers_map.h"
#include "gpio.h"

static inline void
gpio_data_write(gpio_port_t port, uint8_t mask, uint8_t data)
{
    GPIODATA_REG_T* reg;
    reg = GPIODATA_REG(port);
    if (data)
        reg->bits.data |= mask;
    else
        reg->bits.data &= ~mask;
}

static inline uint8_t
gpio_data_read(gpio_port_t port)
{
    GPIODATA_REG_T* reg;
    reg = GPIODATA_REG(port);
    return reg->bits.data;
}

static inline void
gpio_direction_set(gpio_port_t port, uint8_t mask, gpio_direction_t dir)
{
    GPIODIR_REG_T* reg;
    reg = GPIODIR_REG(port);
    if (dir)
        reg->bits.dir |= mask;
    else
        reg->bits.dir &= ~mask;
}

static inline uint8_t
gpio_direction_get(gpio_port_t port)
{
    GPIODIR_REG_T* reg;
    reg = GPIODIR_REG(port);
    return reg->bits.dir;
}

static inline void
gpio_int_sense_set(gpio_port_t port, uint8_t mask, gpio_int_sense_t is)
{
    GPIOIS_REG_T* reg;
    reg = GPIOIS_REG(port);
    if (is)
        reg->bits.is |= mask;
    else
        reg->bits.is &= ~mask;
}

static inline uint8_t
gpio_int_sense_get(gpio_port_t port)
{
    GPIOIS_REG_T* reg;
    reg = GPIOIS_REG(port);
    return reg->bits.is;
}

static inline void
gpio_int_both_edges_set(gpio_port_t port, uint8_t mask, gpio_int_both_edges_t ibe)
{
    GPIOIBE_REG_T* reg;
    reg = GPIOIBE_REG(port);
    if (ibe)
        reg->bits.ibe |= mask;
    else
        reg->bits.ibe &= ~mask;
}

static inline uint8_t
gpio_int_both_edges_get(gpio_port_t port)
{
    GPIOIBE_REG_T* reg;
    reg = GPIOIBE_REG(port);
    return reg->bits.ibe;
}

static inline void
gpio_alternate_function_set(gpio_port_t port, uint8_t mask, gpio_afsel_t afsel)
{
    GPIOAFSEL_REG_T* reg;
    reg = GPIOAFSEL_REG(port);
    if (afsel)
        reg->bits.afsel |= mask;
    else
        reg->bits.afsel &= ~mask;
}

static inline uint8_t
gpio_alternate_function_get(gpio_port_t port)
{
    GPIOAFSEL_REG_T* reg;
    reg = GPIOAFSEL_REG(port);
    return reg->bits.afsel;
}

static inline void
gpio_digital_enable_set(gpio_port_t port, uint8_t mask, gpio_den_t den)
{
    GPIODEN_REG_T* reg;
    reg = GPIODEN_REG(port);
    if (den)
        reg->bits.den |= mask;
    else
        reg->bits.den &= ~mask;
}

static inline uint8_t
gpio_digital_enable_get(gpio_port_t port)
{
    GPIODEN_REG_T* reg;
    reg = GPIODEN_REG(port);
    return reg->bits.den;
}

static inline void
gpio_analog_mode_set(gpio_port_t port, uint8_t mask, gpio_amsel_t amsel)
{
    GPIOAMSEL_REG_T* reg;
    reg = GPIOAMSEL_REG(port);
    if (amsel)
        reg->bits.amsel |= mask;
    else
        reg->bits.amsel &= ~mask;
}

static inline uint8_t
gpio_analog_mode_get(gpio_port_t port)
{
    GPIOAMSEL_REG_T* reg;
    reg = GPIOAMSEL_REG(port);
    return reg->bits.amsel;
}

static inline void
gpio_port_control_set(gpio_port_t port, uint32_t mask, gpio_port_control_t pctl)
{
    GPIOPCTL_REG_T* reg;
    reg = GPIOPCTL_REG(port);
    reg->bits.full = pctl & mask;
}

static inline uint32_t
gpio_port_control_get(gpio_port_t port)
{
    GPIOPCTL_REG_T* reg;
    reg = GPIOPCTL_REG(port);
    return reg->bits.full;
}
