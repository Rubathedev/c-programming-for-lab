// largest of three number
#include<stdio.h>
int main(){
int a,b,c;
printf("put the three number you like : \t");
scanf("%d %d %d", &a,&b,&c);
if(a>b && a>c) printf("\n %d is the largest number : \t",a);
else if (b>a && b>c) printf("\n %d is the largest number : \t",b);
else printf("%d is the largest number ",c);
return 0;
}
