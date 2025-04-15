#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter array size: ");
	scanf("%d",&num);
	
	int arr[num],ctr,search,found=0;
	printf("\nYour Array size: [%d] ",num);
	
	for(ctr=0; ctr<=num-1; ctr++){
		printf("\n\nEnter Element of Arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	
	printf("\npress any key to see your data...");
	getch();
	
	for(ctr=0; ctr<=num-1; ctr++){
		printf("\nYour data is [%d]: %d",ctr,arr[ctr]);
	}
	
	printf("\nPress any key to Search number...");
	getch();
	
	printf("\n\nEnter a Number to check data is present or Not: ");
	scanf("%d",&search);
	
	printf("\npress any key to see the result....");
	getch();
	
	for(ctr=0; ctr<=num-1; ctr++){
		if(search==arr[ctr]){
			found++;
		}
	}
	
	if(found > 0){
		printf("\n%d is Present Here",search);
		printf("\nPress any key see the Position");
		getch();
		
		for(ctr=0; ctr<=num-1; ctr++){
			if(search==arr[ctr]){
				printf("\n%d is found at Position[%d]",search,ctr);
			}
		}
		printf("\npress any key to see number of Occurance: ");
		getch();
		printf("\nTotal Occurance=%d",found);
	}
	else
		printf("\n%d is Not Present Here",search);
	
	return 0;
}
