#include<stdio.h>
#include<conio.h>

int x, y, xresult, yresult;

void top();
void prtscn();
void swap();
void beforeswap();
void afterswap();
void bottom();

int main(){

	top();
	prtscn();
	beforeswap();
	swap();
	afterswap();
	bottom();

	return 0;
}

void top(){
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO SWAPPING TWO NUMBER     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void prtscn(){
	
	printf("Enter First No: ");
	scanf("%d",&x);
	printf("Enter Second No: ");
	scanf("%d",&y);
}

void beforeswap(){
	
	printf("\nBefore Swapping:");
	printf("\nValue of X=%d",x);
	printf("\nValue of y=%d\n",y);
}

void swap(){
	
	x=x+y;
	y=x-y;
	x=x-y;
	
	xresult=x;
	yresult=y;

}

void afterswap(){
	
	printf("\nAfter Swapping:");
	printf("\nValue of X=%d",xresult);
	printf("\nValue of y=%d",yresult);
}

void bottom(){
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}
