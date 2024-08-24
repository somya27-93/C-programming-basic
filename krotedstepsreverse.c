#include<stdio.h>
void reverse(int arr[],int a,int b ){
    for(int i=a,j=b;i<=j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    return;
}

int main(){
    int arr[]={1,2,4,5,3,8,6,7,9,87,54,34};
    int n=sizeof(arr)/4;
    int k=3;
    k=k%n;//for k>n it will work to minimize k steps;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
    
    // reverse(arr,2,6); // reverse index 2-6
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);// reverse array
     }
}