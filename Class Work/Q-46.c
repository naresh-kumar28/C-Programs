#include<stdio.h>
#include<conio.h>

int main(){
	int arr[2][3];
	int r,c,colsum[3]={0};
	
printf("\t\t\t\t\t--------------------------------------------------\n");
printf("\t\t\t\t\t          PROGRAM TO FIND THE SUM OF COLOUM    \n");
printf("\t\t\t\t\t--------------------------------------------------\n\n");  
	
	for(r=0; r<2; r++){
		for(c=0; c<3; c++){
			printf("\nEnter data for arr[%d][%d]: ",r,c);
			scanf("%d",&arr[r][c]);
		}
	}
	printf("\n");
	
	printf("\nPress any key to see the data...\n\n");
	getch();
	
	for(r=0; r<2; r++){
		for(c=0; c<3; c++){
			printf("%d ",arr[r][c]);
			colsum[c]+=arr[r][c];
		}
		printf("\n");
	}
	
	for(c=0; c<3; c++){
		printf("\nColoum %d Sum: %d",c+1,colsum[c]);
	}
	
printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");    
printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
printf("\t\t\t\t\t-------------------------------------------------------\n\n");
	
	return 0;
}
