

#include <stdint.h>

uint32_t volatile *const pClkENReg = (uint32_t*) 0x40023830;
uint32_t volatile *const pModeDReg =  (uint32_t*) 0x40020C00;
uint32_t volatile *const pModeDOutReg = (uint32_t*) 0x40020C14;

uint32_t volatile *const pModeAReg =  (uint32_t*) 0x40020000;
uint32_t const volatile *const pModeAInReg = (uint32_t*) 0x40020010;



int main(void)
{

    *pClkENReg |= (1<<3);
    *pClkENReg |= (1<<0);
    *pModeDReg  &= ~(3<<24); //Clearing the bits
    *pModeAReg  &= ~(3<<0); //Configuring PORTA as an input
    *pModeDReg  |= (1<<24); //Configuring PORTD as an output


    while(1){
    uint8_t pinStatus = (uint8_t) (*pModeAInReg & 0x1);


    if(pinStatus){
    	*pModeDOutReg |= (1<<12);

    }else{
    	*pModeDOutReg &= ~(0<<12);
    }
    }


}
