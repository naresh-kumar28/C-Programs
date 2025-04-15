#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[25];
	int ctr;
	
	puts("Enter Your Name: ");
	gets(name);
	
	printf("\nPress any key to see the vertically name...");
	getch();
	
	for(ctr=0; name[ctr]!='\0';  ctr++){
		
		printf("\n%c",name[ctr]);
	}

	return 0;
}

