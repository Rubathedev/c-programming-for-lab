#include <stdio.h>

int main() {
    int num, fact = 1; // fact starts at 1
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    int i = num; // Start from num
    while (i > 1) { // Loop down to 1
        fact *= i; // Multiply fact by i
        i--; // Decrease i
    }

    printf("Factorial of %d is %d\n", num, fact);
    return 0;
}
