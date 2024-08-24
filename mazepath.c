// condition:  down ,right,"1 step at time";find no ways..
// #include<stdio.h>
// int maze( int curr_row,int curr_col,int end_row,int end_col  ){
//     int rightways=0,downways=0;
// if(curr_row==end_row && curr_col==end_col) return 1;
// else if(curr_row==end_row){
//     rightways+=maze(curr_row,curr_col+1,end_row,end_col); 
// }
// else if(curr_col==end_col){
//     downways+=maze(curr_row+1,curr_col,end_row,end_col);
// }
// else{ // currrow<endrow && currcol<endcol
//     rightways+=maze(curr_row,curr_col+1,end_row,end_col);
//     downways+=maze(curr_row+1,curr_col,end_row,end_col);
// }

// int totalways=rightways+downways;
// return totalways;}
// int main(){
//     int n,m;
//     printf("enter n rows:");
//     scanf("%d",&n);
//     printf("enter m rows:");
//     scanf("%d",&m);
//     printf("total ways is %d",maze(1,1,n,m));// using 4 parameter;
    
    

// }
int maze2(n,m){
    int rightways= 0, downways=0;
    if(n==1&& m==1) return 1;
    else if(n==1){
        rightways+=maze2(n,m-1);
    }
    else if(m==1){
        downways+=maze2(n-1,m);
    }
    else{
        rightways+=maze2(n,m-1);
        downways+=maze2(n-1,m);
    }
    int totalways=rightways+downways;
    return totalways;



}
int main(){
    int n,m;
    printf("enter n rows:");
    scanf("%d",&n);
    printf("enter m rows:");
    scanf("%d",&m);
    printf("total ways is %d",maze2(n,m));
    
    

}




















