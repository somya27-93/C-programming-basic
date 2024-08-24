#include<stdio.h>
// void print(int n){
//     if(n==0) return;// base case;
//     printf("%d\n",n); //print nto1
//     print(n-1);

// }
// int main(){
//     int a=5;
//     print(5);

// }
// void print(int x,int n){
//     if(x>n) return;//base case;
//     printf("%d\n",x);print nto1;using extra parameter;//kaam
//     print(x+1,n);//call

// }
// int main(){
//     int n;
//     printf("input no ");
//     scanf("%d",&n);
//     print(1,n);
//     }
// void print(int n){
//     if(n==0) return;// base case;
     
//     print(n-1);//call
//      printf("%d\n",n);//work not using extra para print 1 to n;

// }
// int main(){
//     int n;
//     printf("input no ");
//     scanf("%d",&n);
//     print(n);
    
//     }
// void sum1ton(int n,int sum){
//     if(n==0) {
//         printf("%d",sum);
//         return;// base case;
//     }
//     sum1ton(n-1,sum+n);//call // using extra para
    
// }
// int main(){
//     int n;
//     printf("input no ");
//     scanf("%d",&n);
//     sum1ton(n,0);
    
//     }
int sum(int n){
    if(n==1) return 1;
    int ansrec=n+sum(n-1);// using return type 
    return ansrec;

}
int main(){
    int n;
    printf("input no ");
    scanf("%d",&n);
    printf("%d",sum(n));
}
