#include<stdio.h>
int main(){

    int base;
    int exponent;
    printf("input no:(base,exponent)");
    scanf("%d %d",&base,&exponent);
    int p=1;
    for(int i=1;i<=exponent;i++){
        p=p*base;
    }
    printf("power is %d",p);

   
    }
     
    

    
        

        
    
   
    
    
    

    


