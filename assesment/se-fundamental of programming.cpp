//create an application that can perform all string related operations.
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include<ctype.h>
int main() {
	
    int ch, a, b;
    int continuechoice=1;
    int num, originalNum, reversedNum = 0, remainder;
    int count=0;
	char sentence[100];
		    int vowels = 0, consonants = 0;
	char sent[120];
            int blanks = 0, digits = 0;	
	while(continuechoice){
    printf("\nmain menu\n1.reverse string\n2.Concatenation\n3.Palindrome \n4.Copy a string \n5.Length of the string\n6.Frequency of character in a string\n7.Find the number of vowels and consonants\n8.Find the number of blank spaces and digits");
    printf("\nEnter your choice:");
    scanf("%d", &ch);
    

    switch (ch) {
        case 1: 
			    int i;
	            char str[20];
	            printf("Enter the string: ");
	            scanf("%s", str);
	            strrev(str);
	            printf("\nYour reversed string is: %s", str);
	            break;
        case 2:
				char fnm[20],lnm[20];
				printf("enter your first name: ");
				scanf("%s",&fnm);
				printf("enter your last name: ");
				scanf("%s",&lnm);
				strcat(fnm,lnm);
				printf("\nyour full name is: %s",fnm);
			    break;

        case 3: 
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
	            break;
        case 4:
            	char str1[20],str2[20];
             	printf("enter the first string:");
            	scanf("%s",&str1);
            	strcpy(str2,str1);
            	printf("\nyour second string is:%s",str2);
            	break;    	
        case 5:
		    	int len;
              	char stpr[30];
             	printf("enter a string:");
            	scanf("%s",&stpr);
	            len=strlen(stpr);
              	printf("length of the your string is:%d",len);
				break; 
		case 6: 
		        char strf[150], ch;
			    printf("Enter a string: ");
			    scanf("%s", strf);
			     fgets(strf, sizeof(strf), stdin);
			    printf("Enter a character to find its frequency: ");
			    scanf("  %c", &ch);
			    for (int i = 0; strf[i] != '\0'; ++i) {
			        if (ch == strf[i])
			            ++count;
			    }
			    printf("Frequency of %c = %d", ch, count);
			    break;
	    case 7:
			    printf("Enter a sentence: ");
			    scanf("%d",&sentence);
			    fgets(sentence, sizeof(sentence), stdin);
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
	            break;
			 
        case 8:
	            printf("Enter a sentence: ");
	            scanf("%d",&sentence);
			    fgets(sentence, sizeof(sentence), stdin);
			    for (int i = 0; i < strlen(sentence); i++) {
			        if (isspace(sentence[i])) {
			            blanks++;
			        } else if (isdigit(sentence[i])) {
			            digits++;
			        }
			    }
			    printf("Number of blank spaces: %d\n", blanks);
			    printf("Number of digits: %d\n", digits);
			    break;
		case 9:
			printf("Exiting the program...\n");
            continuechoice = 0; 
			break;	    
	    default:
		    printf("\n enter valid choice:");
		    break;
		}
		 if (continuechoice) {
            printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
            scanf("%d", &continuechoice);
        }
			}
    return 0;
}

