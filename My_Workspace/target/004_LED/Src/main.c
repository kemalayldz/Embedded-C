

#include <stdint.h>
#include <stdio.h>



int main(void)
{
	uint32_t *pClkCtrlreg = (uint32_t*) 0x40023830;
	uint32_t *pPortDModereg = (uint32_t*) 0x40020C00;
	uint32_t *pPortDOutreg = (uint32_t*)  0x40020C14;

	/* Enable the clock for GPIOD (AHB1ENR)*/

	/* uint32_t temp = *pClkCtrlreg; // read operation
	temp = temp | 0x08;           //modify (setting the third bit of RCC_AHB1ENR clk control reg)
	*pClkCtrlreg = temp;          //write back */

	//Enable the clock for GPIOD peripheral AHB1ENR
	*pClkCtrlreg |= (1<<3); // one line code of above

	//Enable the mode for GPIOD peripheral
	*pPortDModereg &= ~(3<<24); //Clearing the 24th and 25th positions
	*pPortDModereg |= (1<<24);  //Setting 24th position

	//Set 12th bit of the output data register to make I/O pin-12 HIGH
	*pPortDOutreg |= (1<<12);

	while(1);


}
