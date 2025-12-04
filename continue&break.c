#include <stdio.h>

/*
 * Module 2, Q4: Usage of break and continue statements.
 * Loop from 1 to 10.
 * - SKIP printing '5' using 'continue'.
 * - STOP the loop entirely when we reach '8' using 'break'.
 */

int main() {
    int i;

    printf("Loop start:\n");

    for (i = 1; i <= 10; i++) {
        
        // Example of CONTINUE: Skip number 5
        if (i == 5) {
            printf("(Skipping 5 using continue)\n");
            continue; // Jumps to the next iteration (i=6) immediately
        }

        // Example of BREAK: Stop loop at 8
        if (i == 8) {
            printf("(Breaking loop at 8)\n");
            break; // Exits the for loop entirely
        }

        printf("%d ", i);
    }

    printf("\nLoop terminated.\n");

    return 0;
}