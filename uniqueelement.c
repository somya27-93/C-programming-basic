#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[]={1,2,6,4,5,4,2,1,};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        bool flag=false;// unique element
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j])
            flag=true;
        }
        if(flag==false){
            printf("unique element is %d ",arr[i]);
            break;
        }

    }
}