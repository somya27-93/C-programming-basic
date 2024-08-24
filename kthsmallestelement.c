#include<stdio.h>
#include<limits.h>
int select(int arr[],int k,int size){
    
    for(int i=0;i<k-1;i++){
        int min=INT_MIN;
        int minindex=-1;
        for(int j=i;j<size;j++){
            if(min>arr[j]){
                min=arr[j];// min_value;
                minindex=j;// minimum index;
            }
            
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;

    }
    return arr[k];
}
int main(){
    int arr[]={64,25,12,22,11};
    int n=sizeof(arr)/4;
    int k=2;
    int ksmallest=select(arr,k,n);
    printf("%d",ksmallest);
}