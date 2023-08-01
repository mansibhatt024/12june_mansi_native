//GO TO
#include<stdio.h>
int main()
{
	int i,num,flag=0;
	printf("enter a number: ");
	scanf("%d",&num);
	
		for(i=2;i<num;i++)
		{
			if (num%i==0)
			{
				flag=1;
				goto  prime;
			}
			prime:
		if (flag==0)
		{
			printf("%d is prime number.",num);
		}
		else
		{
			printf("%d is not prime.",num);
		}
		
		}
}
