#include<stdio.h>
#include<conio.h>

int main(){
	
	char data[50],copy[50],ch;
	int ctr;

	printf("\t\t\t\t\t--------------------------------------------------\n");
	printf("\t\t\t\t\t          PROGRAM TO COPY THE STRING    \n");
	printf("\t\t\t\t\t--------------------------------------------------\n\n");
	
	while(1){
		ctr=0;
	
		printf("\nEnter Your String: ");
		gets(data);
		
		printf("\nPress any key to see your string...");
		getch();
		
		printf("\n\nYour string is: %s",data);
		
		while(data[ctr]!='\0'){
			copy[ctr]=data[ctr];
			ctr++;
		}
		
		copy[ctr]='\0';
		
		printf("\n\nPress any key to see the copy string...");
		getch();
		
		printf("\n\nYour copy sting is: %s",copy);
	
		printf("\n\nDo You Want to continue(Y/N)? ");
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

