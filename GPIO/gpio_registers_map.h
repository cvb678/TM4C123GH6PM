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
#define GPIOPCellID2_REG_OFFSET  0xFFC //PrimeCell Identification 0
