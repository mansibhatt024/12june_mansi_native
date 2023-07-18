#include<stdio.h>
#include<math.h>
#define pi 3.14
int main()
{
	int r;
	float area;
	printf("enter the radius of the circle: ");
	scanf("%d", &r);
	area = pi* pow ((float)r, 2);
	printf("\narea of the circle is: %f",area);
	return 0;
}
