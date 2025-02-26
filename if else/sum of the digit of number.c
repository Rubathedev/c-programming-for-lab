#include <stdio.h>

int main() {
    int num, sum = 0, r;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {  // Loop runs until all digits are processed
        r = num % 10;  // Extract last digit
        sum += r;       // Add digit to sum
        num = num / 10; // Remove last digit
    }

    printf("Sum of digits: %d\n", sum);
    return 0;
}
