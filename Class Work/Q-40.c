#include<stdio.h>
#include<conio.h>
int main(){
	int num,rev;
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see the reverse Number...");
	getch();
	
	printf("\n\nReverse=");
	
	while(num > 0){
		rev=num%10;
		printf("%d",rev);
		num=num/10;
	}
	
	return 0;
}
