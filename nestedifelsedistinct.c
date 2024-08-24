#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter a :");
    scanf("%d",&a);
    printf("enter b:");
    scanf("%d",&b);
    printf("enter c :");
    scanf("%d",&c);
    // if(a>b){
    //     if(a>c){//largest distinct number;
    //         printf("%d is greater",a);}
    //     else{
    //         printf("greter is %d",c);//c>a>b

    //     }

    // }
    // else{//b>a
    //     if(b>c){
    //         printf("%d is greater",b);}
    //         else{
    //             printf("%d is greater",c);//c>b>a
    //         }

    

    // }
    if(a<b){
        if(a<c){
            printf("%d is smallest",a);
        }
        else{
            printf("%d is smallest",c);
        }

    }
    else{//a>b
       if(b<c){
        printf("%d smallest",b);
       }
       else{
        printf("%d is smallest",c);
       }

    }
    
    

}