#include <stdio.h>


int main(){

	float numa, numb, numc;

	printf("Enter 3 numbers:");
	fflush(stdout);
	scanf("%f %f %f",&numa, &numb, &numc);


	float result;
	result = (numa + numb + numc)/3;

	printf("\nAverage is = %f\n", result);
	getchar();
	getchar();

	return 0;
}
