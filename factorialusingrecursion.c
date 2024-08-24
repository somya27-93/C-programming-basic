#include<stdio.h>
// int fact(int n){
//     if(n==1 ||n==0)return 1;
//     int ans=n*fact(n-1);
//     return ans;


// }
// int main(){
//     int n;
//     printf("input no:");
//     scanf("%d",&n);
//     printf("%d",fact(n));// factorial using recursion;

// }
// int power(int a,int b){
//     if(b==0) return 1;
//     return a*power(a,b-1); // more calls;less efficient;

// }
int powerlog(int a,int b){
    if(b==0)return 1;
    int ans=powerlog(a,b/2);
    if(b%2==0){
    
    return ans*ans;
    }
    else {
        int ans2=a*ans*ans;
        return ans2;
    }

}
int main(){
    int a,b;
    printf("enter base:");
    scanf("%d",&a);
    printf("enter power:");
    scanf("%d",&b);
    printf("%d is raised to power %d is %d",a,b,powerlog(a,b));
    

}