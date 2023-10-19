//wap  to find lenth without using inbuilt function
#include <stdio.h>
int stringLength(const char *str) {
    int length = 0;
    
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char input_string[100];
    printf("Enter a string: ");
    scanf("%s", input_string); 
    int length = stringLength(input_string);
    printf("Length of the string: %d\n", length);
    
    return 0;
}

