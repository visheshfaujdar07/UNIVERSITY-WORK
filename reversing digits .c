#include <stdio.h>
int main(){
    int n,r ,z =0 ;
    printf("enter your number");
    scanf("%d",&n);
    for(n;n!=0;n=n/10){
        r=n%10;
        z=z*10+r;
        
    }
    printf("%d",z);
    return 0 ;
}
