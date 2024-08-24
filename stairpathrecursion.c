//max jump 2;basically we have to find no ways to reach top of the stairs;
#include<stdio.h>
// int stairs(int n){
//     if(n==1 || n==2)return n;
//     return stairs(n-1)+stairs(n-2);
// }
int stairs(int n){
    if(n==1 ||n==2) return n;// max jump 3
    else if(n==3) return 4;
    return stairs(n-1)+stairs(n-2)+stairs(n-3);
}
int main(){
    int n;
    printf("input n:");
    scanf("%d",&n);
    printf("total no ways is %d",stairs(n));
}