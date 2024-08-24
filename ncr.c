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
int npr(int n,int r){
    return fact(n)/fact(n-r);//permutations;

}


int main(){

    int n,r;
    printf("input number");
    scanf("%d",&n);
    printf("input r:");
    scanf("%d",&r);
    int k=ncr(n,r);
    printf("%d\n",k);
    int m=npr(n,r);
    printf("%d",m);

   
    }
     








    
