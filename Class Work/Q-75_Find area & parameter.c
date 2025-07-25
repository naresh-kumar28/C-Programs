#include<stdio.h>
#include<conio.h>

int area(int);
int peri(int);

int main(){
	int r,a,p;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t   PROGRAM TO FIND AREA AND PERIMETER OF CIRCLE     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("\nEnter Radius: ");
	scanf("%d",&r);
	
	a=area(r);
	printf("\nThe Area of Circle is: %d",a);
	
	p=peri(r);
	printf("\nThe Parameter of Circle is: %d",p);
	

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}
 
int area(int r){
	return 3.17*r*r;
}

int peri(int r){
	return 2*3.17 *r;
}

