#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[25];
	
	printf("Enter Your Full Name: ");
	scanf("%s",name);
	
	printf("\nPress any key to see your name...");
	getch();
	
	printf("\nYour Name is %s",name);

	return 0;
}

