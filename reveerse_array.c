#include<stdio.h>
#include<limits.h>

int main(){
    int arr[]={1,2,4,5,3,8,6,7,9,87,54,34};
    int n=sizeof(arr)/4;
    int i=0,j=n-1,temp,c=1;
    // while(i<j){
    //     temp=arr[i];
    //     arr[i]=arr[j];
    //     arr[j]=temp; //reversse array
    //     i++;
    //     j--;
    // }
    // for(int i=0;i<n;i++){
    //     print("%d",arr[i]);// reverse array
    //  }

    for( i=0;i<j;i++,j--){
       if(arr[i]!=arr[j]){
        c=0;
        break;// not pallindrome;
       }
       
    }
    if(c==1){
        printf(" pallindrome");
    }
    else{
        printf("not pallindrome");
    }
    
    
}