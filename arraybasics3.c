#include<stdio.h>
#include<limits.h>
int main(){
    int arr[]={4,7,8,9,10,18};
    int n=sizeof(arr)/4;
    int max=INT_MIN;// 
    int min=arr[0];// INT_MAX;alernate way
    for(int i=0;i<n;i++){
        if(arr[i]>max)
        max=arr[i];

    }
    for(int i=0;i<n;i++){
        if(arr[i]<min)
        min=arr[i];

    }
    printf("max no is %d\n",max);
     printf("minumum value no is %d",min);

}