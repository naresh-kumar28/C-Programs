#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char fname[50], lname[50];

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO CONCANATE THE STRING    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter Your First Name: ");
	gets(fname);
	
	printf("\nEnter Your Second Name: ");
	gets(lname);
	
	strcat(fname," ");
	strcat(fname,lname);
	
	printf("\nPress any key to concanate the string...");
	getch();
	
	printf("\nYour Concanate string: %s",fname);


	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

