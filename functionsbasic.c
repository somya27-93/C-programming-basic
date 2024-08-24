#include<stdio.h>
// void checkoddprime(int a){
//     if(a%2==0) printf("even");
//     else printf("odd");

// }
// int main(){
//     int b;
//     printf("input any no:");
//     scanf("%d",&b);
//     checkoddprime(b);


// }
// int max(int a,int b){
//     if(a>b) return a;
//     else return b;
// }
// int main(){
//     int x=3,y=5;
//     int m= max(3,5);
//     printf("%d is maximum ",m);
//     return 0;
// }
int sum(int n){
    int s=0;
    for(int i=1;i<=n;i++){
        s+=i;
    }
    return s;

}
int main(){
    int n;
    printf("input number");
    scanf("%d",&n);
    printf("%d",sum(n));
}