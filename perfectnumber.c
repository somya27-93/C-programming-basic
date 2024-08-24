#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("input no ");
    scanf("%d",&n);int i;
    // int sum=0;
    // for(int i=1;i<=n-1;i++){
    //     if(n%i==0){
    //         sum+=i;
    //     }
    // }
    // if(sum==n){
    //     printf("perfect number");
    // }
    // else{
    //     printf("not a perfect no");
    // }
    // int fact=1;
    // for(i=1;i<=n;i++){
    //     fact=fact*i;
    //     printf("factorial of %d is %d ",i,fact);// print factorial of first n numbers;;
        
    // }
    //printf("factorial of %d is %d",n,fact);// print factorial of any given number;
    i=65;
    while(i<=127){
       
        
        char assci=(char)i;

        printf("%d  %c \n",i,assci);
        i++;//write a program to print all the ascii values and their equivalent characters of 26 alphabets using a while loop;// in capital
    }
    // char i='A';
    // while(i<='z'){
    //     int assci=(int)i;
    //     printf("%d %c\n",i,assci);
    //     i++;
    // }

   
}