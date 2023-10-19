//WAP TO PRINT MAXIMUM NUMBER
#include<stdio.h>
int main()
{
	int a[5],i,max=0,min=0;
	printf("enter five value:");
	for(i=0;i<=4;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		else{
			min=a[i];
		}
    }
		printf("maximum value is : %d\n",max);
		printf("minimum value is: %d\n",min);
	
}
