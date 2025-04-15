#include<stdio.h>
#include<conio.h>
int main(){
	
	int arr[5];
	int*ptr;
	
	arr[0]=10;
	arr[1]=20;
	arr[2]=30;
	arr[3]=40;
	arr[4]=50;
	
	ptr=arr;
	
	printf("\nBy Name value print...");
	printf("\nThe value of arr[0]=%d",arr[0]);
	printf("\nThe value of arr[1]=%d",arr[1]);
	printf("\nThe value of arr[2]=%d",arr[2]);
	printf("\nThe value of arr[3]=%d",arr[3]);
	printf("\nThe value of arr[4]=%d",arr[4]);
	
	printf("\n\nBy Address value print...");
	printf("\nThe value of arr[0]=%d",*(&arr[0]));
	printf("\nThe value of arr[0]=%d",*ptr);
	ptr++;
	printf("\nThe value of arr[0]=%d",*ptr);
	
	return 0;
}
