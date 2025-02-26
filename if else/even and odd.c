//even and odd using if else statement
#include<stdio.h>

int main(){
int num;
printf("put your number here plese:\t");
scanf("%d",&num);
if(num==0) printf("%d the number is invalid",num);
if(num!=0){
  if(num%2==1){
    printf("%d is a odd number ", num);
}
   else printf("%d is a even number", num);
}
return 0;
}
