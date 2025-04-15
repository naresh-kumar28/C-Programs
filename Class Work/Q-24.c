#include<stdio.h>
#include<conio.h>
int main(){
	
	int start,end;
	printf("Enter value start & End: ");
	scanf("%d %d",&start, &end);
	printf("\nPress any key to see Range...");
	getch();
	if(start<end){
		for(start; start<=end; start++){
			printf("\n%d",start);
		}
	}
	else if(start>end){
		for(start; start>=end; start--){
			printf("\n%d",start);
		}
	}
	else if(start==end){
		printf("\No Range Available");
	}
	
	return 0;
}
