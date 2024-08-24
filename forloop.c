#include<stdio.h>//FIND THE HIHES FACTOR OF A GIVEN NUMBER n.except n;
#include<math.h>
int main(){
    int n;
    printf("input no ");
    scanf("%d",&n);
    int i;
    int fact;
    // for(i=n/2;i>=1;i--){
    //     if(n%i==0){
    //         // fact=i;
    //         // printf("%d ",fact);
    //         printf("%d ",i);
    //         break;
    //     }
        
    // }
    // to check no is prime or not
    int c=1;// 1 means prime
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            c=2;
            break;//composite
           
         }
    }
        if(n==1)printf("%d is neither prime nor composite ",n);
         else if(c==1){
            printf(" %d is prime ",n);
        }
        else{
            printf("not a prime no");
        }
}


