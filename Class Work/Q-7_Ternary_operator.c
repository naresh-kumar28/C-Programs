#include<stdio.h>
#include<conio.h>
int main(){
	
	int fnum,snum,tnum,x,y;
	
	printf("Enter First No: ");
	scanf("%d",&fnum);
	
	printf("\nEnter Second No: ");
	scanf("%d",&snum);
	
	printf("\nEnter Third No: ");
	scanf("%d",&tnum);
	
	if(fnum==snum && snum==tnum){
		printf("\nAll numbers are same");
	}
	else{
		printf("\nPress any key to see Largest No...");
		getch();
		x=(fnum>snum) ? fnum : snum;
		y=(x>tnum) ? x : tnum;
		printf("\n\nLargest No: %d",y);
	}
	
	return 0;
}
