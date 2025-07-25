#include<stdio.h>
#include<conio.h>

void swap(int*, int*);

int main(){
	int i, j;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO SWAP TWO NUMBER     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("\nEnter Two Number: ");
	scanf("%d %d",&i, &j);
	
	printf("\n\nBefore Swaping: ");
	printf("\nValue of i= %d",i);
	printf("\nValue of j= %d",j);
	
	swap(&i,&j);
	
	printf("\n\nAfter Swaping: ");
	printf("\nValue of i= %d",i);
	printf("\nValue of j= %d",j);


	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

void swap(int *i, int*j){
	*i= *i+*j;
	*j= *i-*j;
	*i= *i-*j;
}

