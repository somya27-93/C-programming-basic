#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={1,2,4,5,3,8,6,7,9,87,54,34};
    int n=sizeof(arr)/4;
    int max= INT_MIN;
    int smax=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>max){
        smax=max;// previous max
        max=arr[i];// cuurent max
        }
        else if(arr[i]!=max && smax<arr[i]){
            smax=arr[i];
        }
    }
    printf(" second largest is %d",smax);
    }