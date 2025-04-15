#include<stdio.h>
#include<conio.h>
int main(){
	
	int ctr;
	
	for(ctr=1; ctr<=20; ctr++){
		
		if(ctr%5==0)
			continue;
			printf("\n%d",ctr);
	}
	
	return 0;
}
