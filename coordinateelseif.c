#include<stdio.h>
int main(){
    int x,y;
    printf("input x coordinate:");
    scanf("%d",&x);
    printf("input y coordinate:");
    scanf("%d",&y);
    if(x>0 && y>0){
        printf("lies in 1st quadrant");
    }
    else if(x<0 && y>0){
        printf("lies in 2nd quadrant");
    }
    else if(x<0 && y<0){
        printf("lies in 3rd quadrant");
    }
    else if(x>0 &&y<0){
        printf("lies in 4th quadrant");
    }
    else if(x==0 &&y==0){
        printf("orgin");
    }
    else if(y==0){
        printf("on x axis");
    }
    else if(x==0){
        printf("on y axis");
    }
    
    

    
}