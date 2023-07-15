#include<stdio.h>
#define PI 3.14
int main()
{

     // declare variables
     float radius, area;

     // take input
     printf("Enter Radius of Circle(in cm): ");
     scanf("%f",&radius);

     // calculate area
     area = PI * radius * radius;

     // display result
     printf("Area of Circle = %f cm\n",area);

     return 0;
 }
