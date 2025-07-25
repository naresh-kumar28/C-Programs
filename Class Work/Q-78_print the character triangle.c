#include<stdio.h>
#include<conio.h>

void printTriangle(char, int);
void top();
void bottom();

int main(){
	char ch;
	int height;
	
	top();
	
	printf("\nEnter a Charcter: ");
	scanf("%c",&ch);
	
	printf("\nEnter Height: ");
	scanf("%d",&height);

	printTriangle(ch,height);
	
	bottom();
	
	return 0;
}
void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t      PROGRAM TO PRINT THE CHARCTER TRIANGLE      \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void printTriangle(char ch, int height){
	int i, j;
	
	for(i=1; i<=height; i++){
		
		for(j=1; j<=i; j++){
		
			printf("%c",ch);
		}
		printf("\n");
	}
} 

void bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}

