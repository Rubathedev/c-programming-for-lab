#include <stdio.h>

int main() {
    int n, i;

    // Asking user for the number of elements
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n]; // Declaring an array of size 'n'

    // Taking input from the user
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Printing the array elements in reverse order
    printf("The elements in reverse order are:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
