

#include<stdio.h>
#include<stdint.h>

struct CarModel{

		uint32_t CarNumber;
		uint32_t CarPrice;
		uint16_t CarSpeed;
		float CarWeight;

	};

int main(void)
{



	struct CarModel CarBmw ={2021, 15000,220,1330};
	struct CarModel CarHonda ={4031, 35000,160,1900};
	struct CarModel CarFord = {.CarWeight=90.10, .CarSpeed=120};

	printf("Details of car BMW is as follows:\n");
	printf("carNumber is = %d\n", CarBmw.CarNumber);
	printf("carPrice is = %d\n", CarBmw.CarPrice);
	printf("carSpeed is = %d\n", CarBmw.CarSpeed);
	printf("carWeight is = %f\n", CarBmw.CarWeight);


	getchar();

}
