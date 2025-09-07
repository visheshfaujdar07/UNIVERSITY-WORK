#include <stdio.h>
int main(){
    int n ;
    int x=1;
    printf("enter number : ");
    scanf("%d",&n);
    if(n>=1){
    for(int i=1 ; i<=n ; i=i+1){
        x=x*i;
    }
    printf("%d",x);
}
else if(n==0){
    printf("1");
}
else{
    printf("invalid input\n");
}
    return 0;
}
