#include<stdio.h>
int sumeven(int n){
    if(n==0) return 0;
    else if(n%2==0){
        return n+sumeven(n-1);
    }
    else return sumeven(n-1);
        
    
}
int main(){
    int start,n;
    printf("input start:");
     scanf("%d",&start);
    
    printf("input enter range:");
    scanf("%d",&n);
    printf("%d",sumeven(n));


    
}