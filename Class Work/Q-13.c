#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,ctr;
	
	printf("Enter Any Number: ");
	scanf("%d",&num);
	
	printf("\nPress any key to see Table...");
	getch();
	
	for(ctr=1; ctr<=10; ctr++){
		printf("\n%d X %d = %d",num,ctr,ctr*num);
	}
	
	return 0;
}
