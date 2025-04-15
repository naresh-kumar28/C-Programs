#include<stdio.h>
#include<conio.h>
int main(){
    int arr[2][3];
    int r,c;
    
    for(r=0; r<2; r++){
        for(c=0; c<3; c++){
            printf("Enter data arr->[%d][%d]: ",r,c);
            scanf("%d",&arr[r][c]);
        }
    }
    printf("\n");
    
    printf("\nPress any key to see your data...\n\n");
    getch();
    
    for(r=0; r<2; r++){
        for(c=0; c<3; c++){
            printf("%d ",arr[r][c]);
        }
        printf("\n");
    }
    
    return 0;
}
