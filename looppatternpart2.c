#include<stdio.h>
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
//     int s=1;
//     for(int i=1;i<=n;i++){
       
//          for(int j=1;j<=i;j++){ //floyds triangle
//             printf("%d ",s);
//             s=s+1;   
//         }                       
//         printf("\n");

// }

    // for(int i=1;i<=n;i++){
       
    //      for(int j=1;j<=i;j++){ // 0 nd 1 triangle;
    //        if((i+j)%2==0){
    //         printf("%d",1);
    //        }
    //        else printf("%d",0);
              
    //     }                       
    //     printf("\n");}
    // int mid =n/2+1;
    // for(int i=1;i<=n;i++){
       
    //      for(int j=1;j<=n;j++){ // square # and *
    //        if(i==mid ||j==mid){
    //         printf("*");
    //        }
    //        else printf("#");
              
    //     }                       
    //     printf("\n");}
    // int mid =n/2+1;
    // for(int i=1;i<=n;i++){
       
    //      for(int j=1;j<=n;j++){ 
    //        if(i==mid ||j==mid){ // starplus
    //         printf("*");
    //        }
    //        else printf(" ");
              
    //     }                       
    //     printf("\n");}
    
    for(int i=1;i<=n;i++){
       
         for(int j=1;j<=n;j++){ 
           if(i==j || i+j==n+1){ // crossstar
            printf("*");
           }
           else printf(" ");
              
        }                       
        printf("\n");}





}