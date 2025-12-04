#include <stdio.h>
#include <ctype.h> // Include ctype.h for isupper, islower, isdigit functions

/*
 * Program: Character Type Counter
 * Description: Reads characters input by the user until a '*' is entered.
 * It counts the number of uppercase letters, lowercase letters,
 * and digits entered.
 */

int main() {
    char ch;
    int upperCount = 0;
    int lowerCount = 0;
    int digitCount = 0;

    printf("Enter characters (type '*' to finish):\n");

    // Loop indefinitely until explicitly broken
    while (1) {
        // Read a single character
        scanf(" %c", &ch); 
        // Note: The space before %c tells scanf to skip leading whitespace 
        // (like newlines from pressing enter). If you want to count spaces/newlines 
        // as well, remove the space before %c.

        // Check for termination character first
        if (ch == '*') {
            break;
        }

        // Check character types
        if (isupper(ch)) {
            upperCount++;
        }
        else if (islower(ch)) {
            lowerCount++;
        }
        else if (isdigit(ch)) {
            digitCount++;
        }
    }

    // Print the results
    printf("\n--- Results ---\n");
    printf("Uppercase letters: %d\n", upperCount);
    printf("Lowercase letters: %d\n", lowerCount);
    printf("Numbers (digits):  %d\n", digitCount);

    return 0;
}