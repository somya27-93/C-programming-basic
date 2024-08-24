// Write a C program to input week number and print week day.
// Write a C program to input month number and print number of days in that month.
#include<stdio.h>
int main(){
    // int week_no;
    // printf("input week no");
    // scanf("%d",&week_no);
    // if(week_no==1)printf("monday");
    // else if(week_no==2)printf("tuesday");
    // else if(week_no==3)printf("wednesday");
    // else if(week_no==4)printf("thursday");
    // else if(week_no==5)printf("friday");
    // else if(week_no==6)printf("saturday");
    // else if(week_no==7)printf("sundaay");
    // else printf("no day");
    int monthno;
    printf("input month number");
    scanf("%d",&monthno);
    switch (monthno)
    {
        case 1:case 3:case 5:case 7:case 8:case 10:case 12:printf("31 days ");break;
        case 2:printf("28 or 29 days ");break;
        case 4: case 6:case 9:case 11:printf("30 days ");break;
        default:printf("not valid month no");

    }


}