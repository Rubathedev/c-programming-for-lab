#include <stdio.h>

int main() {
    int a, b, c;

    // Ask for user input
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    // Check if it forms a valid triangle
    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c)
            printf("The triangle is equilateral.\n");
        else if (a != b && b != c && a != c)
            printf("The triangle is scalene.\n");
        else
            printf("The triangle is isosceles.\n");
    } else {
        printf("This is not a valid triangle.\n");
    }

    return 0;
}
