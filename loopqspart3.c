#include<stdio.h>
#include<math.h>
int main(){
    int n1,n2,rem;
    printf("input no ");
    scanf("%d %d",&n1,&n2);
    int a=n1;
    int b=n2;
    while(n1%n2!=0){// n2!=0,tenp=n1%n2;n1=n2;n2=temp;

        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    int lcm=(a*b)/n2;
    printf("gcd is %d \n",n2 );
    printf("lcm is %d",lcm);
    

}   