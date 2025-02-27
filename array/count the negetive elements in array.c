#include<stdio.h>
int main(){
int odd,nege,count=0;
 int arr[] ={-8,5,-1,-3,10,1,3};
 printf("odd element in arry:");
for (int i=0;i<7; i++ ){
    if(arr[i]%2==1){
        odd = arr[i];
        printf("%d\t",odd);

    }
}
//for negetive elements in array
for (int i=0; i<7; i++){
    if(arr[i]<0){
        nege = arr[i];
        printf("\n%d",nege);
        count ++;
    }
}
printf("%d",count);
return 0;
}
