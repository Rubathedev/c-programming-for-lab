//fibonacci using loop
#include<stdio.h>

int main(){
 int n1=0,n2=1,fibo,n;
 fibo = n1 + n2;
 printf("put the range for the fibonacci:");
 scanf("%d",&n);
 printf("%d %d", n1,n2);
 for(int i = 3; i<=n ; i++){
    printf("%d",fibo);
    n1 = n2;
    n2 = fibo;
    fibo = n1 + n2;
 }
return 0;
}
