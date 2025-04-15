#include<stdio.h>
#include<conio.h>
int main(){
	int ctr=1;
	do{
		if(ctr%5==0){
			ctr++;
			continue;
		}
		printf("\n%d",ctr);
		ctr++;
	}while(ctr<20);
	
	return 0;
}
