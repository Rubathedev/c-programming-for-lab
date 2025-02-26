//using switch case find the vowels and consonent

#include<stdio.h>
#include<ctype.h>
int main( ){
  char var;
  printf("put a cracter you like:");
  scanf("%c",&var);
  char low_var = tolower(var);
  switch(low_var){
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
    printf("%c is vowel",var);
    break;
   default:
       printf("%c is consonent",var);
       break;

  }
return 0;
}
