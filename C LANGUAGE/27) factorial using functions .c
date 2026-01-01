#include<stdio.h>
int fact(int n);
int main(){
    int n ;
    printf("enter number n");
    scanf("%d",&n);
    printf("factorial is = %d",fact(n));
}
int fact(int n ){
    if(n==1){
        return 1 ;
    }
    int z = fact(n-1);
    int x = z * n ;
    return x ;
}
