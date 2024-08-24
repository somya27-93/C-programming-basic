#include<stdio.h>
int gcd(int a,int b){
    if(b==0)return a;
    if(a==0)return b;
    return gcd(b,a%b);
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    
    printf("input no ");
    scanf("%d %d",&a,&b);
    printf("gcd is %d\n",gcd(a,b));
    printf("lcm is %d",lcm(a,b));
}