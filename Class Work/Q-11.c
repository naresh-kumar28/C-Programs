#include<stdio.h>
#include<conio.h>
int main(){
	char ch;
	
	printf("Find ASCII Value of any Charcter or Number");
	printf("\n\nEnter Any Charcter or Number: ");
	scanf("%c",&ch);
	
	//change charcter value in integer
	
	int ascii=(int)ch;
	
	printf("\nThe ASCII Value of '%c' = %d ",ch,ascii);
	
	if(ascii>=48 && ascii<=57){
		printf("\n%c is a Number:",ch);
	}
	else if(ascii>=65 && ascii<=90){
		printf("\n%c is Capital Letter:",ch);
	}
	else if(ascii>=97 && ascii<=122){
		printf("\n%c is Small Letter:",ch);
	}
	else{
		printf("\n%c is Special Charcter:",ch);
	}
	
	return 0;
}
