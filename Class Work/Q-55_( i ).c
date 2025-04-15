#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[50],ch;
	int ctr;
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t       PROGRAM TO FIND LENGTH OF STRINGS    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	while(1){
		ctr=0;
		
		printf("\nEnter Your Name: ");
		gets(name);
		
		while(name[ctr]!='\0'){
			ctr++;
		}
		
		printf("\nTotal Length= %d",ctr);
	
		printf("\n\nDo You Want To Continue(Y/N)? ");
		scanf(" %c", &ch);
		getchar();
	
		if(ch!='y' && ch!='Y'){
			break;
		}
	}
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
	
	return 0;
}

