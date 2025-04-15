#include<stdio.h>
#include<conio.h>
int main() {
    int r,c,ctr,ctr1;
    
    printf("\nEnter The Number of rows: ");
    scanf("%d",&r);
    printf("\nEnter The Number Of Colums: ");
    scanf("%d",&c);
    
    int arr[r][c];
    
    printf("\nYour Rows And Column->[%d][%d]: \n",r,c);
    
    for(ctr=0; ctr<r; ctr++){
        for(ctr1=0; ctr1<c; ctr1++){
            printf("\nEnter data arr[%d][%d]: ",ctr,ctr1);
            scanf("%d",&arr[ctr][ctr1]);
        }
    }
    printf("\n");
    
    printf("\nPress any key to see your data...\n\n");
    getch();

    for(ctr=0; ctr<r; ctr++){
        for(ctr1=0; ctr1<c; ctr1++){
            printf("%d ",arr[ctr][ctr1]);
        }
        printf("\n");
    }
    return 0;
}
