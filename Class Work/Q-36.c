#include<stdio.h>
int main(){
    
    int num,ctr;
    
    printf("Enter Any Number to check Prime or Not: ");
    scanf("\n%d",&num);
    
    printf("\nPress any key to see result...");
    getchar();
    getchar();
    
    for(ctr=2; ctr<num; ctr++){
        if(num%ctr==0){
            printf("\nNUmber is Not Prime");
            break;
        }
    }
    
    if(ctr==num){
        printf("\nNumber is Prime");
    }
    
    return 0;
}
