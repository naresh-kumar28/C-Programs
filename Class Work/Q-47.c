#include <stdio.h>
#include <conio.h>

int main() {
    int row, col, ctr1, ctr2, find, count = 0;

    printf("\t\t\t\t--------------------------------------------------\n");
    printf("\t\t\t\t      PROGRAM TO FIND A NUMBER IN A 2D ARRAY    \n");
    printf("\t\t\t\t--------------------------------------------------\n\n");

    printf("Enter the number of rows in the 2D array: ");
    scanf("%d", &row);
    printf("Enter the number of columns in the 2D array: ");
    scanf("%d", &col);

    int arr[row][col];

    printf("\nNow, enter the elements of the %d x %d array:\n\n", row, col);

    for (ctr1 = 0; ctr1 < row; ctr1++) {
        for (ctr2 = 0; ctr2 < col; ctr2++) {
            printf("Enter the element at arr[%d][%d]: ", ctr1, ctr2);
            scanf("%d", &arr[ctr1][ctr2]);
        }
    }

    printf("\nPress any key to continue...");
    getch();

    printf("\n\nEnter a number to search: ");
    scanf("%d", &find);

    for (ctr1 = 0; ctr1 < row; ctr1++) {
        for (ctr2 = 0; ctr2 < col; ctr2++) {
            if (find == arr[ctr1][ctr2]) {
                printf("\n%d is found at position [%d][%d]", find, ctr1, ctr2);
                count++;
            }
        }
    }

    if (count > 0) {
        printf("\n\nNumber found %d times in the array.", count);
    } else {
        printf("\n\nNumber not found in the array.");
    }

    printf("\n\n\t\t\t\t        ---* PROGRAM END *---   ");
    printf("\n\n\t\t\t\t-------------------------------------------------------\n");
    printf("\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
    printf("\t\t\t\t       *** Thank You for Using This Program! ***      \n");
    printf("\t\t\t\t-------------------------------------------------------\n\n");

    return 0;
}

