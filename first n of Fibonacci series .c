#include <stdio.h>
int fibo(int n);
int main(){
    int n ;
    printf("enter number n\n");
    scanf("%d",&n);
    for(int i=0;i<=n;i=i+1){
        printf("%d\n",fibo(i));
    }
    int z = fibo(n);
    printf("%d\n",z);
}
int fibo(int n){
    if(n==0){
        return 0 ;
    }
    else if(n==1){
        return 1;
    }
    else 
    return fibo(n-1)+fibo(n-2);
    
}
