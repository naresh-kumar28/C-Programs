#include<stdio.h>
#include<conio.h>

int num, fact=1;

void top();
void input();
void holdscreen();
void factorial();
void msg();
void result();
void bottom();

int main(){
	
	top();
	input();
	holdscreen();
	msg();
	factorial();
	result();
	bottom();
	
	return 0;
}

void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO FIND THE FACTORIAL     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void input(){
	
	up:	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	if(num<=0){
		printf("\nInvalid data! Please enter a positive number\n\n");
		goto up;
	}
}

void holdscreen(){
	printf("\n\nPress any key to see the factorial...");
	getch();
}

void msg(){
	printf("\n\nFactorial = ");
}

void factorial(){
	
	for(num; num>=1; num--){
		
		printf("%d",num);
		fact=fact*num;
		if(num>1) printf("X");
	}
}

void result(){
	printf("=%d",fact);
}

void bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}
