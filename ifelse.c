#include<stdio.h>
int main(){
    int x;
    printf("enter a no:");
    scanf("%d",&x);
    // if (x%2==0)
    // {
    //     printf("even");
    // }
    // else {
    //      printf("odd");
    // }
    // if(x%5==0){
    //     printf("divisible by 5");//divisible by 5 or not;
    // }
    // else{
    //     printf("not divisible");
    // }
    // if(x>=0){
    //     printf("abs value is %d",x);//absoulute value
    // }
    if(x<0)//if condition satisfy both will execute otherwise printf statement will execute
        x=x*(-1);
        printf("abs value is %d",x);
        
        
}