#include<stdio.h>
#include<conio.h>

int x, y;

int top();
int prtscn();
int swap();
int beforeswap();
int afterswap();
int bottom();

int main(){

	top();
	prtscn();
	beforeswap();
	swap();
	afterswap();
	bottom();

	return 0;
}

int top(){
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO SWAPPING TWO NUMBER     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	return 0;
}

int prtscn(){
	
	printf("Enter First No: ");
	scanf("%d",&x);
	printf("Enter Second No: ");
	scanf("%d",&y);
	
	return 0;
}

int beforeswap(){
	
	printf("\nBefore Swapping:");
	printf("\nValue of X=%d",x);
	printf("\nValue of y=%d",y);
	
	return 0;
}

int swap(){
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	return 0;
}

int afterswap(){
	
	printf("\nAfter Swapping:");
	printf("\nValue of X=%d",x);
	printf("\nValue of y=%d",y);
	
	return 0;
}

int bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
	return 0;
}
