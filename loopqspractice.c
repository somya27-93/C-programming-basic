#include<stdio.h>
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    // int sum=0;
    // for(int i=1;i<=n;i++){
    //     if(n%i==0){
    //         sum+=i;
    //     }

    // }
    // printf("%d ",sum);
    // int i=n;
    // while(i>0){
    //     printf("%d\n",i);//4 3 2 1
    //     i--;
        


    // }
    int last_digit=n%10;
    while(n>=10){      // find first and last digit of a number.
        n=n/10;
        
    }
    int first_digit=n;
    // printf("%d\n",first_digit);
    // printf("%d",last_digit);
    // int sum=first_digit + last_digit;
    // printf("sum of 1st and last digit is :%d ",sum);
    int temp;
    temp=first_digit;
    first_digit=last_digit;
    last_digit=temp;
    printf("after swap: 1st digit is %d\n last digit is %d",first_digit,last_digit);  


    

    


}