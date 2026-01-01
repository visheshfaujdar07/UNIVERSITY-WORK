#include <stdio.h>
int fact(int n);
int main(){
    int x , ans = 0 ; 
    printf("enter your number x");
    scanf("%d",&x);
    for( x ; x!=0 ; x = x/10){
        int z = x%10 ;
        int f = fact(z);
         ans = ans + f ;

    }
    printf("final answere is = %d",ans);
    return 0 ;
}
int fact(int n){
    if(n == 0 || n == 1){
        return 1 ;
    }
    int pro = fact(n-1);
    int prod = pro * n;
    return prod ; 
}
