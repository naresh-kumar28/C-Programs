#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char data[50], copy[50];

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO COPY THE STRING    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter Your Name: ");
	gets(data);
	
	printf("\nPress any key to copy the string...");
	getch();
	
	strcpy(copy,data);
	
	printf("\n\nYour copy strings -> %s",copy);


	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

