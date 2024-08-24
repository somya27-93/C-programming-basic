#include <stdio.h>
 #include<math.h>
int main() {
    int num, temp, last_digit, result = 0,times=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp=num;
   while(temp!=0){
        
        temp/=10;
         times++;
   }
  int tp=num;
    while(tp!=0){
        last_digit=tp%10;
        result+= pow(last_digit,times);
        tp/=10;
        
    }
    if(result==num){
        printf("amstrong number  %d",num);
    }
    else{
        printf("not amstrong number  %d",num);  
    }
    

    
    return 0;
}

    
   
  
   
    
   
  