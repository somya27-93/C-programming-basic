#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("input no ");
    scanf("%d",&n);
    int orginal_num=n;
    int rev=0;
    while(n>0){
        int d=n%10;
        
        rev*=10+d;
        n=n/10;
     }
     printf("%d ",rev);
   //   if(rev==orginal_num)
   //   {
   //      printf("pallindrome");
   //   }
   //   else{
   //      printf("not a pallindrome");
   //   }
}
