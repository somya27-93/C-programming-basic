#include<stdio.h>
int main(){
    int x=9;
    // int*jk=&x;
    // // printf("\n%p\n",jk or&x);//   adresss stored in memory;
    // printf("%d",*jk);
    int*lk=&x;
    printf("%d\n",x);
    *lk=8;
    printf("%d",x);
    //we pass adress not the values,*xindicates x where the adress stored,then adress indicates the value in main function ,it also used in updating the value;..example swaping //pass by reference;
}