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
	
	printf("\nYour 1st No arr[0] : %d",arr[0]);
	printf("\nYour 2nd No arr[1] : %d",arr[1]);
	printf("\nYour 3rd No arr[2] : %d",arr[2]);
	printf("\nYour 4th No arr[3] : %d",arr[3]);
	printf("\nYour 5th No arr[4] : %d",arr[4]);
	
	return 0;
}
