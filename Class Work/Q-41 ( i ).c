#include<stdio.h>
#include<conio.h>
int main(){
	int num,remndr,sum=0;
	
	printf("\nEnter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see the sum...");
	getch();
	
	while(num > 0){
		remndr=num%10;
		sum=sum+remndr;
		num=num/10;
	}
	
	printf("\n\nSum=%d",sum);
	
	return 0;
}
