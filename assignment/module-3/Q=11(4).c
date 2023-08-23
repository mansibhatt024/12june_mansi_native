//how many odd numbers are there
#include <stdio.h>
int main() {
    int i, array[10], oddCount = 0;

    printf("Enter any 10 array elements: ");
    for (i = 0; i < 10; i++)
        scanf("%d", &array[i]);

    printf("\nAll odd Array elements are:\n");
    for (i = 0; i < 10; i++) {
        if (array[i] % 2 != 0) {
            printf("%d\n", array[i]);
            oddCount++; // Increment the count of odd numbers
        }
    }
    printf("Number of odd numbers: %d\n", oddCount);
    return 0;
}

