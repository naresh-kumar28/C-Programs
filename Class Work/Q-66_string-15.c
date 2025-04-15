#include<stdio.h>
#include<conio.h>

int main(){
	char name[50], name1[50];
	int ctr=0, flag=0;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t   PROGRAM TO CHECK BOTH STRING ARE SAME OR NOT    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter First String: ");
	gets(name);

	printf("\nEnter Second String: ");
	gets(name1);
	
	printf("\nPress any key to check both string are same or not...");
	getch();
	
	while(name[ctr]!='\0' || name1[ctr]!='\0'){
		if(name[ctr]!=name1[ctr]){
			flag=1;
			break;
		}
		ctr++;
	}
	
	if(flag==1){
		printf("\n\nBoth String are not same");
	}
	else{
		printf("\n\nBoth String are same");
	}

	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}
