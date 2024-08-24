#include<stdio.h>
void tower(int n,char src,char helper,char dest){
    if(n==0) return 0;
    tower(n-1,src,dest,helper);
    printf("%c->%c\n",src,dest);
    tower(n-1,helper,src,dest);
    return;

}





int main(){
    int n;
    printf("input no:");
    scanf("%d",&n);
    tower(n,'A','B','C');
}