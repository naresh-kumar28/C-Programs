#include<stdio.h>
#include<conio.h>

void printtable(int);

int main(){
	
	int num;
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO PRINT THE TABLE     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to print the table...");
	getch();
	
	printtable(num);


	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

void printtable(int num){
	static int ctr=1;
	
	if(ctr>10){
	return;
	}
	
	printf("\n%d",ctr * num);
	ctr++;
	
	printtable(num);
}

