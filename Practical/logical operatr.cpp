#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	if(!(a<0 || b>0))                 
	{
		printf("true");
	}
	else{
		printf("false");
	}
	return 0;
	
}
