#include <stdio.h>
#include <stdint.h>

void wait_for_user_input();

int main(){


	uint8_t num;
	printf("Enter the number:");
	scanf("%d",&num);

	if((num & 1) == 0){
		printf("Your number is even.");
	}else{
		printf("Your number is odd.");

	}

	wait_for_user_input();
}
void wait_for_user_input(){

	while(getchar() != '\n'){



		}

		getchar();
}
