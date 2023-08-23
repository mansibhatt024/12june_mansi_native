//swap two number without third variable
#include<stdio.h>
int main()
{
  	int a,b;
  	printf("enter the value of a and b is:");
  	scanf("%d%d", &a,&b);
  	a=a+b;
  	b=a-b;
  	a=a-b;
  	printf("\na=%d", a);
  	printf("\nb=%d", b);
  	return 0;
}
