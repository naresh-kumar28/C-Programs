#include<stdio.h>
int main(){
    int num, ctr, fact=1;
    
    printf("Enter Any Number to Find Factorial: ");
    scanf("%d",&num);
    
    printf("\nPress Enter to see the factorial...");
    getchar();
    getchar();
    
    for(ctr=1; ctr<=num; ctr++){
        fact = fact * ctr;
    }
    printf("The Factorial of %d is: %d\n", num, fact);
    
    return 0;
}

