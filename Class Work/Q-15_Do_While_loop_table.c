#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,ctr=1;
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see Table...");
	getch();
	
	do{
		printf("\n%d X %d = %d",num,ctr,num*ctr);
		ctr++;
	}while(ctr<=10);
	
	return 0;
}
