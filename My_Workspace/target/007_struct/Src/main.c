

#include <stdint.h>
#include "main.h"



RCC_AHB1ENR_t volatile *const gpiod_en = (RCC_AHB1ENR_t*) 0x40023830;
GPIOX_MODE_t  volatile *const gpio12   = (GPIOX_MODE_t*) 0x40020C00;
GPIOX_ODR_t   volatile *const gpio12_o = (GPIOX_ODR_t*) 0x40020C14;




int main(void)
{
	gpiod_en->gpiod_en = 1;
	gpio12-> gpio_12  = 1 ;

	while(1){
	gpio12_o->gpio_12 = 1 ;

	for(uint32_t i=0; i<=50000; i++);
		gpio12_o->gpio_12 = 0;
	for(uint32_t i=0; i<=50000; i++);
		gpio12_o->gpio_12 = 1;

	}
}
