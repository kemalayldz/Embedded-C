

#include <stdint.h>
#include "main.h"



RCC_AHB1ENR_t volatile *const gpiod_en = ADDR_AHB1ENR_REG;
GPIOX_MODE_t  volatile *const gpio12   = ADDR_GPIOMODE_REG;
GPIOX_ODR_t   volatile *const gpio12_o = ADDR_GPIOODR_REG;




int main(void)
{
	gpiod_en->gpiod_en = CLOCK_ENABLE;
	gpio12-> gpio_12  = MODE_CONF_OUTPUT ;

	while(1){
	gpio12_o->gpio_12 = STATE_HIGH ;

	for(uint32_t i=0; i<=DELAY_COUNT; i++);
		gpio12_o->gpio_12 = STATE_LOW;
	for(uint32_t i=0; i<=DELAY_COUNT; i++);
		gpio12_o->gpio_12 = STATE_HIGH;

	}
}
