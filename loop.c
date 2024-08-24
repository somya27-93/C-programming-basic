#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("input no times");
    scanf("%d",&n);
    int i;
    // for (int i=1;i<=10;i++){
        
    //     printf("%d\n",i*n);
    //  }
    // return 0;//print the table of n .here n is a integer which will user will input
    // for(int i=1;i<=2*n-1;i=i+2){ method 1
    //     printf("%d ",i); //AP
        // int s=1;//method 2
        // for(i=1;i<=n;i++){
        //     printf("%d ",s);
        //     s+=2;
        // }

    // }
    // for(int i=4;i<=3*n+1;i+=3){
    //     printf("%d ",i);//4 7 10 13......nterms
        
    // } 
        // int s=4;//method 2
        // for(i=1;i<=n;i++){
        //     printf("%d ",s);
        //     s=s+3;
        // }
        int s=1;
        for(i=1;i<=n;i++){
            printf("%d ",s); //gp probelem 1 2 4 8 32.....nterm
            s=s*2;
        }




}
