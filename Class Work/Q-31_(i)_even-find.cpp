#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[10],ctr,found=0;
	
	for(ctr=0; ctr<=9; ctr++){
		printf("\nEnter arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
	printf("\nPress any key to see even No: ");
	getch();
	
	for(ctr=0; ctr<=9; ctr++){
		if(arr[ctr]%2==0){
			printf("\n%d is Even No at the Position [%d]: ",arr[ctr],ctr);
			found++;
		}
	}
	if(found==0){
		printf("\n No Even Data Found: ");
	}
			
	return 0;
}
