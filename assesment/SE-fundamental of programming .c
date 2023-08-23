//create an application that can perform all string related operations.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

// Function to reverse a string
void reverseString() {
    char str[20];
    printf("Enter the string: ");
    scanf("%s", str);
    strrev(str);
    printf("\nYour reversed string is: %s", str);
}

// Function to concatenate two strings
void concatenateStrings() {
    char firstName[20], lastName[20];
    printf("Enter your first name: ");
    scanf("%s", firstName);
    printf("Enter your last name: ");
    scanf("%s", lastName);
    strcat(firstName, lastName);
    printf("\nYour full name is: %s", firstName);
}

// Function to check palindrome number
void checkPalindrome() {
    int num, originalNum, reversedNum = 0, remainder;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0) {
        remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }
    if (originalNum == reversedNum) {
        printf("%d is a palindrome number.\n", originalNum);
    } else {
        printf("%d is not a palindrome number.\n", originalNum);
    }
}

// Function to copy a string
void copyString() {
    char str1[20], str2[20];
    printf("Enter the first string: ");
    scanf("%s", str1);
    strcpy(str2, str1);
    printf("\nYour second string is: %s", str2);
}

// Function to find length of a string
void findStringLength() {
    char str[30];
    printf("Enter a string: ");
    scanf("%s", str);
    int len = strlen(str);
    printf("Length of your string is: %d\n", len);
}

// Function to find frequency of a character in a string
void findCharFrequency() {
    char str[150], ch;
    int count = 0;
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Enter a character to find its frequency: ");
    scanf(" %c", &ch);
    for (int i = 0; str[i] != '\0'; ++i) {
        if (ch == str[i])
            ++count;
    }
    printf("Frequency of %c = %d\n", ch, count);
}

// Function to find vowels and consonants
void findVowelsAndConsonants() {
    char sentence[120];
    int vowels = 0, consonants = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);
    for (int i = 0; i < strlen(sentence); i++) {
        if (isalpha(sentence[i])) {
            char lowerChar = tolower(sentence[i]);
            if (lowerChar == 'a' || lowerChar == 'e' || lowerChar == 'i' || lowerChar == 'o' || lowerChar == 'u') {
                vowels++;
            } else {
                consonants++;
            }
        }
    }
    printf("Number of vowels: %d\n", vowels);
    printf("Number of consonants: %d\n", consonants);
}

// Function to find blank spaces and digits
void findBlanksAndDigits() {
    char sentence[120];
    int blanks = 0, digits = 0;
    printf("Enter a sentence: ");
    scanf(" %[^\n]s", sentence);
    for (int i = 0; i < strlen(sentence); i++) {
        if (isspace(sentence[i])) {
            blanks++;
        } else if (isdigit(sentence[i])) {
            digits++;
        }
    }
    printf("Number of blank spaces: %d\n", blanks);
    printf("Number of digits: %d\n", digits);
}

int main() {
    int ch, continueChoice = 1;

    while (continueChoice) {
        printf("\nMain Menu\n");
        printf("1. Reverse String\n");
        printf("2. Concatenate Strings\n");
        printf("3. Check Palindrome\n");
        printf("4. Copy a String\n");
        printf("5. Find Length of a String\n");
        printf("6. Find Frequency of Character in a String\n");
        printf("7. Find Vowels and Consonants\n");
        printf("8. Find Blank Spaces and Digits\n");
        printf("9. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                reverseString();
                break;
            case 2:
                concatenateStrings();
                break;
            case 3:
                checkPalindrome();
                break;
            case 4:
                copyString();
                break;
            case 5:
                findStringLength();
                break;
            case 6:
                findCharFrequency();
                break;
            case 7:
                findVowelsAndConsonants();
                break;
            case 8:
                findBlanksAndDigits();
                break;
            case 9:
                printf("Exiting the program...\n");
                continueChoice = 0;
                break;
            default:
                printf("Enter a valid choice.\n");
                break;
        }

        if (continueChoice) {
            printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
            scanf("%d", &continueChoice);
        }
    }

    return 0;
}

