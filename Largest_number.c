#include <stdio.h>

int main() {
    int n, i;
    int arr[100];
    int max;

    printf("Enter the number of elements (1 to 100): ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    
    // Loop to read inputs
    for (i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    // Initialize max with the first element
    max = arr[0];

    // Loop to find the largest
    for (i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The largest number is: %d\n", max);

    return 0;
}