#include<stdio.h>
#include<conio.h>
int main(){
	int fnum,snum,tnum,x,y,largest;
	
	printf("Enter Three Number: ");
	scanf("%d %d %d",&fnum, &snum, &tnum);
	
	if(fnum==snum && snum==tnum){
		printf("\nAll Numbers are same");
	}
	else{
		printf("\nPress any key to see Largest No.");
		getch();

		//x=(fnum>snum)? fnum : snum;
		//y=(x>tnum)?  : tnum;
	
		largest=(fnum>snum)?
				((fnum>tnum) ? fnum : tnum):
				((snum>tnum) ? snum : tnum);
				
		printf("\nLargest No: %d",largest);
	}
	return 0;
}
