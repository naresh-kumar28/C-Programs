#include<stdio.h>
#include<conio.h>
int main(){
	
	int fnum,snum;
	
	printf("Enter First No: ");
	scanf("%d",&fnum);
	
	
	printf("\nEnter Second No: ");
	scanf("%d",&snum);
	
	printf("\nPress any key to see Largest No...");
	getch();
	
	(fnum>snum)? printf("\n\nLargest No:%d",fnum) : printf("\n\nLargest No:%d",snum);
	
	return 0;
}
