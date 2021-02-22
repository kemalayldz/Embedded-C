
#ifndef MAIN_H_
#define MAIN_H_

#include <stdint.h>


#define ADDR_AHB1ENR_REG ((RCC_AHB1ENR_t*) 0x40023830)
#define ADDR_GPIOMODE_REG ((GPIOX_MODE_t*) 0x40020C00)
#define ADDR_GPIOODR_REG (GPIOX_ODR_t*) 0x40020C14
#define CLOCK_ENABLE (1);
#define MODE_CONF_OUTPUT (1)
#define STATE_HIGH (1);
#define STATE_LOW (1);
#define DELAY_COUNT (50000UL);

typedef struct{
	uint32_t gpioa_en :1;
	uint32_t gpiob_en :1;
	uint32_t gpioc_en :1;
	uint32_t gpiod_en :1;
	uint32_t gpioe_en :1;
	uint32_t gpiof_en :1;
	uint32_t gpiog_en :1;
	uint32_t gpioh_en :1;
	uint32_t gpioi_en :1;
	uint32_t reserved :3;
	uint32_t crc_en   :1;
	uint32_t reserved_1  :5;
	uint32_t bkpsram_en  :1;
	uint32_t reserved_2 :1;
	uint32_t ccmdataram_en :1;
	uint32_t dma1_en :1;
	uint32_t dma2_en :1;
	uint32_t reserved_3 :2;
	uint32_t ethmac_en :1;
	uint32_t ethmactx_en :1;
	uint32_t ethmacrx_en :1;
	uint32_t ethmacptp_en :1;
	uint32_t otghs_en :1;
	uint32_t otghsulpi_en :1;
	uint32_t reserved_4 :1;

}RCC_AHB1ENR_t;


typedef struct{
	uint32_t gpio_0  :2;
	uint32_t gpio_1  :2;
	uint32_t gpio_2  :2;
	uint32_t gpio_3  :2;
	uint32_t gpio_4  :2;
	uint32_t gpio_5  :2;
	uint32_t gpio_6  :2;
	uint32_t gpio_7  :2;
	uint32_t gpio_8  :2;
	uint32_t gpio_9  :2;
	uint32_t gpio_10 :2;
	uint32_t gpio_11 :2;
	uint32_t gpio_12 :2;
	uint32_t gpio_13 :2;
	uint32_t gpio_14 :2;
	uint32_t gpio_15 :2;

}GPIOX_MODE_t;

typedef struct{
	uint32_t gpio_0    :1;
	uint32_t gpio_1    :1;
	uint32_t gpio_2    :1;
	uint32_t gpio_3    :1;
	uint32_t gpio_4    :1;
	uint32_t gpio_5    :1;
	uint32_t gpio_6    :1;
	uint32_t gpio_7    :1;
	uint32_t gpio_8    :1;
	uint32_t gpio_9    :1;
	uint32_t gpio_10   :1;
	uint32_t gpio_11   :1;
	uint32_t gpio_12   :1;
	uint32_t gpio_13   :1;
	uint32_t gpio_14   :1;
	uint32_t gpio_15   :1;
	uint32_t reserved :16;




}GPIOX_ODR_t;


#endif /* MAIN_H_ */
