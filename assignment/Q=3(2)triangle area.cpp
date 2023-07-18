#include<stdio.h>
int main()
{
	int h,b;
	float area;
	printf("enter the value of h is:" );
	scanf("%d", &h);
	printf("\nenter the value of b is:");
	
	scanf("%d", &b);
	
	area= h*b/2;
	printf("\narea of triangle is: %f",area);
	return 0;
}
