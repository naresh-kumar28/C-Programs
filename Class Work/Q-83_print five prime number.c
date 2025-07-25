#include<stdio.h>
#include<conio.h>

int main(){
	
	int start, end, ctr, ctr1, count=0, found=0;
	
	printf("Enter start and end No: ");
	scanf("%d %d",&start ,&end);
	
	printf("\nPress any key to see First five prime numbers in the given range...");
	printf("\n\n");
	getch();
	
	for(ctr=start; ctr<=end; ctr++){
		
		for(ctr1=2; ctr1< end; ctr1++){
			
			if(ctr%ctr1==0 ) break;
		}
		
		if(ctr==ctr1){
			found++;
			printf("%d ",ctr1);
		}
		
		if(found==5){
			break;
		}
	}
 
	return 0;
}
