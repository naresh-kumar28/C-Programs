#include<stdio.h>
int main(){
    
    int fnum,snum;
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
    
    //swapping two number without using third Variable
    
    fnum=fnum+snum;
    snum=fnum-snum;
    fnum=fnum-snum;
    
    printf("\n\nAfter Swap: ");
    printf("\nYour First No: %d",fnum);
    printf("\nYour Second No: %d",snum);
    
    return 0;
}
