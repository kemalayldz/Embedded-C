#include <stdio.h>

int main(){

	char var = 100;

	printf("Address of var is %p\n", &var);

	char* pAddress = &var; //read address of the variable

	char data = *pAddress; //read byte from the address

	printf("Read data is %d\n", data);

	*pAddress = 65; //write byte to the address

	printf("New Value is %d\n", var);




	return 0;
}
