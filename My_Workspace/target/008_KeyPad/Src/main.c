#include <stdint.h>
#include "main.h"
#include <stdio.h>

RCC_AHB1ENR_t volatile *const pgpiod_en = (RCC_AHB1ENR_t*) 0x40023830;
GPIOX_MODE_t volatile *const  pgpiod_mod  =  (GPIOX_MODE_t*) 0x40020C00;
GPIOX_ODR_t volatile *const   pgpiod_o = (GPIOX_ODR_t*) 0x40020C14;
GPIOX_IDR_t volatile *const   pgpiod_i  = (GPIOX_IDR_t*) 0x40020C10;
GPIOX_PUPDR_t volatile *const pgpiod_pup = (GPIOX_PUPDR_t*) 0x40020C0C;

void delay(void){
	for(uint32_t i= 0; i<300000; i++){

	}

}
int main(){

	pgpiod_en->gpiod_en = 1;
	pgpiod_mod-> gpio_11 = 0;
	pgpiod_mod-> gpio_10 = 0;
	pgpiod_mod -> gpio_9 = 0;
	pgpiod_mod -> gpio_8 = 0;


	pgpiod_mod -> gpio_3 = 1;
	pgpiod_mod -> gpio_2 = 1;
	pgpiod_mod -> gpio_1 = 1;
	pgpiod_mod -> gpio_0 = 1;

	pgpiod_pup -> gpio_11 = 1;
	pgpiod_pup -> gpio_10 = 1;
	pgpiod_pup -> gpio_9 = 1;
	pgpiod_pup -> gpio_8 = 1;


while(1){
	pgpiod_o-> gpio_0 = 1;
	pgpiod_o-> gpio_1 = 1;
	pgpiod_o-> gpio_2 = 1;
	pgpiod_o-> gpio_3 = 1;

	pgpiod_o-> gpio_0 = 0;

	if((pgpiod_i->gpio_8)==0){
		delay();
		printf("1\n");

	}
	if((pgpiod_i->gpio_9)==0){
		delay();
		printf("2\n");
	}
	if((pgpiod_i->gpio_10)==0){
		delay();
		printf("3\n");
	}
	if((pgpiod_i->gpio_11)==0){
		delay();
		printf("A\n");
	}
	pgpiod_o-> gpio_0 = 1;
	pgpiod_o-> gpio_1 = 1;
	pgpiod_o-> gpio_2 = 1 ;
	pgpiod_o-> gpio_3 = 1;

	pgpiod_o-> gpio_1 = 0;

	if(pgpiod_i->gpio_8==0){
		delay();
		printf("4\n");

	}
	if(pgpiod_i->gpio_9==0){
		delay();
		printf("5\n");
	}
	if(pgpiod_i->gpio_10==0){
		delay();
		printf("6\n");
	}
	if(pgpiod_i->gpio_11==0){
		delay();
		printf("B\n");
	}
	pgpiod_o-> gpio_0 = 1;
	pgpiod_o-> gpio_1 = 1;
	pgpiod_o-> gpio_2 = 1 ;
	pgpiod_o-> gpio_3 = 1;

	pgpiod_o-> gpio_2 = 0;

	if(pgpiod_i->gpio_8==0){
		delay();
		printf("7\n");
	}
	if(pgpiod_i->gpio_9==0){
		delay();
		printf("8\n");
	}
	if(pgpiod_i->gpio_10==0){
		delay();
		printf("9\n");
	}
	if(pgpiod_i->gpio_11==0){
		delay();
		printf("C\n");
	}
	pgpiod_o-> gpio_0 = 1;
	pgpiod_o-> gpio_1 = 1;
	pgpiod_o-> gpio_2 = 1 ;
	pgpiod_o-> gpio_3 = 1;

	pgpiod_o-> gpio_3 = 0;

	if(pgpiod_i->gpio_8==0){
		delay();
		printf("*\n");
	}
	if(pgpiod_i->gpio_9==0){
		delay();
		printf("0\n");
	}
	if(pgpiod_i->gpio_10==0){
		delay();
		printf("#\n");
	}
	if(pgpiod_i->gpio_11==0){
		delay();
		printf("D\n");
	}
}//while end


}



