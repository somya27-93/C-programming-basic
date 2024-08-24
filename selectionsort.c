#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={4,6,3,2,5,1};
    int n=sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int minindex=-1;
        for(int j=i;j<n;j++){
            if(min>arr[j]){
                min=arr[j];// min_value;
                minindex=j;// minimum index;
            }
            
        }
        int temp=arr[minindex];
        arr[minindex]=arr[i];
        arr[i]=temp;

    }
     for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}



        
    
   