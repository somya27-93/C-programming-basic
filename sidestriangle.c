#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c :");
    scanf("%d",&c);
    // int x=a+b;
    // int y=b+c;
    // int z=a+c;
    // if(x>c && y>a && z>b){//to check sides can be tri or not
    //     printf("can be triangle");
    // }
    // else{
    //     printf("can't be triangle");
    // }
    if(a>b && a>c){
        printf(" %d is greater",a);//greatest of three number
    }
    if(b>a && b>c){
         printf(" %d is greater",b);
    }
    if(c>a && c>b){
         printf(" %d is greater",c);
    }

    

}