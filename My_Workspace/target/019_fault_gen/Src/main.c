/**
 ******************************************************************************
 * @file           : main.c
 * @author         : Auto-generated by STM32CubeIDE
 * @brief          : Main program body
 ******************************************************************************
 * @attention
 *
 * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
 * All rights reserved.</center></h2>
 *
 * This software component is licensed by ST under BSD 3-Clause license,
 * the "License"; You may not use this file except in compliance with the
 * License. You may obtain a copy of the License at:
 *                        opensource.org/licenses/BSD-3-Clause
 *
 ******************************************************************************
 */

#include <stdint.h>
#include <stdio.h>

#if !defined(__SOFT_FP__) && defined(__ARM_FP)
  #warning "FPU is not initialized, but the project is compiling for an FPU. Please initialize the FPU before use."
#endif

int main(void)
{
  //1.enable all configurable exceptions

	uint32_t *pSHCRS = (uint32_t*) 0xE000ED24;

	*pSHCRS |= (1<<16); //mem manage
	*pSHCRS |= (1<<17);	//bus fault
	*pSHCRS |= (1<<18); //usage fault

// 3. force the processor to execute some undefined instruction

	uint32_t *pSram = 0x20010000;
	*pSram = 0xFFFFFFFF;

	void(*some_address) (void);

	some_address = (void*)0x20010001;

	some_address();
}



__attribute__((naked)) void UsageFault_Handler(void){

	__asm volatile("MRS R0, MSP");
	__asm volatile("B UsageFault_Handler_c");

}

//2.implement the fault handlers

void HardFault_Handler(void){
	printf("Hard fault\n");
	while(1);
}
void MemManage_Handler(void){

	printf("Mem Manage Fault\n");
	while(1);
}

void BusFault_Handler(void){

	printf("Bus Fault \n");
	while(1);
}

void UsageFault_Handler_c(uint32_t *pBaseStackFrame){


	uint32_t *pUFSR = 0xE000ED2A;
	printf("UFSR = %lx\n", (*pUFSR & 0xFFFF));
	printf("MSP = %p", pBaseStackFrame);
	printf("Usage fault \n");
	while(1);
}
