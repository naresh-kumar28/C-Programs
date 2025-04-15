#include<stdio.h>
#include<conio.h>
int main(){
    int num, temp, digit, sum;
    char choice;
    printf("\t\t__________*** FIND SUM OF ALL DIGIT ***_________");
    
    while(1){
		sum=0;
		
	    printf("\n\nEnter any number: ");
	    scanf("%d",&num);
	    temp=num;
	    
	    if(num<10){
	        printf("\nEnter Multiple digit number: ");
	        continue;
	    }
	    printf("\nPress any key to see the sum...");
	    getch();
	    
	    do{
	        digit=num%10;
	        sum=sum+digit;
	        num=num/10;
	    }while(num>0);
	    
	    printf("\n\nThe sum of all digit of %d = %d",temp,sum);
	    printf("\n\nDo you want to continue(Y/N)? ");
	    scanf(" %c",&choice);
	
		if(choice != 'Y' && choice != 'y')
    	break; 
    }
    
    printf("\n\nThis Program is Run By --> Naresh Kumar");
    printf("\n\n\t\t__________*** Thankyou ***_________\n\n");
    
    return 0;
}
