#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10],search,ctr,found=0;
	for(ctr=0; ctr<10; ctr++){
		printf("\nEnter value of arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	
	printf("\nPress any key to see Your Data: ");
	getch();
	
	for(ctr=0; ctr<10; ctr++){
		printf("\nYour Data[%d]: %d",ctr,arr[ctr]);
	}
	printf("\nEnter Find Any Number: ");
	scanf("%d",&search);
	
	for(ctr=0; ctr<10; ctr++){
		if(search==arr[ctr]){
			found++;
		}
	}
	if(found > 0){
		printf("\n%d is present here:",search);
		printf("\nPress any key to see position...");
		getch();
		
		for(ctr=0; ctr<10; ctr++){
			if(search==arr[ctr]){
				printf("\n%d is at Position [%d]",search,ctr);
			}
		}
		printf("\nPress any key to see occurance...");
		getch();
		printf("\nTotal Occurance: %d",found);
	}
	
	
	else
		printf("\nYour Data is Not Found: ");
	
	
	return 0;
}
