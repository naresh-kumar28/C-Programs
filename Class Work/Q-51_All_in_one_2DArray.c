#include<stdio.h>
#include<conio.h>

int main(){

	int r, c, row, column, search, count, sum, choice;
	char ch;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t      Welcome to 2D Array Operations    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	do{
		up:
			
		printf("\nSelect an operation to perform:\n");
		printf("\n--------------------------------\n");
		
		printf("\n1. Calculate Diagonal Sum of a Matrix");
		printf("\n2. Search for a Number in the Array");
		printf("\n3. Calculate Row and Column Sums");
		
		printf("\n\nEnter your choice (1/2/3): ");
		scanf("%d",&choice);
		
		if(choice < 1 || choice > 3){
			printf("\nInvalid choice! Please enter a valid option.\n");
			goto up;
		}
		
		if(choice==1){
				
			printf("\nEnter 2D Array Rows Size: ");
			scanf("%d", &r);
			printf("\nEnter 2D Array Column Size: ");
			scanf("%d", &c);
		
			int arr[r][c];
			
			printf("\nNow, Enter The element Matrix %dx%d:\n", r, c);
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("\nEnter the Element of Arr[%d][%d]: ", row, column);
					scanf("%d",&arr[row][column]);
				}
			}
			
			printf("\nYour All Data is Entered successfully!\n");
			printf("\n--* Matrix *--\n\n");
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("[%d] ", arr[row][column]);
				}
				printf("\n");
			}
			
			printf("\nPress any key to see the left diagonal sum\n\n");
			getch();
			
			sum=0;
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					if(row==column){
						if(row>0) printf("+ ");
						printf("[%d] ", arr[row][column]);
						sum=sum+arr[row][column];
					}
				}
			}
			printf("=> %d\n",sum);
			
			printf("\nPress any key to see the Right diagonal sum\n\n");
			getch();
			
			sum=0;
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					if(row+column==r-1){
						if(row>0) printf("+ ");
						printf("[%d] ", arr[row][column]);
						sum=sum+arr[row][column];
					}
				}
			}
			printf("=> %d\n",sum);   
		}
		
		else if(choice==2){
		
			printf("\nEnter 2D Array Rows Size: ");
			scanf("%d", &r);
			printf("Enter 2D Array Column Size: ");
			scanf("%d", &c);
		
			int arr[r][c];
			
			printf("\nNow, Enter The element of 2D Array %dX%d:\n", r, c);
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("\nEnter the Element of Arr[%d][%d]: ", row, column);
					scanf("%d",&arr[row][column]);
				}
			}
			
			printf("\nYour All Data is Entered successfully!\n\n");
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("[%d] ", arr[row][column]);
				}
				printf("\n");
			}
			
			printf("\nPress Any key to find number...");
			getch();
			
			printf("\n\nEnter Finding Any Number: ");
			scanf("%d",&search);
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					if(search==arr[row][column])
					count++;
				}
			}
			
			(count>0) ? printf("\n%d ,is found in Array",search) : printf("\nNot, Found ");
			
			printf("\n\nPress any key to see the position...\n");
			getch();
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					if(search==arr[row][column])
					printf("\n[%d][%d] = %d", row, column, search);
				}
			}
			printf("\n\n[%d]-> found %d time in Array\n", search, count);			
		}
		
		else if(choice==3){
					
			printf("\nEnter 2D Array Rows Size: ");
			scanf("%d", &r);
			printf("\nEnter 2D Array Column Size: ");
			scanf("%d", &c);
		
			int arr[r][c];
			
			printf("\nNow, Enter The element of 2D Array %dX%d:\n", r, c);
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("\nEnter the Element of Arr[%d][%d]: ", row, column);
					scanf("%d",&arr[row][column]);
				}
			}
			
			printf("\nYour All Data is Entered successfully!\n");
			printf("\n--* 2D Array *--\n\n");
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("[%d] ", arr[row][column]);
				}
				printf("\n");
			}
			
			printf("\nPress any key to see the rows sum...\n\n");
			getch();
			
			for(row=0; row<r; row++){
				sum=0;
				for(column=0; column<c; column++){
					if(column>0){
						printf("+ ");
					}
					printf("[%d] ", arr[row][column]);
					sum=sum+arr[row][column];
				}
				printf("=> %d\n",sum);
			}
			
			printf("\nPress any key to see the column sum...\n\n");
			getch();
			
			for(row=0; row<r; row++){
				for(column=0; column<c; column++){
					printf("[%d] ", arr[row][column]);
				}
				printf("\n");
			}
			printf("\n---------------\n\n");
			
			for(column=0; column<c; column++){
				sum=0;
				for(row=0; row<r; row++){
					if(row>0){
						printf("+ ");
					}
					printf("[%d] ", arr[row][column]);
					sum=sum+arr[row][column];
				}
				printf("=> %d\n",sum);
			}
		}
	
		printf("\nDo You Want To Continue(Y/N)? ");
		scanf(" %c", &ch);
			
	}while(ch=='y' || ch=='Y');
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END ---*   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

