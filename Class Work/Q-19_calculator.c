#include<stdio.h>
#include<conio.h>
int main(){
	
	char op,choice;
	int fnum,snum,result;
	
	do{
	
		printf("\nEnter First  No: ");
		scanf("%d",&fnum);
		getchar();
		printf("\nChoose Operator( + - * / ): ");
		scanf("%c",&op);
		printf("\nEnter Second No: ");
		scanf("%d",&snum);
		printf("\nPress any key to see calculation...");
		getch();
		
		switch(op){
			case '+':
				result=fnum+snum;
				break;
			case '-':
				result=fnum-snum;
				break;
			case '*':
				result=fnum*snum;
				break;
			case '/':
				if(snum==0){
					printf("\nError: Division by zero");
					continue;
				}
				else
				result=fnum/snum;
				break;
			default:
				printf("\nInvalid Operator");
				continue;
		}
		printf("\nResult: %d",result);
		printf("\nDo you want continue(y/n): ");
		choice=getch();
	}while(choice=='y' || choice=='Y');
	printf("\nExiting The Calculation: ");
		
	return 0;
}
