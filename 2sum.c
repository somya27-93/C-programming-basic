#include<stdio.h>
int main(){
    int arr[]={2,3,4,6,2,3,6};
    int n=sizeof(arr)/4;
    int target=12;

    int ans=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==target){
                printf("elements are(%d,%d)\n",arr[i],arr[j]);
                ans++;
            }

        }
    }
    printf("count no of pairs %d",ans);
}