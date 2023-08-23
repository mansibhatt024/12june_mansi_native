//wap to print table up to given numbers
#include<stdio.h>
int main()
{
	int n,i;
	printf("enter an integer:");
	scanf("%d", &n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",i,n,n*i);
	}
}
