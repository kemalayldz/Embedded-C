#include <stdio.h>
#include <stdint.h>


void wait_for_user_input();
void Circle();
void Triangle();
void Rectangle();
void Square();
void Trapezoid();

int main(){

	char code, case_temp;
	printf("Area calculation program \n");
	printf("Circle --> c \n");
	printf("Triangle --> t \n");
	printf("Rectangle --> r\n");
	printf("Square --> s \n");
	printf("Trapezoid --> z \n");
	printf("Enter the code here:");
	scanf("%c", &code);

	if(code == 'c'){
		case_temp = 1;
	}else if (code == 't'){
		case_temp = 2;
	}else if(code == 'r'){
		case_temp = 3;
	}else if(code == 's'){
		case_temp = 4;
	}else if(code == 'z'){
		case_temp = 5;
	}

	switch(case_temp){

	case 1:
		Circle();
		break;
	case 2:
		Triangle();
		break;
	case 3:
		Rectangle();
		break;
	case 4:
		Square();
		break;
	case 5:
		Trapezoid();
		break;
	default:
		printf("Invalid code!");
		 wait_for_user_input();
	}





wait_for_user_input();
}

void wait_for_user_input(){

	while(getchar() != '\n'){

		}

		getchar();
}


void Circle(){


	float r, A;
	int pi=3;
	printf("Enter the radius:");
	scanf("%f", &r);
	A = pi*(r*r);
	printf("Area of circle is %f", A);

}

void Triangle(){
	float b, h, A;
	printf("Enter the base:");
	scanf("%f", &b);
	printf("Enter the height:");
	scanf("%f", &h);
	A = (h*b)/2;
	printf("Area of triangle is %f", A);

}
void Rectangle(){
	float w, l, A;
	printf("Enter the length:");
	scanf("%f", &l);
	printf("Enter the width:");
	scanf("%f", &w);
	A = w*l;
	printf("Area of the rectangle is %f", A);

}

void Square(){
	float a, A;
	printf("Enter the side length of the square:");
	scanf("%f", &a);
	A = a*a;
	printf("Area of the square is %f", A);
}

void Trapezoid(){
	float a,b,h, A;
	printf("Enter the lower base of the trapezoid:");
	scanf("%f", &a);
	printf("Enter the upper base of the trapezoid:");
	scanf("%f", &b);
	printf("Enter the height of the trapezoid:");
	scanf("%f", &h);
	A = ((a+b)/2)* h;
	printf("Area of the trapezoid is %f", A);

}
