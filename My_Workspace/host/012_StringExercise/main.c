#include "main.h"
#include <stdio.h>


STUDENT_INFO_t students[10];

int main(){

	int app_continue=1;
	printf("Student record management program\n");


	while(app_continue){


		int menu_code = read_menu_code();
		display_menu();
		if(menu_code){

			menu_decode(menu_code);
		}else{
			app_continue=0;
			printf("Exiting application...\n");
		}



	}

	while(getchar()=='\n'){


	}
	getchar();


	return 0;

}
int read_menu_code(){
	int enternum;
	scanf("%d", &enternum);
	return enternum;


}

void display_menu(){

	printf("Display all records --> 1\n");
	printf("Add new record      --> 2\n");
	printf("Delete a record     --> 3\n");
	printf("Exit application     --> 4\n");



}

void menu_decode(int menu_code){

	switch(menu_code){

		case 1:
		display_records();
		break;
		case 2:
		add_record();
		break;
		case 3:
		break;
		case 4:
	    break;
			}
}
void display_records(){
	printf("Displaying all the records...\n");

	for(int i=0; i<10; i++){
		printf("********\n");
		printf("rollNumber        : %d", students[i].rollNumber);
		printf("studentSemister   : %d", students[i].semister);
		printf("studentDOB        : %s", students[i].dob);
		printf("studentBranch     : %s", students[i].branch);
		printf("studentName       : %s", students[i].name);


	}

}
void add_record(){

	long int rollnum,semester;
	char dob[15];
	char branch[50];
	char name[30];
	printf("Enter the roll number:");
	scanf("%d",&rollnum);
	printf("Enter the student semester:");
	scanf("%d",&semester);
	printf("Enter the DOB(mm/dd/yyyy:");
	scanf("%s",&dob);
	printf("Enter the student branch:");
	scanf("%50[^\n]s",&branch);
	getchar();
	printf("Enter the student name  :");
	scanf("%50[^\n]s",&name);
	getchar();


	for(int i=0; i<10; i++){
		if(students[i].rollNumber==0 && students[i].rollNumber != rollnum){
			students[i].rollNumber==rollnum;
			students[i].semister==semester;
			students[i].dob == dob;
			students[i].branch == branch;
			students[i].name == name;

		}else if(students[i].rollNumber == rollnum){
			printf("Roll number is already exist\n");
			printf("Record add is unsuccessful\n");
	}
	}
}

