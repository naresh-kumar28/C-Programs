//Q-5. write a Program to check local and global variable 

#include<stdio.h>
#include<conio.h>
int gvar=10; //Global variable

void first(){
	
	int first=20; //Local variable
	
	printf("\n\nThe first Value = %d",first); //Accessing Local variable in same function
	printf("\nThe Gvar Value = %d",gvar); //Accessing Global variable
}

void main(){
	
	int main=30; //Local variable in Main
	
	printf("\nThe main Value = %d",main);//Accessing Local variable in main function
	printf("\nThe Gvar Value = %d",gvar); //Accessing Global variable in main function
	first();
}
