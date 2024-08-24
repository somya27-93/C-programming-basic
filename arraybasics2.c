#include<stdio.h>
int main(){
    // int n;
    // printf("Enter the number of elements: ");
    // scanf("%d", &n);

    // int arr[n]; // Declare an array of size n

    // printf("Enter %d integers:\n", n);
    // for (int i = 0; i < n; i++) {
    //     scanf("%d", &arr[i]); 
    // }

    // int sum = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += arr[i];
    // }

    // printf("Sum of all elements: %d\n", sum);

    // return 0;
    int arr[]={2,3,4,7,8,9,8,7,6};
    int n=sizeof(arr)/4;
    int i,sum=0,product=1;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    for(int i=0;i<n;i++){
        product=product*arr[i];
    }
    printf("sum of array is %d \n",sum);
    printf("product of array is %d ",product);

}
   
    

