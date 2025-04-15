#include<stdio.h>
#include<conio.h>
int main(){
	int arr[10],ctr,evenarr[10],ectr=0;
	
	for(ctr=0; ctr<=9; ctr++){
		printf("\nEnter arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	printf("\nPress any key to see even no: ");
	getch();
	
	for(ctr=0; ctr<=9; ctr++){
		if(arr[ctr]%2==0){
			evenarr[ectr]=arr[ctr];
			ectr++;
		}
	}
	
	if(ectr==0){
		printf("\nNo even data found: ");
	}
	else{
		for(ctr=0; ctr<ectr; ctr++){
			printf("\n evenarr[%d]=%d",ctr,evenarr[ctr]);
		}
	}
	return 0;
}
