#include<stdio.h>
int main(){
    int yr;
    printf("input yr:");
    scanf("%d",&yr);
    (yr%400==0 || yr%4==0 && yr%100!=0)?printf("leap yr"):printf("not leap yr");//(condition)?printf("true"):printf("false");
}