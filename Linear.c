#include <stdio.h>

/*
 * Program: Simple Linear Search (Hardcoded)
 * Description: Searches for a specific value in a predefined array.
 */

int main() {
    // 1. Define the array and the target directly
    int array[] = {10, 25, 4, 32, 56, 12, 89, 5};
    int search = 56;  // The number we want to find
    int n = 8;        // The number of elements in the array
    int i;
    int found = 0;

    printf("Searching for %d in the array...\n", search);

    // 2. Perform Linear Search
    for (i = 0; i < n; i++) {
        // Check if the current element matches the search target
        if (array[i] == search) {
            printf("Success! %d found at index %d.\n", search, i);
            found = 1;
            break; // Stop loop once found
        }
    }

    // 3. Handle case where element is not found
    if (found == 0) {
        printf("Element %d is not in the list.\n", search);
    }

    return 0;
}