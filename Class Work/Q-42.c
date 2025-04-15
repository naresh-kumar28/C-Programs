#include<stdio.h>
#include<conio.h>
int main(){
	int num,temp,remndr,sum=0;
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see the armstrong number...");
	getch();
	
	temp=num;
	
	while(num>0){
		remndr=num%10;
		sum=(remndr*remndr*remndr)+sum;
		num=num/10;
	}
	if(sum==temp){
		printf("\n\nArmstrong Number: %d",temp);
	}
	else{
		printf("\n\nNot Armstrong Number: %d",temp);
	}
	return 0;
}
