#include<stdio.h>
#include<conio.h>

int main(){
	int arr[3][2];
	int r,c,rowsum;
	
printf("\t\t\t\t\t--------------------------------------------------\n");
printf("\t\t\t\t\t          PROGRAM TO FIND THE SUM OF ROW    \n");
printf("\t\t\t\t\t--------------------------------------------------\n\n");  
  	
	for(r=0; r<3; r++){
		for(c=0; c<2; c++){
			printf("\nEnter data for arr[%d][%d]: ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	printf("\n");
	
	printf("\nPress any key to see the data...\n\n");
	getch();
	
	for(r=0; r<3; r++){
		rowsum=0;
		for(c=0; c<2; c++){
			printf("%d ",arr[r][c]);
			rowsum+=arr[r][c];
		}
		printf("-> Row %d Sum = %d \n",r+1,rowsum);
	}
	
printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END ---*   ");       
printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
printf("\t\t\t\t\t-------------------------------------------------------\n\n");
	
	return 0;
}
