#include <stdio.h>

int main() {
   int n;
   printf("input number");//check if no is did=visible by 3 or 5 but not 15;
   scanf("%d",&n);
   if(n%15!=0){
    if(n%3!=0){
        if(n%5==0){
            printf("divisble by 5");
        }
        else{
            printf("not divsible by 5");
        }

    }
    else{
        printf("divisble by 3");
    }

   }
   else{
    printf("divisible by 15");
   }
}