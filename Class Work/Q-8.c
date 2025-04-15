#include<stdio.h>
#include<conio.h>
int main(){
	
	int marks;
	char grade;
	
	printf("Enter Your Marks: ");
	scanf("%d",&marks);
	
	if(marks>100 || marks<0)
	printf("\nEnvalid Marks");
	else if(marks>=90)
	grade='A';
	else if(marks>=80)
	grade='B';
	else if(marks>=70)
	grade='C';
	else if(marks>=60)
	grade='D';
	else
	grade='F';
	
	printf("\nYour Grade: %c",grade);
	return 0;
}
