//convert a letter grade to a number grade using switch case
#include <stdio.h>
#include <ctype.h>
int main() {
    char grade;
    int numberGrade;

    printf("Enter a letter grade (A, B, C, D, F): ");
    scanf(" %c", &grade);

    switch (toupper(grade)) {
        case 'A':
            numberGrade = 90;
            break;
        case 'B':
            numberGrade = 80;
            break;
        case 'C':
            numberGrade = 70;
            break;
        case 'D':
            numberGrade = 60;
            break;
        case 'F':
            numberGrade = 0;
            break;
        default:
            printf("Invalid grade. Please enter A, B, C, D, or F.");
            return 1;
    }

    printf("Number grade: %d\n", numberGrade);

    return 0;
}
