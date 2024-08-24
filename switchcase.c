#include<stdio.h>
int main(){
    int num1,num2;
    printf("1st number");
    scanf("%d",&num1);
    printf("1st number");
    scanf("%d",&num2);
    int x;
    printf("enter operator");
    scanf("%d",&x);


    switch (x)
    {
        case 1:
            printf("addition is%d",num1+num2);
            break;
        case 2:
            printf("subtraction is%d",num1-num2);
            break;
        case 3:
            printf("multiplication is %d",num1*num2);
            break;
        case 4:if(num2!=0){
            
            printf("division is%d",num1/num2);
            break;
        }
        default:printf("noo opration");
            
    }
    

    
}