#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[10],ctr,even=0,odd=0;
	
	for(ctr=0; ctr<10; ctr++){
		printf("\nEnter value of arr [%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	printf("\nPress any key to see even no: ");
	getch();
	
	for(ctr=0; ctr<10; ctr++){
		if(arr[ctr]%2==0){
			printf("\n%d is Even No at the Position [%d]: ",arr[ctr],ctr);
			even++;
		}
	}
	if(even > 0){
		printf("\nTotal Even No: %d",even);
	}
	else{
		printf("\nNo even data found");
	}
	printf("\nPress any key to see odd no: ");
	getch();
	for(ctr=0; ctr<10; ctr++){
		if(arr[ctr]%2==1){
			printf("\n%d is Odd No at the Position [%d]: ",arr[ctr],ctr);
			odd++;
		}
	}
	if(odd > 0){
		printf("\nTotal Odd No: %d",odd);
	}
	else{
		printf("\nNo Any odd no found");
	}
	
}
