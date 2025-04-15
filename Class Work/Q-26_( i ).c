#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[5],ctr;
	
	printf("Enter 1st Number: ");
	scanf("%d",&arr[0]);
	printf("Enter 2nd Number: ");
	scanf("%d",&arr[1]);
	printf("Enter 3rd Number: ");
	scanf("%d",&arr[2]);
	printf("Enter 4th Number: ");
	scanf("%d",&arr[3]);
	printf("Enter 5th Number: ");
	scanf("%d",&arr[4]);
	
	printf("\nPress any key to see your data...");
	getch();
	
	for(ctr=0; ctr<=4; ctr++){
		printf("\nYour Entered Data [%d]: %d",ctr,arr[ctr]);
	}
	
	return 0;
}
