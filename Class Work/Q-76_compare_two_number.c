#include<stdio.h>
#include<conio.h>

int cmp( int, int);

int main(){
	
	int i, j, res;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO COMPARE TWO NUMBER     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("\nEnter Two Number: ");
	scanf("%d %d",&i, &j);
	
	res=cmp(i,j);

	if(res==0){
		printf("Equal");
	}
	
	if(res==1){
		printf("\n%d is greater than %d",i,j);
	}
			
	if(res==-1){
		printf("\n%d is smaller than %d",i,j);
	}
	

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

int cmp(int i, int j){
	if(i==j)
	return 0;
	
	if(i>j)
	return 1;
	
	if(i<j)
	return -1;
}

