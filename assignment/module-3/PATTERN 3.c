//PATTERN 3
	  *
	* * *	      
      * * * * *  
  * * * * * * * * *	  
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=9;i++)
	{
		for(j=9;j>i;j--)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ",k);
		}
		printf("\n");
	}
}
