#include<stdio.h>

int main(){
    int arr[]={1,2,4,5,3,8,6,7,9,87,54,34};
    int n=sizeof(arr)/4;
    int target=6,c=0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
             c=1;
            break;
        }
    }
    if(c==1){
        printf("%d is present",target);
    }
    else printf("%d is not present",target);
    }