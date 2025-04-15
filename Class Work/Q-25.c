#include<stdio.h>
#include<conio.h>
int main(){
	
	int num,i=1,j=10;
	
	printf("\nEnter Any Number: ");
	scanf("%d",&num);
	printf("\nPress any key to see Table...");
	getch();
	
	ascending:
		printf("\n%dx%d=%d",num,i,num*i);
		i++;
	if(i<=10){
		goto ascending;
	}
	
	printf("\nPress any key to see Descending Table...");
	getch();
	descending:
		printf("\n%dx%d=%d",num,j,num*j);
		j--;
	if(j>=1){
		goto descending;
	}
	
	return 0;
}
