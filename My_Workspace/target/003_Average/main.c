#include <stdio.h>


int main(){

	float numa, numb, numc;

	printf("Enter the first number:");
	fflush(stdout);
	scanf("%f",&numa);
	printf("Enter the second number:");
	fflush(stdout);
	scanf("%f",&numb);
	printf("Enter the third number:");
	fflush(stdout);
	scanf("%f",&numc);

	float result;
	result = (numa + numb + numc)/3;

	printf("\nAverage is = %f\n", result);
	getchar();
	getchar();

	return 0;
}
