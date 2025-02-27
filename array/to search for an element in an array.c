#include<stdio.h>
int main(){
 int arr[30],n,value, pos =-1 ;
 printf("put how many number you want in array");
 scanf("%d",&n);
 for(int i = 0; i<n; i++){
    scanf("%d",&arr[i]);
 }
printf("put the value");
scanf("%d",&value);
for(int i =0;i<n ; i++){
    if(value == arr[i]){
        pos = i +1;
        break;
    }
}
if(pos == -1){
    printf("your number is not here ");
}
else {
    printf("%d is present and its position%d",value,pos);
}
}
