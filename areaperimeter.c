#include<stdio.h>
int main(){
   int l;
   int b;
   printf("enter length");
   scanf("%d",&l);
   printf("enter breadth");
   scanf("%d",&b);
   int area=l*b;
   
   int perimeter =2*(l+b);
   
   if (area>perimeter)
   {
       printf("area is greater ");     
   }
   else{
    printf("area is smaller ");
   }
   
   
   

}