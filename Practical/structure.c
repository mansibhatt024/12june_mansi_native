#include<stdio.h>
struct stdata{
	int no;
	char name[10];
}obj;
int main()
{
	printf("enter your roll no: ");
	scanf("%d",&obj.no);
	printf("enter your name: ");
	scanf("%s",&obj.name);
	printf("\nyour roll no is: %d",obj.no);
	printf("\nyoue name is: %s",obj. name);
	return 0;
	}
