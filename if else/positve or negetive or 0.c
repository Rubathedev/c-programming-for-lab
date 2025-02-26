// numebr is positive or negetive
#include <stdio.h>

int main() {
    int num;

    // Ask for user input
    printf("Enter the number: ");
    scanf("%d", &num);

    // Check if it forms a valid triangle
    if (num>0){printf("%d is positve",num);}
    else if( num<0 ) {printf("%d is negetive" , num);}
    else if(num==0){
            printf("%d is 0 nether positive or negetive just 0");}
   return 0;
}

