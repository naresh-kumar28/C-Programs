#include<stdio.h>
#include<conio.h>
int main(){
	
	int ctr=1;
	
	while(ctr<=20){
		if(ctr%5==0){
			ctr++;
			continue;		
		}
		printf("%d ",ctr);
		ctr++;	
	}

	return 0;
}
