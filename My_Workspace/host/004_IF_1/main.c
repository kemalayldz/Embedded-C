#include <stdio.h>

void wait_for_user_input();
int main(){


	int n1,n2;
	printf("Enter first number: \n");
	if(scanf("%d", &n1) == 0){

		printf("invalid input! Exiting...\n");
		wait_for_user_input();
		return 0;
	}
	printf("Enter second number: \n ");
	if(scanf("%d", &n2) == 0){

			printf("invalid input! Exiting...\n");
			wait_for_user_input();
			return 0;

		}



	if(n1>n2){

		printf("%d is the bigger number", n1);
	} else if(n2>n1){

		printf("%d is the bigger number", n2);
	}else if(n1==n2){

		printf("Numbers are equal.");
	}





}

void wait_for_user_input(){

	while(getchar() != '\n'){



		}

		getchar();
}
