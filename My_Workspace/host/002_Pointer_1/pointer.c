#include <stdio.h>
#include <stdint.h>

long long int  g_data = 0xFFFEABCD11112345;

int main(){

	char *pAddress = (char*)&g_data;
	printf("Address of data %x is %p\n", *pAddress, pAddress);

	pAddress = pAddress+1;

	printf("Address of data %x is %p\n", *pAddress, pAddress);

	pAddress = pAddress +5;
	printf("Address of data %x is %p\n", *pAddress, pAddress);




	return 0;

}
