#include<stdio.h>

void tableprint(int , int);
void topscr();
void bottomscr();

int main(){

	int num,ctr=1;
	topscr();
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	tableprint(num,ctr);
	
	bottomscr();
	
	return 0;
}

void tableprint(int num, int ctr){
	
	if(ctr>10)
		return ; //base case
	
	else{
		printf("\n%d X %d = %d",num,ctr,num*ctr);
		return tableprint(num,ctr+1); //function call
	}
}

void topscr(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PRINT TABLE USING RECURSION     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void bottomscr(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}
