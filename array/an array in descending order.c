#include<stdio.h>
int main(){
    int temp;
int arr[5] = {5,9,8,3,6};
for (int i = 0; i<5; i++){
    for (int j=0; j <(5-1); j++){
        if(arr[j]<arr[j+1]){
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
        }
    }
}
for(int i=0; i<5; i++){
    printf("%d",arr[i]);
}
}
