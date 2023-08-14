#include <stdio.h>

// Function declaration with void return type
void greetUser(char name[]);

int main() {
    char userName[50];
    
    printf("Enter your name: ");
    scanf("%s", userName);
    greetUser(userName);
    
    return 0;
}
void greetUser(char name[]) {
    printf("Hello, %s! Welcome to the program!\n", name);
    return;
}

