#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,ctr,sum=0,min,max,avg;
	
	printf("Enter Array Size: ");
	scanf("%d",&num);
	
	int arr[num];
	
	for(ctr=0; ctr<=num-1; ctr++){
		printf("\nEnter Element of arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	
	max=arr[0];
	min=arr[0];
	
	printf("\nPress any key to see your Data...");
	getch();
	
	for(ctr=0; ctr<=num-1; ctr++){
		printf("\nEnter Element of arr[%d]: %d",ctr,arr[ctr]);
	}
	
	printf("\nPress any key to see Sum...");
	getch();
	
	for(ctr=0; ctr<=num-1; ctr++){
		sum=sum+arr[ctr];
		
		if(arr[ctr]>max){
			max=arr[ctr];
		}
		if(arr[ctr]<min){
			min=arr[ctr];
		}
	}
	
	avg=sum/num;
	
	printf("\nTotal Number Of Sum: %d",sum);
	
	printf("\nPress any key to see Max Value...");
	getch();
	
	printf("\nMax Value : %d",max);
	
	printf("\nPress any key to see Min Value...");
	getch();
	
	printf("\nMin Value : %d",min);
	
	printf("\nPress any key to see Average Value...");
	getch();
	
	printf("\nAvg Value : %d",avg);
	
	return 0;
}
