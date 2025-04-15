#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,ctr=1;
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see Table...");
	getch();
	
	while(ctr<=10){
		printf("\n%d X %d = %d",num,ctr,ctr*num);
		ctr++;
	}
	
	return 0;
}
