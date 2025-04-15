#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[25];
	int ctr, length=0;
	
	puts("Enter Your Full Name: ");
	gets(name);
	
	printf("\nPress any key to see total number of vowel in your name...");
	getch();
	
	for(ctr=0; name[ctr]!='\0'; ctr++){
		
		if(name[ctr]=='a' || name[ctr]=='e' || name[ctr]=='i' || name[ctr]=='o' || name[ctr]=='u' || 
		name[ctr]=='A' || name[ctr]=='E' || name[ctr]=='I' || name[ctr]=='O' || name[ctr]=='U'){
			
			length++;
		}		
	}
	
	printf("\n\nTotal Vowel letter: %d",length);

	return 0;
}

