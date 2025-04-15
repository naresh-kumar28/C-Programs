#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[25];
	
	puts("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to see your name...\n\n");
	getch();
	
//	puts("\nYour Name is: ");
//	puts(name);
	
	printf("\nYour Name is: %s",name);
	
	return 0;
}

