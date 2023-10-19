//WAP to make addition, Subtraction and multiplication of two matrix using2-D Array
#include <stdio.h>
int main() {
    int i, j, k;
    int array1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int array2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };

    int sum[3][3];
    int product[3][3];
    int difference[3][3];
    // Matrix addition
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            sum[i][j] = array1[i][j] + array2[i][j];
        }
    }
    // Matrix subtraction
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            difference[i][j] = array1[i][j] - array2[i][j];
        }
    }

    // Matrix multiplication
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            product[i][j] = 0;
            for (k = 0; k < 3; k++) {
                product[i][j] += array1[i][k] * array2[k][j];
            }
        }
    }

    printf("Matrix Sum:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    printf("Matrix Difference:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", difference[i][j]);
        }
        printf("\n");
    }

    printf("Matrix Product:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}

     


