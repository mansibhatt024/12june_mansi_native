#include<stdio.h>
#include<string.h>
int main()
{
	char str[20];
	printf("enter the string:");
	scanf("%s",&str);
	strrev(str);
	printf("\n your reverse string is:%s",str);
	return 0;
}
