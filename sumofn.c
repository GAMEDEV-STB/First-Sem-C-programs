#include <stdio.h>

/*
 * Module 2, Q1: Sum of natural numbers from 1 to N using for loop.
 */

int main() {
    int n, i, sum = 0;

    printf("Enter a positive integer N: ");
    scanf("%d", &n);

    // Using for loop to calculate sum
    for (i = 1; i <= n; i++) {
        sum = sum + i;
    }

    printf("Sum of natural numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}