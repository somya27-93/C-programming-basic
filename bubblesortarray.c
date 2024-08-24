#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={4,6,3,2,5,1};
    int n=sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
        bool flag=true;// sorted
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
            }
        }
        if(flag==true) break;//if array is already sorted
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}