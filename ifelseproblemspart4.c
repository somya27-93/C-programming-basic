// Write a C program to find all roots of a quadratic equation.
// Write a C program to calculate profit or loss.
// Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate percentage and grade according to following:
// Percentage >= 90% : Grade A
// Percentage >= 80% : Grade B
// Percentage >= 70% : Grade C
// Percentage >= 60% : Grade D
// Percentage >= 40% : Grade E
// Percentage < 40% : Grade F

#include<stdio.h>
#include<math.h>
int main(){
    // int a,b,c;
    // int rt1,rt2,imaginary;
    // printf("input values (a,b,c)");
    // scanf("%d %d %d",&a,&b,&c);
    // int D=b*b-4*a*c;
    // if(D>0){
    //     rt1=-b+sqrt(D)/2*a;
    //     rt2=-b+sqrt(D)/2*a;
    //     printf("root is %d,%d",rt1,rt2);

    // }
    // else if(D==0){
    //     rt1=rt2=-b/2*a;
    //     printf("root is %d,%d",rt1,rt2);

    // }else{
    //     rt1=rt2=-b/2*a;
    //     imaginary=sqrt(D)/2*a;
    //     printf("root is %d +i%d and %d +i%d",rt1,imaginary,rt2,imaginary );
    // }
    int chem,phy,math,bio,comp;
    float percentage;
    int marksgot;
    
    printf("enter chem marks");
    scanf("%d",&chem);
    printf("enter phy marks");
    scanf("%d",&phy);
    printf("enter math marks");
    scanf("%d",&math);
    printf("enter bio marks");
    scanf("%d",&bio);
    printf("enter comp marks");
    scanf("%d",&comp);
     marksgot=chem+phy+math+bio+comp;
     percentage=(marksgot/500.00)*100;
    printf("percentage is %f\n",percentage);

    if(percentage>=90){
        printf("Grade A");
    }
    else if(percentage >= 80){
        printf("Grade B");

    }
    else if(percentage >= 70){
        printf("Grade C");

    }
    else if(percentage >= 60){
        printf("Grade D");

    }
    else if(percentage >= 40){
        printf("Grade E");

    }
    else{
        printf("Grade F");
    }
    
    

    

                               
    
   

    
    
    
    


    
}
