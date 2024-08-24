#include<stdio.h>


int fact(int n){
   int fact=1;
   for(int i=1;i<=n;i++){
    fact*=i;

   }
   return fact;

}
int ncr(int n,int r){
   
   return fact(n)/(fact(r)*fact(n-r));
}
int main(){

    int n;
    printf("input number");
    scanf("%d",&n);
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i;j++){
            int m=ncr(i,j);
            printf("%d",m);
        }
        printf("\n");
    }
    }