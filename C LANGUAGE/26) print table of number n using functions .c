#include <stdio.h>

void table(int n);

void table(int n){ //parameter
    for(int i=1 ; i<=10 ; i=i+1){
        int c = n*i ;
        printf("%d\n",c);
    }
}

int main(){
    int n ;
    printf("enter no n ");
    scanf("%d",&n);
    table(n); //argument or actual parameter
    return 0 ;
}
