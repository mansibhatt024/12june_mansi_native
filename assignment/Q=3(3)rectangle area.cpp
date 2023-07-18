#include<stdio.h>
int main()
{
	int width,height,area;
	printf("enter the value of width:");
	scanf("%d", &width);
	printf("\nenter the value of height:");
	scanf("%d", &height);
	area = width*height;
	printf("\narea of rectangle is: %d",area);
	return 0;
	
}
