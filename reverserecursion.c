#include<stdio.h>
int rev(int n,int reverse){
 
    if(n==0)return reverse;
    else{
        
        return rev(n/10,reverse*10+n%10);
    }
}
int main(){
    int n;
    printf("input no:");
    scanf("%d",&n);
    printf("%d",rev(n,0));
}