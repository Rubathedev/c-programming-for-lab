#include<stdio.h>
int main(){

int arr1[30],arr2[30],n;
printf("put the size of the arr1");
scanf("%d",&n);
for (int i=0; i<n ; i++){
    scanf("%d",&arr1[i]);
}
printf("arr1:");
for(int i=0; i<n ; i++){
    printf("%d\n",arr1[i]);
}
for (int i=0; i<n ;  i++){
    arr2[i] = arr1[i];
}
//arr2 :
for (int i=0 ; i<n ; i++){
    printf("%d",arr2[i]);
}

}
