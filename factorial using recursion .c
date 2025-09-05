#include <stdio.h>
int fact(int n);
int main(){
    int n ;
    printf("enter ");
    scanf("%d",&n);
    int d = fact(n);
    printf("result is \n %d",d);
}
int fact(int n){
    if(n==0){
        return 1 ;
    }
    int y = fact(n-1);
    return y*n;
}
