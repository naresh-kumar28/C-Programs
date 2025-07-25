#include<stdio.h>
#include<conio.h>

int x,y;

int top();
int bottom();
int prtscn();

int add();
int sub();
int mul();
int div();
int rem();

int main(){
	
	top();
	prtscn();
	add();
	sub();
	mul();
	div();
	rem();
	bottom();
	
	return 0;
}

int top(){
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO FIND THE CALCULATION     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	return 0;
}

int bottom(){
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}

int prtscn(){
	
	printf("Enter Two Number: ");
	scanf("%d %d", &x, &y);
	return 0;
	
}

int add(){
	
	printf("\n\nPress any key to see the sum...");
	getch();
	
	printf("\n\nAddition: %d + %d = %d",x,y,x+y);
	
	return 0;
}

int sub(){
	
	printf("\n\nPress any key to see the subs...");
	getch();
	
	printf("\n\nSubstraction: %d - %d = %d",x,y,x-y);
	
	return 0;
}

int mul(){
	
	printf("\n\nPress any key to see the multi...");
	getch();
	
	printf("\n\nMultiplication: %d X %d = %d",x,y,x*y);
	
	return 0;
}

int div(){
	
	printf("\n\nPress any key to see the div...");
	getch();
	
	printf("\n\nDivision: %d / %d = %d",x,y,x/y);
	
	return 0;
}

int rem(){
	
	printf("\n\nPress any key to see the rem...");
	getch();
	
	printf("\n\nSub: %d %% %d = %d",x,y,x%y);
	
	return 0;
}
