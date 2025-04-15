#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[10],ctr,search,found=0;
	
	
	for(ctr=0; ctr<=9; ctr++){
		printf("\nEnter arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	
	printf("\nEnter a Number to check data is present or Not: ");
	scanf("%d",&search);
	printf("\npress any key to see the result....");
	getch();
	
	for(ctr=0; ctr<=9; ctr++){
		if(search==arr[ctr]){
			found++;
			
		}
	} 
	
	if(found > 0){
		
		printf("\nYes %d is present Here: ",search);
		printf("\nPress any key to see the Position...");
		getch();
		
		for(ctr=0; ctr<=9; ctr++){
			if(search==arr[ctr]){
				printf("\n%d is found at position:[%d]",search,ctr);
			}
		}
		printf("\nPress any key to see number of time %d occur...",search);
		getch();
		printf("\n%d Found %d Times",search,found);
	}
	else
		printf("\n%d is not present",search);
	
	return 0;
}
