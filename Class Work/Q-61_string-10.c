#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(){

	char name[50],ch;
	int ctr, len;
	
	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t       PROGRAM TO PRINT STRING IN REVERSE ORDER    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	while(1){
		len=0;
		
		printf("\nEnter Your Name: ");
		gets(name);
		
		while(name[len]!='\0'){
			len++;
		}
		
		printf("\nReverse Name->");
		
		for(ctr=len-1; ctr>=0; ctr--){
			printf("%c",name[ctr]);
		}
		
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

