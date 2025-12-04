#include <stdio.h>

/*
 * Module 2, Q3: Demonstration of goto statement.
 * This program checks if a number is even or odd using goto labels.
 */

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Check condition and jump to appropriate label
    if (num % 2 == 0) {
        goto even_label;
    } else {
        goto odd_label;
    }

even_label:
    printf("%d is an Even number.\n", num);
    // Jump to the end to skip the odd_label section
    goto end_label; 

odd_label:
    printf("%d is an Odd number.\n", num);

end_label:
    printf("Program finished.\n");

    return 0;
}