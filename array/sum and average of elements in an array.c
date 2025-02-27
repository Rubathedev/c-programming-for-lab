#include<stdio.h>
int main(){
  int arr[5],sum=0;
  printf("put 5 numbers");
  for(int i=0; i<5 ; i++){

    scanf("%d",&arr[i]);
  }
  for(int i = 0; i<5 ; i++){
    sum += arr[i];
}
printf("%d is sum",sum);
//for avarage;
printf("%.2f is avarage",(float)sum/5);
return 0;
}
