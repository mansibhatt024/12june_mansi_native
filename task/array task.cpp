#include<stdio.h>
int main()
{
	int i,count;
	printf("enter the size of the array: ");
	scanf("%d",&count);
	int array[count];
	for(i=0;i<count;i++)
	{
		printf("enter the value of array[%d]:" ,i);
		scanf("%d",&array[i]);
	}
	
}
