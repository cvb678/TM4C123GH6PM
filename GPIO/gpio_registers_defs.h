#include "../common/helpers.h"
#include "assert.h"

typedef union GPIODATA_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t data : 8; //RW
        uint32_t rsvd : 24;
    } bits;
} GPIODATA_REG_T;
assert(sizeof(GPIODATA_REG_T) != sizeof(uint32_t));

typedef union GPIODIR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t dir : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODIR_REG_T;
assert(sizeof(GPIODIR_REG_T) != sizeof(uint32_t));

typedef union GPIOIS_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t is : 8; //0: edge 1: level
        uint32_t rsvd : 24;
    } bits;
} GPIOIS_REG_T;
assert(sizeof(GPIOIS_REG_T) != sizeof(uint32_t));

typedef union GPIOIBE_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ibe : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOIBE_REG_T;
assert(sizeof(GPIOIBE_REG_T) != sizeof(uint32_t));

typedef union GPIOIEV_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t iev : 8; //0: falling edge/low level 1: rising edge/high level
        uint32_t rsvd : 24;
    } bits;
} GPIOIEV_REG_T;
assert(sizeof(GPIOIEV_REG_T) != sizeof(uint32_t));

typedef union GPIOIM_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ime : 8; //0: interrupt from corresponding pin is masked
        uint32_t rsvd : 24;
    } bits;
} GPIOIM_REG_T;
assert(sizeof(GPIOIM_REG_T) != sizeof(uint32_t));

typedef union GPIORIS_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ris : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIORIS_REG_T;
assert(sizeof(GPIORIS_REG_T) != sizeof(uint32_t));

typedef union GPIOMIS_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t mis : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOMIS_REG_T;
assert(sizeof(GPIOMIS_REG_T) != sizeof(uint32_t));

typedef union GPIOICR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t w1c : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOICR_REG_T;
assert(sizeof(GPIOICR_REG_T) != sizeof(uint32_t));

typedef union GPIOAFSEL_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t afsel : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOAFSEL_REG_T;
assert(sizeof(GPIOAFSEL_REG_T) != sizeof(uint32_t));

typedef union GPIODR2R_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t drv2 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODR2R_REG_T;
assert(sizeof(GPIODR2R_REG_T) != sizeof(uint32_t));

typedef union GPIODR4R_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t drv4 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODR4R_REG_T;
assert(sizeof(GPIODR4R_REG_T) != sizeof(uint32_t));

typedef union GPIODR8R_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t drv8 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODR8R_REG_T;
assert(sizeof(GPIODR8R_REG_T) != sizeof(uint32_t));


typedef union GPIOODR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t ode : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOODR_REG_T;
assert(sizeof(GPIOODR_REG_T) != sizeof(uint32_t));

typedef union GPIOPUR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pue : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPUR_REG_T;
assert(sizeof(GPIOPUR_REG_T) != sizeof(uint32_t));

typedef union GPIOPDR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pde : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPDR_REG_T;
assert(sizeof(GPIOPDR_REG_T) != sizeof(uint32_t));

typedef union GPIOSLR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t srl : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOSLR_REG_T;
assert(sizeof(GPIOSLR_REG_T) != sizeof(uint32_t));

typedef union GPIODEN_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t den : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODEN_REG_T;
assert(sizeof(GPIODEN_REG_T) != sizeof(uint32_t));

typedef union GPIOLOCK_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t lock : 32;
    } bits;
} GPIOLOCK_REG_T;
assert(sizeof(GPIOLOCK_REG_T) != sizeof(uint32_t));

typedef union GPIOCR_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t cr : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOCR_REG_T;
assert(sizeof(GPIOCR_REG_T) != sizeof(uint32_t));

typedef union GPIOAMSEL_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t amsel : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOAMSEL_REG_T;
assert(sizeof(GPIOAMSEL_REG_T) != sizeof(uint32_t));

typedef union GPIOPCTL_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pmc0 : 4;
        uint32_t pmc1 : 4;
        uint32_t pmc2 : 4;
        uint32_t pmc3 : 4;
        uint32_t pmc4 : 4;
        uint32_t pmc5 : 4;
        uint32_t pmc6 : 4;
        uint32_t pmc7 : 4;
    } bits;
} GPIOPCTL_REG_T;
assert(sizeof(GPIOPCTL_REG_T) != sizeof(uint32_t));

typedef union GPIOADCCTL_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t adcen : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOADCCTL_REG_T;
assert(sizeof(GPIOADCCTL_REG_T) != sizeof(uint32_t));

typedef union GPIODMACTL_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t dmaen : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIODMACTL_REG_T;
assert(sizeof(GPIODMACTL_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID4_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid4 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID4_REG_T;
assert(sizeof(GPIOPeriphID4_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID5_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid5 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID5_REG_T;
assert(sizeof(GPIOPeriphID5_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID6_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid6 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID6_REG_T;
assert(sizeof(GPIOPeriphID6_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID7_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid7 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID7_REG_T;
assert(sizeof(GPIOPeriphID7_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID0_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid0 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID0_REG_T;
assert(sizeof(GPIOPeriphID0_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID1_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid1 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID1_REG_T;
assert(sizeof(GPIOPeriphID1_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID2_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid2 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID2_REG_T;
assert(sizeof(GPIOPeriphID2_REG_T) != sizeof(uint32_t));

typedef union GPIOPeriphID3_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t pid3 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPeriphID3_REG_T;
assert(sizeof(GPIOPeriphID3_REG_T) != sizeof(uint32_t));

typedef union GPIOPCellID0_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t cid0 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPCellID0_REG_T_;
assert(sizeof(GPIOPCellID0_REG_T_) != sizeof(uint32_t));

typedef union GPIOPCellID1_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t cid1 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPCellID1_REG_T_;
assert(sizeof(GPIOPCellID1_REG_T_) != sizeof(uint32_t));

typedef union GPIOPCellID2_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t cid2 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPCellID2_REG_T_;
assert(sizeof(GPIOPCellID2_REG_T_) != sizeof(uint32_t));

typedef union GPIOPCellID3_REG_T_
{
    uint32_t full;
    struct bits_
    {
        uint32_t cid3 : 8;
        uint32_t rsvd : 24;
    } bits;
} GPIOPCellID3_REG_T_;
assert(sizeof(GPIOPCellID3_REG_T_) != sizeof(uint32_t));
