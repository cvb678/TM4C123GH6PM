#include "helpers.h"

typedef union GPIODATA_REG_
{
    uint32_t full;
    struct bits_
    {
        uint32_t data : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODATA_REG;
assert(sizeof(GPIORIS_REG) == sizeof(uint32_t));

typedef union GPIODIR_REG_
{
    uint32_t full;
    struct bits_
    {
        uint32_t dir : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODIR_REG;
assert(sizeof(GPIORIS_REG) == sizeof(uint32_t));

typedef union GPIOIEV_REG_
{
    uint32_t full;
    struct bits_
    {
        uint32_t iev : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOIEV_REG;
assert(sizeof(GPIORIS_REG) == sizeof(uint32_t));

typedef union GPIOIM_REG_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ime : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOIM_REG;
assert(sizeof(GPIORIS_REG) == sizeof(uint32_t));

typedef union GPIORIS_REG_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ris : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIORIS_REG;
assert(sizeof(GPIORIS_REG) == sizeof(uint32_t));