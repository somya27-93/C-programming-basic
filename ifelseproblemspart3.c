// Write a C program to count total number of notes in given amount.
// Write a C program to input angles of a triangle and check whether triangle is valid or not.
// Write a C program to input all sides of a triangle and check whether triangle is valid or not.
// Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.
#include<stdio.h>
int main(){
    int note500=0;
    int note200=0;
    int note100=0;
    int note50=0;
    int note20=0;
    int note10=0;
    int note5=0;int note2=0;int note1=0;
    int amt;
    printf("input any amount");
    scanf("%d",&amt);
    if(amt>=500){
        note500=amt/500;
        amt=amt%500;
    }
    if(amt>=200){
        note200=amt/200;
        amt=amt%200;
    }
    if(amt>=100){
        note100=amt/100;
        amt=amt%100;
    }
    if(amt>=50){
        note50=amt/50;
        amt=amt%50;
    }
    if(amt>=20){
        note20=amt/20;
        amt=amt%20;
    }
    if(amt>=10){
        note10=amt/10;
        amt=amt%10;
    }
    if(amt>=5){
        note5=amt/5;
        amt=amt%5;
    }
    if(amt>=2){
        note2=amt/2;
        amt=amt%2;
    }
    if(amt>=1){
        note1=amt/1;
        
    }
    printf("500 notes %d\n ",note500 );
    printf("200 notes %d\n",note200);
    printf("100 notes %d\n",note100);
    printf("50 notes %d\n",note50);
    printf("20 notes %d\n",note20);
    printf("10 notes %d\n",note10);
    printf("5 notes %d\n",note5);
    printf("2 notes %d\n",note2);
    printf("1 notes %d\n",note1);
    // int a,b,c;
    // printf("enter sides(a,b,c)");
    // scanf("%d %d %d",&a,&b,&c);
    // if(a==b && b==c && c==a){
    //     printf("equilateral triangle");
    // }
    // else if(a==b ||b==c || c==a){
    //     printf("isoceles triangle");
    // }
    // else{
    //     printf("scalene triangle");
    // }

    
}
