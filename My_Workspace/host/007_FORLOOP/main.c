#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();
int main(){


	uint8_t height, count;

	printf("Enter the height of the pyramid:");
	scanf("%d",&height);

	for(count=1 ; count <= height ; count++){

		for(uint8_t j = count; j>0; j--){

			printf("%d  ", j);
		}
		printf("\n");
	}

	wait_for_user_input();
}
void wait_for_user_input(){

	while(getchar() != '\n'){



		}

		getchar();
}