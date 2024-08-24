#include<stdio.h>
int main(){
    int arr[5]={2,3,5,4,6};
    // printf("%d",arr[3]);
    // arr[3]=8;
    // printf("%d",arr[3]);
    // for(int i=0;i<5;i++){
    //     scanf("%d",arr[i]);// taking user input;
    // }
    int n=sizeof(arr)/sizeof(arr[0]);// whole array bytes/array bytes of particular index element or datatype size;
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);// printing all elements;
    }

  
   
   
   

}