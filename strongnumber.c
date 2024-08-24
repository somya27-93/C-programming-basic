#include<stdio.h>
int main(){
    int num,orginal_num;
    printf("input num:");
    scanf("%d ",&num);
    int sum=0,fact;
    orginal_num=num;
    while(num>0){
        int last_digit=num%10;
        fact=1;
        for(int i=1;i<=last_digit;i++){
            fact=fact*i;
        }
        sum=sum+fact;
        num/=10;


    }
    if(orginal_num==sum){
        printf("%d is a strong number",orginal_num);
            
        }else 
        printf("%d is not a strong number",orginal_num);  
        return 0;
            


}