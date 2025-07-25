#include<stdio.h>
#include<conio.h>
	
int arr[10], cpy[10];
int ctr;
 
void top();
void arr_data();
void show_arr_data();
void copy_data();
void show_copy_data();
void bottom();

int main(){
	
	top();
	arr_data();
	show_arr_data();
	copy_data();
	show_copy_data();
	bottom();
	
	return 0;
}

void top(){
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t        PROGRAM TO COPY DATA FROM ONE ARRAY    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
}

void arr_data(){
	
	for(ctr=0; ctr<10; ctr++){
		printf("Enter The Elements of arr[%d]: ",ctr);
		scanf("%d",&arr[ctr]);
	}
}

void show_arr_data(){
	
	printf("\n\nPress any key to see the arr data...");
	getch();
	printf("\n");
	
	for(ctr=0; ctr<10; ctr++){
		printf("\nElement of arr[%d]: %d",ctr,arr[ctr]);
	}
}

void copy_data(){
	
	printf("\n\nPress any key to copy the data...");
	getch();
	
	for(ctr=0; ctr<10; ctr++){
		cpy[ctr]=arr[ctr];
	}
	
	printf("\n\nAll array elements have been copied successfully!..");
}

void show_copy_data(){
	
	printf("\n\nPress any key to see your copy data...");
	getch();
	
	printf("\n\nYour Copy Data Are...");
	printf("\n");
	
	for(ctr=0; ctr<10; ctr++){
		printf("\nElement of arr[%d]: %d",ctr,cpy[ctr]);
	}
}

void bottom(){
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}
