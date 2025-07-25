#include<stdio.h>
#include<conio.h>

void table(int, int);
void top();
void bottom();

int main(){

	int num, limit;
	
	top();
	
	printf("\nEnter Any Number: ");
	scanf("%d",&num);
	
	printf("\nEnter The Limit: ");
	scanf("%d",&limit);
	
	table(num,limit);
	
	bottom();
	
	return 0; 
}

void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO PRINT TABLE     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}

void table(int num, int limit){
	int ctr;
	
	for(ctr=1; ctr<=limit; ctr++){
		printf("\n%d X %d = %d",num,ctr,num*ctr);
	}

}
