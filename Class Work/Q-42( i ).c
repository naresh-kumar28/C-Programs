#include<stdio.h>
#include<math.h>
#include<time.h>

int main(){
    int num, temp, digit, sum;
    char ch;
    
printf("\t\t\t\t\t--------------------------------------------------\n");
printf("\t\t\t\t\t      WELCOME TO THE ARMSTRONG NUMBER CHECKER    \n");
printf("\t\t\t\t\t--------------------------------------------------\n\n");
    
    while(1){
        sum=0;
        time_t start,end;
        double time;
        start=clock();
        
        up:    
        printf("\n\nEnter Any Number: ");
        scanf("%d",&num);
        temp=num;  
        
        if(num<10){
            printf("\nEnter Multiple Digit Number...");
            goto up;
        }
            
        do{
            digit=num%10;
            sum=(digit*digit*digit)+sum;
            num=num/10;
        }while(num>0);
            
        if(sum==temp){
            printf("\nYes, Armstrong Number");
        }
        else{
            printf("\nNot, Armstrong Number");
        }
            
        end=clock();        
        time = (double) (end-start) / CLOCKS_PER_SEC / 1000;
        printf("\nProgram Executed in: %f Seconds", time);
        
        printf("\n\nDo You Want to continue(Y/N)?: ");
        scanf(" %c",&ch);
        
        if(ch!='y' && ch!= 'Y')
        break;
    }
    
printf("\n\n\n\t\t\t\t\t-------------------------------------------------------\n");
printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
printf("\t\t\t\t\t-------------------------------------------------------\n\n");

    return 0;
}

