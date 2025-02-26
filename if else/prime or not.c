#include<stdio.h>

int main(){
   int num,count = 0;
   printf("Give a positive integer number:\t");
   scanf("%d",&num);
   if(num==0 || num ==1){
     printf("you put a Invalid number 0 and 1 is not a prime number");
     return 0;
   }
 for(int i = 2 ; i<num ; i++){
    if(num%i==0){
        count ++;
        break;
    }
 }
 if(count == 0){
    printf("%d is prime number",num);
 }
 else{
    printf("%d is not a prime number",num);
 }
 return 0;
}
