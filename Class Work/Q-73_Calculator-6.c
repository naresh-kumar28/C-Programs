#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int x, y;
int last_choice;

void top();
void bottom();
void menu();
void prtscn();

void add();
void sub();
void mul();
void divide();
void rem();
void ext();

int main(){
	
	top();
	menu();
	
	return 0;
}

void top(){
	
	printf("\n\t\t\t\t\t\t       CALCULATOR    \n");
	printf("\t\t\t\t\t\t------------------------\n");
}

void bottom(){
	
	printf("\n\n\t\t\t\t\t\t        ---* PROGRAM END *---   ");
	printf("\n\n\t\t\t\t\t-------------------------------------------------------\n");
	printf("\t\t\t\t\t       This Program is Created By --> Naresh Kumar     \n");
	printf("\t\t\t\t\t       *** Thank You for Using This Program! ***      \n");
	printf("\t\t\t\t\t-------------------------------------------------------\n\n");
}

void menu(){
	
	int choice;

	up:
		
	printf("\n  Main Menu: \n");
	printf("\n---------------------\n");
	
	printf("\n1. Addition");
	printf("\n2. Substraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");
	printf("\n5. Remainder");
	printf("\n6. Exit");
	
	printf("\n\nEnter Your Choice (1/2/3/4/5/6): ");
	scanf("%d",&choice);
	
	if(choice<1 || choice>6){
		printf("\ninvalid Choice! Please enter a valid choice");
		goto up;
	}
	
	last_choice=choice; //Save the Last operation
	
	if(choice==1){
		add();
	}
	
	else if(choice==2){
		sub();
	}
	
	else if(choice==3){
		mul();
	}
	
	else if(choice==4){
		divide();
	}
	
	else if(choice==5){
		rem();
	}     
	else{
		ext();
	}
	
	re:
	
	printf("\n\n---------------------");	
	printf("\n\n1.Back To Main Menu");
	printf("\n2.Continue The Same Program");
	printf("\n3.Exit The Program");
	
	printf("\n\nEnter Your Choice(1/2/3):");
	scanf("%d",&choice);
	
	if(choice<1 || choice>3){
		printf("\ninvalid Choice! Please enter a valid choice");
		goto re;
	}
			
	if(choice==1){
		menu();
	}
	
	else if(choice==2){
		
		if(last_choice == 1){
    		add();
		}
	    else if(last_choice == 2){
	        sub();
	    }
	    else if(last_choice == 3){
	        mul();
	    }
	    else if(last_choice == 4){
	        divide();
	    }
	    else if(last_choice == 5){
	        rem();
	    }
	    goto re; // repeat same menu after operation
	}
	
	else{
		ext();
	}
	
}

void prtscn(){
	
	printf("\n\nEnter Two Number (Seperated by space): ");
	scanf("%d %d", &x, &y);	
}

void add(){
	system("cls");
	
	top();
	printf("\n\t\t\t\t\t\t   -->> ADDITION <<--    \n");

	prtscn();
	
	printf("\n\nAddition: %d + %d = %d",x,y,x+y);
	
}

void sub(){
	system("cls");
	
	top();
	printf("\n\t\t\t\t\t\t -->> SUBSTRACTION <<--    \n");
	
	prtscn();
	
	printf("\n\nSubstraction: %d - %d = %d",x,y,x-y);
	
}

void mul(){
	system("cls");
	
	top();
	printf("\n\t\t\t\t\t\t -->> MULTIPLICATION <<--    \n");
	
	prtscn();
	   
	printf("\n\nMultiplication: %d * %d = %d",x,y,x*y);
	
}

void divide(){
	system("cls");
	
	top();
	printf("\n\t\t\t\t\t\t   -->> DIVISION <<--    \n");
	
	prtscn();
	
	if (y == 0) {
        printf("\nError: Division by zero is not allowed.\n");
	}
	
	else
	printf("\n\nDivision: %d / %d = %.2f",x,y,(float)x/y);
	
}

void rem(){
	system("cls");
	
	top();
	printf("\n\t\t\t\t\t\t   -->> REMAINDER <<--    \n");
	
	prtscn();
	
	if (y == 0) {
        printf("\nError: Division by zero is not allowed.\n");
	}
	
	else
	printf("\n\nRemainder: %d %% %d = %d",x,y,x%y);
	
}

void ext(){
	printf("\nThankyou for using this calculator...");
	bottom();
	
	exit(0);
}
