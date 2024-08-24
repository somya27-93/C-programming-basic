#include<stdio.h>
int main(){
    int arr[]={1, 2, 1, 3, 2};
    int n=sizeof(arr)/4;
    int sum=0, sum2;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    sum2=(n*(n+1))/2;
    int missing_ele=sum2-sum;
    printf("missing element is %d",missing_ele);
}