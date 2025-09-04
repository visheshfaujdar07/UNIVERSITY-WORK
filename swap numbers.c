#include <stdio.h>
void swap(int a , int b, int x);
int main(){
    int a,b,x;
    printf("enter number a\n");
    scanf("%d",&a);
    printf("enter number b\n");
    scanf("%d",&b);
    swap(a,b,x);
    
    return 0 ;

}
void swap(int a , int b , int x){
    x=a;
    a=b;
    b=x;
    printf("a is = %d\n b is = %d\n",a,b);
}
