#include <stdio.h>

/*
 * Program: Transpose of a 3x3 Matrix
 * Description: Reads a 3x3 matrix from the user and prints its transpose.
 * The transpose is obtained by swapping rows and columns.
 */

int main() {
    int matrix[3][3], transpose[3][3];
    int i, j;

    // 1. Input the matrix elements
    printf("Enter elements of the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    // 2. Compute the transpose
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    // 3. Print the original matrix
    printf("\nOriginal Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    // 4. Print the transposed matrix
    printf("\nTranspose of Matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}