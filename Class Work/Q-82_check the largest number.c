#include<stdio.h>
#include<conio.h>

int largest(int, int, int);

int main(){
	
	int fnum, snum, tnum, lar;

	printf("Enter Three Number: ");
	scanf("%d %d %d",&fnum, &snum, &tnum);
	
	printf("\nPress any key to see the largest no...");
	getch();
	
	lar=largest(fnum,snum,tnum);
	
	return 0;
}

int largest(int fnum, int snum, int tnum){
	
	if(fnum==snum && snum==tnum){
		printf("\nAll Numbers are Same");
		return 0;
	}
	
	else if(fnum>snum){
		if(fnum>tnum){
			printf("\nLargest No: %d",fnum);
		}
		else
			printf("\nLargest No: %d",tnum);
	}
	
	else if(snum>tnum){
		printf("\nLargest No: %d",snum);
	}
	else{
		printf("\nLargest No: %d",tnum);
	}
	
	return 0;
}
