#include<stdio.h>
#include<conio.h>

int add(int i, int j){
	return i+j;
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
	
	printf("Enter Two Number cd: ");
	scanf("%d %d",&c, &d);
	
	printf("\n\nAddition: %d + %d = %d",x, y, add(x,y));
	

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

