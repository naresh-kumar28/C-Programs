#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[5],ctr;
	
	for(ctr=0; ctr<=4; ctr++){
		printf("\nEnter value of arr [%d] : ",ctr);
		scanf("%d",&arr[ctr]);
	}
	
	printf("\nPress any key to see your data...");
	getch();
	
	for(ctr=0; ctr<=4; ctr++){
		printf("\nYour arr value [%d] : %d",ctr,arr[ctr]);
	}
	
	return 0;
}
