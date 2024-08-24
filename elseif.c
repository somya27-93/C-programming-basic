#include<stdio.h>
int main(){
    int marks;
    printf("input marks:");
    scanf("%d",&marks);
    if(marks>=81 && marks<=100){
        printf("good student");
    }
    else if(marks>=61 && marks<=80){
        printf("nice");

    }
    else if(marks>=41 && marks<=60){
        printf("average");
    }
    else{
        printf("fail");
    }
}