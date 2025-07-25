#include<stdio.h>
#include<conio.h>

void top();
int strlength(char[]);
void bottom();

int main(){

	char name[50];
	int len;
	
	top();
	
	printf("Enter Your Name: ");
	gets(name);
	
	printf("\nPress any key to see the string length..");
	getch();
	
	len=strlength(name);
	
	printf("\n\nYour String Length: %d",len);
	
	bottom();

	return 0;
}

void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO FIND THE STRING LENGTH      \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}

int strlength(char name[50]){
	int ctr=0;
	
	while(name[ctr]!='\0'){
		ctr++;
	}
	
	return ctr;
}
