#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	
	printf("Enter Any Charcter: ");
	scanf("%c",&ch);
	
	if(ch>=48 && ch<=57){
		printf("\n%c is Number",ch);
	}
	
	else if(ch>=65 && ch<=90){

		if(ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
			printf("\n%c is capital alphabet & vowel",ch);
		else
			printf("\n%c is capital alphaet & consonant",ch);
	}
	
	else if(ch>=97 && ch<=122){
		
		if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u')
			printf("\n%c is small alphabet & vowel",ch);
		else
			printf("\n%c is small alphaet & consonant",ch);
	}
	
	else
	printf("\n%c is special charcter",ch);
	
	return 0;
}
