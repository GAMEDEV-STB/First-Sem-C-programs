#include <stdio.h>

/*
 * Module 3, Q3: Array operations (Sum Odd, Sum Even, Average).
 */

int main() {
    int A[100]; // Array declaration
    int n, i;
    int sumOdd = 0, sumEven = 0, totalSum = 0;
    float average;

    printf("Enter number of elements (N): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &A[i]);
        
        // Add to total sum immediately
        totalSum += A[i];

        // Check for even/odd
        if (A[i] % 2 == 0) {
            sumEven += A[i];
        } else {
            sumOdd += A[i];
        }
    }

    // Calculate average
    if (n > 0) {
        average = (float)totalSum / n;
    } else {
        average = 0.0;
    }

    printf("\n--- Results ---\n");
    printf("Sum of Odd numbers:  %d\n", sumOdd);
    printf("Sum of Even numbers: %d\n", sumEven);
    printf("Average of all:      %.2f\n", average);

    return 0;
}