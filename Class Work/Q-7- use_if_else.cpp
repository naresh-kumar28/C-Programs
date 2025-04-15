#include<stdio.h>
#include<conio.h>
int main(){
	
	int fnum,snum,tnum;
	
	printf("Enter First No: ");
	scanf("%d",&fnum);
	
	printf("\nEnter Second No: ");
	scanf("%d",&snum);
	
	printf("\nEnter Third No: ");
	scanf("%d",&tnum);
	
	printf("\nPress any key to see Largest No...");
	getch();
	
	if(fnum==snum && snum==tnum){
		printf("\nAll Number are same");
	}
	else if(fnum>snum && fnum>tnum)
		printf("\nLargest No:%d",fnum);
	
	else if(snum>fnum && snum>tnum)
		printf("\nLargest No:%d",snum);
	
	else
		printf("\nLargest No:%d",tnum);
		
	return 0;
}
