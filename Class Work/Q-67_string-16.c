#include<stdio.h>
#include<conio.h>

int main(){
	
	char name[50], name1[50];
	int len=0, rev, i=0, ctr=0, flag=0; 

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t   PROGRAM TO CHECK STRING IS PALINDRONE OR NOT    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	printf("Enter Any String: ");
	gets(name);
	
	while(name[len]!='\0'){
		len++;
	}
	
	for(rev=len-1; rev>=0 ; rev--){
		
		name1[i]=name[rev];
		i++;
	}
	
	while(name[ctr]!='\0' || name1[ctr]!='\0'){
		
		if(name[ctr] != name1[ctr]){
			flag=1;
			break;
		}
		ctr++;
	}
	
	printf("\n\nPress any key to check String is Palindrone or not...");
	getch();
	
	if(flag==1){
		
		printf("\n\nNot, Palindrone String");
		printf("\n\n%s != %s",name,name1);
	}
	
	else{
		printf("\n\nYes, Palindrone String");
		printf("\n\n%s == %s",name,name1);
	}
		
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");

	return 0;
}
