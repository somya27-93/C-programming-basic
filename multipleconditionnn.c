#include <stdio.h>

int main() {
   int n;
   printf("input number");//check if no is did=visible by 3 or 5 but not 15;
   scanf("%d",&n);
   if((n%3==0 || n%5==0) && n%15!=0){
       printf("divisible by 3 or 5 but not 15");
   }
   else{
      printf("not divisible by 3 or 5 but not 15"); 
   }
    return 0;
}