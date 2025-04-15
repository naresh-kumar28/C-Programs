#include<stdio.h>
#include<conio.h>

int main(){
	
	int row, col, ctr1, ctr2, rowsum, colsum;
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t   PROGRAM TO FIND THE SUM OF ROWS AND COLUMNS    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("\nEnter 2D Array Rows: ");
	scanf("%d",&row);
	printf("\nEnter 2D Array Columns: ");
	scanf("%d",&col);
	
	int arr[row][col];
	
	printf("\nNow, enter the elements of the %d x %d array\n\n", row, col);
	
	for(ctr1=0; ctr1<row; ctr1++){
		for(ctr2=0; ctr2<col; ctr2++){
			printf("Enter the elements of arr[%d][%d]: ", ctr1, ctr2);
			scanf("%d", &arr[ctr1][ctr2]);
		}
	}
	printf("\n");
	printf("Press any key to see the data...\n\n");
	getch();
	
	printf("2D Array Data:\n\n");
	for(ctr1=0; ctr1<row; ctr1++){
		for(ctr2=0; ctr2<col; ctr2++){
			printf("%d ", arr[ctr1][ctr2]);
		}
		printf("\n");
	}
	
	printf("\nPress any key to see the Rows Sum...\n\n");
	getch();
	
	for(ctr1=0; ctr1<row; ctr1++){
		rowsum=0;
		for(ctr2=0; ctr2<col; ctr2++){
			printf("%d ", arr[ctr1][ctr2]);
			rowsum+=arr[ctr1][ctr2];
		}
		printf("->Rows %d Sum: %d\n", ctr1+1,rowsum);
	}
	
	printf("\nPress any key to see the Column Sum...\n\n");
	getch();
	
	for(ctr1=0; ctr1<row; ctr1++){
		for(ctr2=0; ctr2<col; ctr2++){
			printf("%d ", arr[ctr1][ctr2]);
		}
		printf("\n");
	}
	printf("\n--------------------\n");
	
	for(ctr2=0; ctr2<col; ctr2++){
		colsum=0;
		for(ctr1=0; ctr1<row; ctr1++){
			colsum+=arr[ctr1][ctr2];
		}
		printf("->Columns %d Sum: %d\n", ctr2+1,colsum);
	}
	
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

