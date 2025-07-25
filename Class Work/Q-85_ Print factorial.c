#include<stdio.h>
#include<conio.h>

int main(){
	int num, fact=1;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO FIND THE FACTORIAL     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	up:
		
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	if(num<=0){
		printf("\nInvalid data! Please enter a positive number\n\n");
		goto up;
	}
	
	printf("\n\nPress any key to see the factorial...");
	getch();
	
	printf("\n\nFactorial = ");
	
	for(num; num>=1; num--){
		
		printf("%d",num);
		fact=fact*num;
		if(num>1) printf("X");
	}
	
	printf("=%d",fact);
	

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

