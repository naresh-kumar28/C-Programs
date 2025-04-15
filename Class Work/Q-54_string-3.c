#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	char name[25];
	
	puts("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to the name length...");
	getch();
	
	printf("\nYour Name Length is: %d",strlen(name));

	return 0;
}

