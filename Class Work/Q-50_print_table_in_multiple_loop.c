#include<stdio.h>

int main(){
	
	int num, ctr, choice;
	char ch;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t      PRINT TABLE IN FOR, WHILE, DO WHILE LOOP    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	while(1){
		ctr=1;
	
		printf("\nEnter Any No: ");
	    scanf("%d",&num);
	    
	    printf("\nChoose the loop for table printing:\n");
	    printf("1. For Loop\n2. While Loop\n3. Do-While Loop\n");
	    printf("\nEnter your choice (1/2/3): ");
	    scanf("%d", &choice);
	    
	    if(choice==1){
	        
	        for(ctr=1; ctr<=10; ctr++){
	            printf("\n%d x %d = %d", num, ctr, num*ctr);
	        }
	    }
	    
	    else if(choice==2){
	        
	        while(ctr<=10){
	          printf("\n%d x %d = %d", num, ctr, num*ctr);
	          ctr++;
	        }
	    }
	    
	    else if(choice==3){
	        
	        do{
	            printf("\n%d x %d = %d", num, ctr, num*ctr);
	            ctr++;
	        }while(ctr<=10);
	    }
	    
	    else{
	        printf("\nInvalid Choice");
	    }
	    
	    printf("\n\nDo You Want Continue(Y/N)? ");
	    scanf(" %c", &ch);
    
	    if(ch!='y' && ch!='Y')
	    break;       
	}
        
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END ---*   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}

