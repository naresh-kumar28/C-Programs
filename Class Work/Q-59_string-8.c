#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	int ctr, count=0;
	char name[25];
	
	printf("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to see the spaces in string...");
	getch();
	
	for(ctr=0; name[ctr]!='\0'; ctr++){
		if(name[ctr]==' '){
			count ++;
		}
	}
	
	printf("\nTotal Space: %d",count);

	return 0;
}

