//WAP  using switch case monday to sunday
#include<stdio.h>
int main()
{
	int week;
	printf("enter the week number");
	scanf("%c", &week);
	printf("\n1.monday\n2.tuesday\n3.wednesday\n4.thursday\n5.friday\n5.saturday\n6.sunday ");

	switch(week)
	{
	case 1:
		printf("monday");
		break;
	case 2:
	    printf("tuesday");
		break;
	case 3:
	    printf("wednesday");
		break;
		
	case 4:
	    printf("thursday");
		break;
		
	case 5:
	    printf("friday");
		break;
		
	case 6:
	    printf("saturday");
		break;
		
	case 7:
	    printf("sunday");
		break;
		default:
		printf("\n enter valid choice");
		break;	
	}
}
