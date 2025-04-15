#include <stdio.h>
#include<conio.h>

int main() {
    int num, temp, count;
    char ch;
    
printf("\t\t\t\t\t--------------------------------------------------\n");
printf("\t\t\t\t\t          PROGRAM TO FIND NUMBER OF DIGIT    \n");
printf("\t\t\t\t\t--------------------------------------------------\n\n");  
  
    while(1){
        count=0;
        
        printf("\nEnter Any Number: ");
        scanf("%d",&num);
        
        temp=num;
        
        printf("\nPress any key to see the number of digit...");
        getch();
        
        while(num>0){
            num=num/10;
            count++;
        }
        printf("\n\nNumber of digit in %d = %d",temp,count);
        
        printf("\n\nDo you want continue(Y/N)?: ");
        scanf(" %c",&ch);
        
        if(ch!='y' && ch!='Y')
        break;
    }
printf("\t\t\t\t\t\t        ---* PROGRAM END ---*   ");    
printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
printf("\t\t\t\t\t-------------------------------------------------------\n\n");
    
    return 0;
}
