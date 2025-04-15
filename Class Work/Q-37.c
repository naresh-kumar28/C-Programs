#include<stdio.h>
int main(){
    
    int f=0, s=1, n, ctr, term;
    
    printf("Enter Number of Terms: ");
    scanf("%d",&term);
    
    printf("\nPress any key to see Fibonacci Number...");
    getchar();
    getchar();
    
    for(ctr=1; ctr<=term; ctr++){
        printf("%d ",f);
        n=f+s;
        f=s;
        s=n;
    }
    
    return 0;
}
