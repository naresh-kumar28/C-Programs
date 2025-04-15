#include<stdio.h>
#include<conio.h>
int main(){
	
	int daysno;
	
	printf("Enter Days No (1-7): ");
	scanf("%d",&daysno);
	
	printf("\nPress any key to see Days Name: ");
	getch();
	
	switch(daysno)
	{
		case 1:
			printf("\nMonday");
		break;
		
		case 2:
			printf("\nTuesday");
		break;
		
		case 3:
			printf("\nWednesday");
		break;
		
		case 4:
			printf("\nThursday");
		break;
		
		case 5:
			printf("\nFriday");
		break;
		
		case 6:
			printf("\nSaturday");
		break;
		
		case 7:
			printf("\nSunday");
		break;
		
		default:
			printf("\nInvalid Day");
	}
	
	
	return 0;
}
