#include <stdio.h>

/*
 * Module 2, Q2: Factorial of a number using do-while loop.
 */

int main() {
    int n, originalN;
    long long factorial = 1; // Use long long for larger results

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    originalN = n;

    // Handle negative input
    if (n < 0) {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    } else {
        // do-while loop implementation
        do {
            if (n == 0) break; // Factorial of 0 is 1
            factorial *= n;
            n--;
        } while (n > 0);

        printf("Factorial of %d is: %lld\n", originalN, factorial);
    }

    return 0;
}