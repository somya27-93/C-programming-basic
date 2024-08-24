#include<stdio.h>
void insertionsort (int arr[],int a){
    for(int i=1;i<a;i++){
        int j=i;
        while(j>=1 && arr[j-1]>arr[j]){
            int temp=arr[j];
            arr[j]=arr[j-1];
            arr[j-1]=temp;                                                  
            j--;
        }
    }
}





int main(){
    int arr[]={1,3,5,0,2};
    int n=sizeof(arr)/4;
    insertionsort(arr,n);
    printf("sorted array \n");
   
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }

}