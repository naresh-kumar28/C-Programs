#include<stdio.h>
#include<conio.h>
int main(){
	
	int i,j,k;
	i=10,j=5,k=20;
	char ch='a';
	float f1=1.2;
	float f2=1.6;
	
	printf("The Value of i=%d",i);
	printf("\nThe Address of i=%u",&i);
	printf("\n\nThe value of j=%d",j);
	printf("\nThe Address of j=%u",&j);
	printf("\n\nThe value of k=%d",k);
	printf("\nThe Address of k=%u",&k);
	
	printf("\n\nThe value of ch=%c",ch);
	printf("\nThe Address of ch=%u",&ch);
	printf("\n\nThe value of f1=%.2f",f1);
	printf("\nThe Address of f1=%u",&f1);
	printf("\n\nThe value of f2=%.2f",f2);
	printf("\nThe Address of f2=%u",&f2);
	
	printf("\n\nThe value of i by name=%d",i);
	printf("\nThe value of i by Address=%d",*(&i));

	return 0;
}
