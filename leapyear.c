#include<stdio.h>
int main(){
    int yr;
    printf("input yr:");
    scanf("%d",&yr);
    if((yr%4==0 && yr%100!=0)||yr%400==0){
        printf("it is leap yr");
    }
    else{
        printf("not leap yr");
    }


}
    