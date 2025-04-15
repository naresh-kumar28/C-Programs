#include<stdio.h>
#include<conio.h>
int main(){
	
	int ip,cp,count=0;
	
	printf("Enter IP: ");
	scanf("%d",&ip);
	printf("\nEnter CP: ");
	scanf("%d",&cp);
	printf("\nPress any key to see Range....");
	getch();
	
	for(ip; ip<=cp; ip++){
		if(ip%5==0){
			count++;
			continue;
		}
		printf("\n%d",ip);		
	}
	printf("\nTotal Factor of 5= %d",count);
	
	return 0;
}
