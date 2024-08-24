#include<stdio.h>
int main(){
    int n;
   // int digit;
    printf("input n:");
    scanf("%d",&n);
//    printf("search digit");
//    scanf("%d",&digit);
//     int c=0;
//     int d;
//      while(n>0){
//          d=n%10;
//          if(d==digit){
//         c++;}
//         n=n/10;
//     }
//     printf("%d frequency is %d",digit,c);
int a=0;int b=1;int c;
    for(int i=1;i<=n;i++){
        printf("%d",a);
        c=a+b;
        a=b;
        b=c;

    }
     
    

    
        

        
    }
   
    
    
    

    


