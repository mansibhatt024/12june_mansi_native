#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[15];
	printf("enter a string:");
	scanf("%s",&str);
	len=strlen(str);
	printf("length of the your string is:%d",len);
	return 0;
}
