#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[25];
	int ctr;
	
	puts("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to see the Reverse name...");
	getch();
	
	printf("\n\nReverse Print: %s",strrev(name));
	
	return 0;
}

