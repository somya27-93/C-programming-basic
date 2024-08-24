#include<stdio.h>
int main(){
    float x;
    printf("input no:");
    scanf("%f",&x);
    int i=(int)x;
    if(x==i){
        printf("integer");
    }
    else{
        printf("not integer");
    }
}