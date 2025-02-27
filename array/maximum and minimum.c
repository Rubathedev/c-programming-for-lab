#include<stdio.h>

int main(){
  int num[100],n;
  printf("put the size or your array :");
  scanf("%d",&n);
  //to store the value
  for(int i =0; i<n ; i++){
    scanf("%d",&num[i]);
  }
  //for maximum value
  int max = num[0];
  int min = num[0];
  for(int i =1; i<n; i++){
    if(max<num[i]){
        max = num[i];
    }
  }
for(int i =1; i<n; i++){
    if(min>num[i]){
        min = num[i];
    }
  }

printf("Max:%d",max);
printf("Min:%d",min);
}
