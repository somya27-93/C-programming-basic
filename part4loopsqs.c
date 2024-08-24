#include<stdio.h>
int main(){
    int n;
    printf("input no:");
    scanf("%d",&n);
    int i;int j; int sum=0;// 1 means prime
    for(i=1;i<=n;i++){
        int c=1;
         for(int j=2;j<=i/2;j++){
         if(i%j==0){
            c=0;
            
            break;//composite
           
         }
     }if(c==1){
        // printf("%d",i);// print 1 to n all prime numbers or prime factors;
        sum=sum+i;
        }
        }
        printf("%d",sum);
       
        
        
      
       
        
     
     
    
    
       
}       