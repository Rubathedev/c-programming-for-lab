#include<stdio.h>

int main() {
    int row, col, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Loop for each row
    for (row = 1; row <= n; row++) {
        // Print spaces
        for (col = 1; col <= n - row; col++) {
            printf(" ");
        }
        // Print stars
        for (col = 1; col <= 2 * row - 1; col++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
