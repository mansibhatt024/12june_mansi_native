//wap to reverse string using recursion
#include<stdio.h>
void reverseSentence() {
    char c = getchar();
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
int main()
{
	printf("Enter a sentence: ");
	reverseSentence();
	return 0;
}
