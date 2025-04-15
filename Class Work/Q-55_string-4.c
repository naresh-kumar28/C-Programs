#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){
	
	int ctr, length=0; 
	char name[25];
	
	puts("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to see the name length...");
	getch();
	
	for(ctr=0; name[ctr]!='\0'; ctr++){
		length ++;
	}
	
	printf("\nYour Name Length is: %d",length);

	return 0;
}

