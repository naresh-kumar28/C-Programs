#include<stdio.h>
#include<conio.h>
int main(){
	int num,temp,remndr,rev=0;
	
	printf("Enter Any Number To check palindrone or Not: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see result...");
	getch();
	
	temp=num;
	
	while(num>0){
		remndr=num%10;
		rev=rev*10+remndr;
		num=num/10;
	}
	if(rev==temp){
		printf("\n\nPalindrone Fonud");
	}
	else
		printf("\nNot Palindrone Found");
	
	
	return 0;
}
