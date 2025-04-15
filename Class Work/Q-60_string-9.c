#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {
    int ctr, count = 0;
    char name[50];

    printf("Please enter your full name: ");
    gets(name);

    printf("\nAnalyzing your name... Press any key to continue!\n");
    getch();

    for (ctr = 0; name[ctr] != '\0'; ctr++) {
        if (name[ctr] == ' ') {
            count++;
        }
    }

    printf("\n---* what we found about your name *----\n\n");

    if (count == 0)
        printf("You have entered-> only First Name:\n");
    else if (count == 1)
        printf("You have entered-> First Name & Last Name:\n");
    else
        printf("You have entered-> First Name, Middle Name, & Last Name:\n");


    return 0;
}

