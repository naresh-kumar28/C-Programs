#include<stdio.h>
int main(){
    
    int fnum,snum,temp;
    
    printf("Enter First No: ");
    scanf("%d",&fnum);
    printf("\nEnter Second No: ");
    scanf("%d",&snum);
    
    printf("\nPress any key to see result...");
    getchar();
    getchar();
    
    printf("\nBefore Swap: ");
    printf("\nYour First No: %d",fnum);
    printf("\nYour Second No: %d",snum);
    
   // Swaping two Variable using third variable
   
   temp=fnum;
   fnum=snum;
   snum=temp;
   
    printf("\n\nAfter Swap: ");
    printf("\nYour First No: %d",fnum);
    printf("\nYour Second No: %d",snum);
    
    return 0;
}
