#include<stdio.h>
int main(){

int a,b,c;
printf("put the three number please:");
scanf("%d %d %d",&a,&b,&c);
if(a<b && a<c)printf("%d is the smallest number",a);
else if (b<c && b<a) printf("%d is the smallest number",b);
else printf("%d is the smallest number ",c);
return 0;

}
