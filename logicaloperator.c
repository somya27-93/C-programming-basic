#include<stdio.h>
int main(){
    int number;
    printf("enter positive no:");
    scanf("%d",&number);
    // if(number>=100 && number<=999){
    //     printf("three digit no");

    // }
    // else{
    //     printf(" not three digit no");

    // }
    if(number%5==0 || number%3==0){
        printf("dividible");
    }
    else{
        printf("not divisible");
    }

   
    
}