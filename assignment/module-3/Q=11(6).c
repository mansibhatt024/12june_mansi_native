//sum  of odd numbers
#include<stdio.h>
int main()
{
	int i,array[10],sum=0;
	 printf("Enter any 10 array elements: ");
    for(i=0; i<10; i++)
        scanf("%d", &array[i]);
    printf("\nAll Even Array elements are:\n");
    for(i=0; i<10; i++)
    {
        if(array[i]%2!=0)
        {
            printf("%d ", array[i]);
            sum+=array[i];
        }
    }
    printf("\nsum of even number is:%d",sum);
}
