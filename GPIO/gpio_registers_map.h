#include "gpio_registers_defs.h"

// addressing using APB (Advanced Peripheral Bus)
// legacy, backwards compatible
#define GPIO_PORT_BASE_AD_APB(x) (0x40004000 + 1000*x)
#define GPIO_PORT_BASE_E_APB(x)  (0x40024000)
#define GPIO_PORT_BASE_F_APB(x)  (0x40025000)
// addressing using AHB (Advanced High-Performance Bus)
#define GPIO_PORT_BASE_AF_AHB(x) (0x40058000 + 1000*x)

// generic GPIO registers
#define GPIODATA_REG_OFFSET      0x000 //Data Read/Write
#define GPIODIR_REG_OFFSET       0x400 //Direction
#define GPIOIS_REG_OFFSET        0x404 //Interrupt Sense
#define GPIOIBE_REG_OFFSET       0x408 //Interrupt Both Edges
#define GPIOIEV_REG_OFFSET       0x40C //Interrupt Event
#define GPIOIM_REG_OFFSET        0x410 //Interrupt Mask
#define GPIORIS_REG_OFFSET       0x414 //Raw Interrupt Status
#define GPIOMIS_REG_OFFSET       0x418 //Masked Interrupt Status
#define GPIOICR_REG_OFFSET       0x41C //Interrupt Clear
#define GPIOAFSEL_REG_OFFSET     0x420 //Alternate Function Select
#define GPIODR2R_REG_OFFSET      0x500 //2 mA Drive Select
#define GPIODR4R_REG_OFFSET      0x504 //4 mA Drive Select
#define GPIODR8R_REG_OFFSET      0x508 //8 mA Drive Select
#define GPIOODR_REG_OFFSET       0x50C //Open Drain Select
#define GPIOPUR_REG_OFFSET       0x510 //Pull-Up Select
#define GPIOPDR_REG_OFFSET       0x514 //Pull-Down Select
#define GPIOSLR_REG_OFFSET       0x518 //Slew Rate Comtrol Select
#define GPIODEN_REG_OFFSET       0x51C //Digital Enable
#define GPIOLOCK_REG_OFFSET      0x520 //Lock
#define GPIOCR_REG_OFFSET        0x524 //Commit
#define GPIOAMSEL_REG_OFFSET     0x528 //Analog Mode Select
#define GPIOPCTL_REG_OFFSET      0x52C //Port Control
#define GPIOADCCTL_REG_OFFSET    0x530 //ADC control
#define GPIODMACTL_REG_OFFSET    0x534 //dma control
#define GPIOPeriphID4_REG_OFFSET 0xFD0 //Peripheral Identification 4
#define GPIOPeriphID5_REG_OFFSET 0xFD4 //Peripheral Identification 5
#define GPIOPeriphID6_REG_OFFSET 0xFD8 //Peripheral Identification 6
#define GPIOPeriphID7_REG_OFFSET 0xFDC //Peripheral Identification 7
#define GPIOPeriphID0_REG_OFFSET 0xFE0 //Peripheral Identification 0
#define GPIOPeriphID1_REG_OFFSET 0xFE4 //Peripheral Identification 1
#define GPIOPeriphID2_REG_OFFSET 0xFE8 //Peripheral Identification 2
#define GPIOPeriphID3_REG_OFFSET 0xFEC //Peripheral Identification 3
#define GPIOPCellID0_REG_OFFSET  0xFF0 //PrimeCell Identification 0
#define GPIOPCellID1_REG_OFFSET  0xFF4 //PrimeCell Identification 0
#define GPIOPCellID2_REG_OFFSET  0xFF8 //PrimeCell Identification 0
#define GPIOPCellID3_REG_OFFSET  0xFFC //PrimeCell Identification 0

#define GPIODATA_REG(x)          ((GPIODATA_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODATA_REG_OFFSET))
#define GPIODIR_REG(x)           ((GPIODIR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODIR_REG_OFFSET))
#define GPIOIS_REG(x)            ((GPIOIS_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOIS_REG_OFFSET))
#define GPIOIBE_REG(x)           ((GPIOIBE_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOIBE_REG_OFFSET))
#define GPIOIEV_REG(x)           ((GPIOIEV_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOIEV_REG_OFFSET))
#define GPIOIM_REG(x)            ((GPIOIM_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOIM_REG_OFFSET))
#define GPIORIS_REG(x)           ((GPIORIS_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIORIS_REG_OFFSET))
#define GPIOMIS_REG(x)           ((GPIOMIS_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOMIS_REG_OFFSET))
#define GPIOICR_REG(x)           ((GPIOICR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOICR_REG_OFFSET))
#define GPIOAFSEL_REG(x)         ((GPIOAFSEL_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOAFSEL_REG_OFFSET))
#define GPIODR2R_REG(x)          ((GPIODR2R_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODR2R_REG_OFFSET))
#define GPIODR4R_REG(x)          ((GPIODR4R_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODR4R_REG_OFFSET))
#define GPIODR8R_REG(x)          ((GPIODR8R_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODR8R_REG_OFFSET))
#define GPIOODR_REG(x)           ((GPIOODR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODR_REG_OFFSET))
#define GPIOPUR_REG(x)           ((GPIOPUR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPUR_REG_OFFSET))
#define GPIOPDR_REG(x)           ((GPIOPDR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPDR_REG_OFFSET))
#define GPIOSLR_REG(x)           ((GPIOSLR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOSLR_REG_OFFSET))
#define GPIODEN_REG(x)           ((GPIODEN_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODEN_REG_OFFSET))
#define GPIOLOCK_REG(x)          ((GPIOLOCK_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOLOCK_REG_OFFSET))
#define GPIOCR_REG(x)            ((GPIOCR_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOCR_REG_OFFSET))
#define GPIOAMSEL_REG(x)         ((GPIOAMSEL_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOAMSEL_REG_OFFSET))
#define GPIOPCTL_REG(x)          ((GPIOPCTL_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPCTL_REG_OFFSET))
#define GPIOADCCTL_REG(x)        ((GPIADCCTL_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOADCCTL_REG_OFFSET))
#define GPIODMACTL_REG(x)        ((GPIODMACTL_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIODMACTL_REG_OFFSET))
#define GPIOPeriphID4_REG(x)     ((GPIOPeriphID4_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID4_REG_OFFSET))
#define GPIOPeriphID5_REG(x)     ((GPIOPeriphID5_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID5_REG_OFFSET))
#define GPIOPeriphID6_REG(x)     ((GPIOPeriphID6_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID6_REG_OFFSET))
#define GPIOPeriphID7_REG(x)     ((GPIOPeriphID7_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID7_REG_OFFSET))
#define GPIOPeriphID0_REG(x)     ((GPIOPeriphID0_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID0_REG_OFFSET))
#define GPIOPeriphID1_REG(x)     ((GPIOPeriphID1_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID1_REG_OFFSET))
#define GPIOPeriphID2_REG(x)     ((GPIOPeriphID2_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID2_REG_OFFSET))
#define GPIOPeriphID3_REG(x)     ((GPIOPeriphID3_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPeriphID3_REG_OFFSET))
#define GPIOPCellID0_REG(x)      ((GPIOPCellhID0_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPCellID0_REG_OFFSET))
#define GPIOPCellID1_REG(x)      ((GPIOPCellhID1_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPCellID1_REG_OFFSET))
#define GPIOPCellID2_REG(x)      ((GPIOPCellhID2_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPCellID2_REG_OFFSET))
#define GPIOPCellID3_REG(x)      ((GPIOPCellhID3_REG_T*) (GPIO_PORT_BASE_AF_AHB(x) + GPIOPCellID3_REG_OFFSET))
