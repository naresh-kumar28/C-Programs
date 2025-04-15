#include<stdio.h>
#include<conio.h>

int main(){
	int r, c, row, column, sum;

	printf("\t\t\t\t------------------------------------------------------------------------------\n");
	printf("\t\t\t\t\t PROGRAM TO FIND THE SUM OF MATRIX AND SUM OF ROWS AND COLUMNS    \n");
	printf("\t\t\t\t------------------------------------------------------------------------------\n\n");
	
	printf("Enter 2D Array Rows: ");
	scanf("%d",&r);
	printf("\nEnter 2D Array Column: ");
	scanf("%d",&c);
	
	int arr[r][c];
	
	if(r==c){
		
		printf("\nNow, Enter The Elements of Matrix (%dX%d):\n",r,c);
	
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				printf("\nEnter the elements of arr->[%d][%d]: ",row, column);
				scanf("%d",&arr[row][column]);
			}
		}
		printf("\nAll data has been entered Successfully...!");
		printf("\nPress any key to see the data...\n");
		getch();
		printf("\n---* Matrix: *---\n\n");
		
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				printf("[%d] ",arr[row][column]);
			}
			printf("\n");
		}
		printf("\nPress any key to see the left diagonal sum...\n\n");
		getch();
		
		sum=0;
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				if(row==column){
					if(row > 0) printf("+ ");
					printf("[%d] ", arr[row][column]);
					sum+=arr[row][column];
				}
				
			}
		}
		printf("= %d\n",sum);
		
		printf("\nPress any key to see the right diagonal sum...\n\n");
		getch();
		
		sum=0;
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				if(row+column==r-1){
					if(row > 0) printf("+ ");
					printf("[%d] ", arr[row][column]);
					sum+=arr[row][column];
				}
				
			}
		}
		printf("= %d",sum);
	}
	else{
		
		printf("\nNow, Enter The Elements of 2D Array %d X %d:\n",r,c);
		
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				printf("\nEnter the elements of arr->[%d][%d]: ",row, column);
				scanf("%d",&arr[row][column]);
			}
		}
		printf("\nAll data has been entered Successfully...!");
		printf("\nPress any key to see the data...\n");
		getch();
		printf("\n2D Array Data\n\n");
		
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				printf("[%d] ",arr[row][column]);
			}
			printf("\n");
		}
		
		printf("\nPress any key to see the Rows sum...\n\n");
		getch();
		
		for(row=0; row<r; row++){
			sum=0;
			for(column=0; column<c; column++){
				if(column > 0) printf("+ ");
				printf("[%d] ",arr[row][column]);
				sum+=arr[row][column];
			}
			printf(": Sum = %d\n",sum);
		}
		
		printf("\nPress any key to see the Column sum...\n\n");
		getch();
		
		for(row=0; row<r; row++){
			for(column=0; column<c; column++){
				printf("[%d] ",arr[row][column]);
			}
			printf("\n");
		}
		printf("\n--------------\n\n");
		
		for(column=0; column<c; column++){
			sum=0;
			for(row=0; row<r; row++){
				if(row > 0) printf("+ ");
				printf("[%d] ",arr[row][column]);
				sum+=arr[row][column];
			}
			printf(": Sum = %d\n",sum);
		}	
	}

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

