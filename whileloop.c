#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("input no ");
    scanf("%d",&n);
    // int c=0;
    // while(n>0){
    //     n=n/10;
    //     c++;
        
    // }
    // printf("%d",c);//count the digits
    // int sum=0;
    // while(n>0){
    //     int d=n%10;
        
    // //     sum+=d;
    // //     n=n/10;
    // // }
    // //  printf("%d",sum);//sum of the digits

    //     if(d%2==0){
    //     sum+=d;
    //     }
    //     n/=10;
   
    // }
    // printf("%d",sum);//sum of even digits
    int product=1;
    while(n>0){
        int d=n%10;
        product*=d;
        n=n/10;
    }
    printf("%d",product);

}   