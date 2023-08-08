#include<stdio.h>
#include<string.h>
int main()
{
	char str1[20],str2[20];
	printf("enter the first string:");
	scanf("%s",&str1);
	strcpy(str2,str1);
	printf("\nyour second string is:%s",str2);
	return 0;
}
