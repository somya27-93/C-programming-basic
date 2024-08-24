#include<stdio.h>
#include<math.h>
int main(){
    int m,n;
    printf("enter m:");
    scanf("%d",&m);
    printf("enter n:");
    scanf("%d",&n);
    // for(int i=1;i<=m;i++){
    //     for(int j=1;j<=n;j++){
    //         printf("* ");
    //     }
    //     printf("\n");//solid rectangle
    // }
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=n;j++){// 1 2 3
    //         printf("%d ",j);    //1 2 3 when we print j
    //     }                       //1 2 3
    //     printf("\n");

    // }
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){        //A B C D
    //       printf(" %c",j+64);         //A B C D                         
    //        }                           //A B C D
    //     printf("\n");                  //A B C D   
                                                               
    // } 
    // for(int i=1;i<=n;i++){
    //     for(int j=1;j<=n;j++){        //A A A A
    //       printf(" %c",i+64);         //B B B B                         
    //        }                           //C C C C
    //     printf("\n");                    
                                                               
    // }  
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=i;j++){ // star triangle j<=i; 
    //         printf("%d ",j );
    //      }
    //     printf("\n");      
        
    // }
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=i;j++){ // star triangle in alphabets j<=i; 
    //         printf("%c ",j+64 );
    //      }
    //     printf("\n");      
        
    // }
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=i;j++){ 
    //         if(i%2==0) {
    //             printf("%c ",j+64);
    //         }
    //         else{                       // star triangle and number mix j<=i; 
    //         printf("%d ",j );}
    //      }
    //     printf("\n"); 
    
    //     }
    // for(int i=1;i<=n;i++){
    //      for(int j=1;j<=n+1-i;j++){ //ulta right angle triangle
    //         printf("*");    
    //     }                       
    //     printf("\n");

    // }
    // for(int i=1;i<=n;i++){
    //     int s=2;
    //      for(int j=1;j<=i;j++){ //even number triangle;
    //         printf("%d",s); 
    //         s=s+2;   
    //     }                       
    //     printf("\n");

    // }
    // for(int i=1;i<=n;i++){
    //     int s=2;
    //      for(int j=1;j<=n+1-i;j++){ //even number ulta triangle;
    //         printf("%d ",s);
    //         s=s+2;   
    //     }                       
    //     printf("\n");

    // }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
          if((i==1 || i==n) ||(j==1||j==n)||(i==m))
            printf("*");
            else printf(" ");
        }
        printf("\n");// hollow  rectangle;
    }
}

    

