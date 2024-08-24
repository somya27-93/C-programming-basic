#include<stdio.h>
int duplicate(int arr[],int a){
    for(int i=0;i<a;i++){
        int c=0;
        for(int j=i+1;j<a;j++){
            if(arr[i]==arr[j] && i!=j){
                return arr[i];
               
            }
        }
       
    }
}

int main(){
    int arr[]={1,2,4,5,6,2,8,4};
    int n=sizeof(arr)/4;
     int k= duplicate(arr,n);
    printf("%d",k);
}