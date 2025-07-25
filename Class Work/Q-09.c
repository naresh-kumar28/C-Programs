#include<stdio.h>
#include<conio.h>
int main(){
	
	char ch;
	printf("\nEnter Any Vowel or Constant: ");
	scanf("%c",&ch);
	
	printf("\nPress any key to see result...");
	getch();
	
	if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
	 ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
		
		printf("\n\n%c is vowel Letter",ch);
	}
	else
		printf("\n\n%c is constant Letter",ch);
		
	return 0;
}
