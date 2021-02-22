#include <stdio.h>

void wait_for_user_input();
int main(){


	int income, tax;
	printf("Enter your income: \n");
	scanf("%d", &income);






	if(income < 9525){
		tax = income * (0*100);

		printf("Your total tax is %d", tax);
	} else if((income>9525) && (income < 38700)){
		tax = income*(12*100);

		printf("Your total tax is %d", tax);
	}else if((income>38700) && (income < 82500)){
		tax = income*(22*100);
		printf("Your total tax is %d", tax);
	}else if((income>82500)){
		tax = income*(32*100);
		printf("Your total tax is %d", tax);
	}




wait_for_user_input();
}

void wait_for_user_input(){

	while(getchar() != '\n'){



		}

		getchar();
}
