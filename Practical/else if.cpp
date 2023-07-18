#include<stdio.h>
int main()
{
	int num;
	printf("enter the value of no to check whether it's positive or negative");
	scanf("%d",&num);
	if(num>0)
	{
		printf("%d is positive number" ,num);
	}
	else if(num == 0)
	{
		printf("%d is neutral",num);
	}
	else{
		printf("%d is negative number" ,num);
	}
}
