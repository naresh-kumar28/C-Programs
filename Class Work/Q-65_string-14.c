#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char fname[50], lname[50], name[50];
	int i=0, j=0;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO CONCANATE THE STRING    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("\nEnter Your First Name: ");
	gets(fname);
	
	printf("\nEnter your Last Name: ");
	gets(lname);
	
	printf("\nPress any key to see the concatenate string...");
	getch();
	
	while(fname[i] !='\0'){
		name[i]=fname[i];
		i++;
	}
	
	name[i]= ' ';
	i++;
	
	while(lname[j] !='\0'){
		name[i]=lname[j];
		i++;
		j++;
	}
	name[i]='\0';
	
	printf("\n\nYour Concatenate string is: %s",name);



	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

