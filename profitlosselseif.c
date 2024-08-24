#include<stdio.h>
int main(){
    int sp;
    int cp;
    printf("enter a selling price");
    scanf("%d",&sp);
    printf("enter a cost price");
    scanf("%d",&cp);
    if(sp>cp){
        printf("profit");
        int m=sp-cp;
        
        printf(" %d",m);//one word:printf("profit is %d",sp-cp);


    }
    if(sp<cp){
         printf("loss");
         int l=cp-sp;
         
         printf(" %d",l);


    }
    if(sp==cp){
        printf("no loss no profit");

    }
    return 00000000;
}