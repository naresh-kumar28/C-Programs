#include<stdio.h>
#include<conio.h>

int arr[10];
int ctr, search, found=0;

void top();
void data();
void showdata();
void searching();
void find();
void buttom();

int main(){
	
	top();
	data();
	showdata();
	searching();
	find();
	buttom();
	
	return 0;
}

void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t         PROGRAM TO FIND AN ELEMENT IN ARRAY     \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void data(){
	for(ctr=0; ctr<10; ctr++){
		printf("Enter The Elements of arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
}

void showdata(){
	printf("\n\nPress any key to see the arr data...");
	getch();
	printf("\n");
	
	for(ctr=0; ctr<10; ctr++){
		printf("\nElement of arr[%d]: %d",ctr,arr[ctr]);
	}
}

void searching(){
	printf("\n\nEnter any number to find in vector: ");
	scanf("%d",&search);
	
	for(ctr=0; ctr<10; ctr++){
		if(search==arr[ctr]){
			found++;
		}
	}
}

void find(){
	
	if(found>0){
		printf("\n%d is Found Here!",search);
		
		printf("\n\nPress any key to see the position...");
		getch();
		printf("\n\n");
				
		for(ctr=0; ctr<10; ctr++){
			if(search==arr[ctr]){
				printf("\nPosition of arr[%d]: %d",ctr,arr[ctr]);
			}
		}
		printf("\n\nPress any key to see the Occurance...");
		getch();
		
		printf("\n\nTotal Occurance: %d",found);
	}
	
	else{
		printf("%d is Not Found Here!",search);
	}
}

void buttom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}
