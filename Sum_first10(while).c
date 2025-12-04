#include <stdio.h>

/*
 * Module 2, Q5: Sum of first ten natural numbers using a while loop.
 */

int main() {
    int i = 1;
    int sum = 0;

    // Loop from 1 to 10
    while (i <= 10) {
        sum = sum + i;
        i++; // Increment counter
    }

    printf("The sum of the first 10 numbers (1 to 10) is: %d\n", sum);

    return 0;
}