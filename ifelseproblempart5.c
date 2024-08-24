// Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
// Basic Salary <= 10000 : HRA = 20%, DA = 80%
// Basic Salary <= 20000 : HRA = 25%, DA = 90%
// Basic Salary > 20000 : HRA = 30%, DA = 95%

#include<stdio.h>
int main(){
    
    float grosssalary,hra,da,basicsalary;
    printf("input basic salary ");
    scanf("%f",&basicsalary);
    if(basicsalary<=10000){
        hra=basicsalary*0.20;
        da=basicsalary*0.80;

    }
     else if(basicsalary<=20000){
        hra=basicsalary*0.25;
        da=basicsalary*0.90;
        
    }
    else{
        hra=basicsalary*0.30;
        da=basicsalary*0.95;
         }
         
    grosssalary=hra+da+basicsalary;
    printf("gross salary is %f",grosssalary);


    
}