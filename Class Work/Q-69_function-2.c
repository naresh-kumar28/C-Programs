#include<stdio.h>
#include<conio.h>	
	
int add(int i, int j){
	return i+j;	
}

int sub(int i, int j){
	return i-j;
}

int mul(int i, int j){
	return i*j;
}

int div(int i, int j){
	return i/j;
}

int rem(int i, int j){
	return i%j;
}

int main(){
	int x, y;
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO USING FUNCTION     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter Two Number: ");
	scanf("%d %d",&x, &y);
	
	printf("\nPress any key to see the Calculation...");
	getch();	
	
	printf("\n\nAddition: %d + %d = %d",x, y, add(x,y));
	printf("\n\nSubstraction: %d - %d = %d",x, y, sub(x,y));
	printf("\n\nMultiplication: %d * %d = %d",x, y, mul(x,y));
	printf("\n\nDivision: %d / %d = %d",x, y, div(x,y));
	printf("\n\nRemainder: %d %% %d = %d",x, y, rem(x,y));


	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}
