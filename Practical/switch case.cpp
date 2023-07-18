//wap to take calculator
#include<stdio.h>
int main()
{
	int ch,a,b;
	printf("enter the value of a and b is:");
	scanf("%d%d", &a,&b);
	printf("\n1.addition\n2.subtraction\n3.multiplication\n4.divison");
	printf("\nenter your choice");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			printf("\naddition of a and b is: %d", a+b);
			break;
		case 2:
		    printf("\nsubstraction of a and b is: %d", a-b);
		    break;
		case 3:
		    printf("\nmultiplication of a and b is: %d", a*b);
			break;
		case 4:
		    printf("\ndivison of a and b is: %d", a/b);
		    break;
		default:
			printf("\nenter valid choice");
			break;
			     
	}
	return 0;
}
