//WAP TO SUM OF GIVEN NUMBER
#include<stdio.h>
int main()
{
    int num, sum = 0;
 
    num = 1532;
    printf("The number is = %d\n",num);

    while(num!=0){
        sum += num % 10;
        num = num / 10;
    }
 
    printf("Sum: %d\n",sum);
 
    return 0;}

