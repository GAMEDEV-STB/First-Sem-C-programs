#include <stdio.h>

/*
 * Program: Copy String
 * Description: Copies the content of one string (str1) to another (str2)
 * without using the library function strcpy().
 */

int main() {
    char str1[100], str2[100];
    int i;

    // 1. Input the source string
    printf("Enter the source string (str1): ");
    scanf("%s", str1);

    // 2. Copy str1 to str2
    // Iterate through str1 and assign each character to the corresponding index in str2
    for (i = 0; str1[i] != '\0'; ++i) {
        str2[i] = str1[i];
    }

    // 3. Important: Add the null terminator to the end of the destination string
    str2[i] = '\0';

    // 4. Output the result
    printf("Original String: %s\n", str1);
    printf("Copied String:   %s\n", str2);

    return 0;
}