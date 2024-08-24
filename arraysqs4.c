#include<stdio.h>

int main(){
    int arr[]={1,2,4,5,3,5,6,7};
    int n=sizeof(arr)/4;
    // for(int i=0;i<n;i++){
    //     if(i%2!=0){ arr[i]*=2;
    //     }
    //     else {
    //         arr[i]+=10;}
    // }
    // for(int i=0;i<n;i++){
    //     printf("%d ",arr[i]);// odd index multiple and even index +10;
    // }
    // int target=3,c=0;
    // for(int i=0;i<n;i++){
    //     if(arr[i]>target ){
    //         c++;
    //     }
    // }
    // printf("%d",c);// count the elements greater than target;
     int sum_odd=0,sum_even=0;
     for(int i=0;i<n;i++){
        if(i%2==0) sum_even+=arr[i];
        else sum_odd+=arr[i];
     }
     int diff= sum_even-sum_odd;
     printf("%d",diff);
    
    
    

}