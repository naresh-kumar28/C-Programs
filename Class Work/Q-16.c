#include<stdio.h>
#include<conio.h>
int main(){
	
	int fnum,snum;
	char choice;
	
	do{

		printf("\nEnter First No: ");
		scanf("%d",&fnum);
		printf("\nEnter First No: ");
		scanf("%d",&snum);

		printf("\nPress any key to see the sum...");
		getch();

		printf("\nSum : %d+%d=%d",fnum,snum,fnum+snum);

		printf("\nDo you want to continue(Y/N): ");
		choice=getch();
	}while(choice=='Y' || choice=='y');
	
	return 0;
}
