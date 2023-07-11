#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of the two variable:");
	scanf("%d%d",&a,&b);
	printf("\nbitwise AND: %d", a&b);
	printf("\nbitwise OR: %d", a|b);
	printf("\nbitwise XOR: %d",a^b);
	printf("\nbitwise compliment: %d",~a);
	printf("\nbitwise shift left: %d",a<<b);
	printf("\nbitwise shift right: %d",a>>b);
	return 0;
}

