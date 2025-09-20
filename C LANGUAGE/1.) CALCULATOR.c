#include <stdio.h>
int main(){
    char x ;
    float a,b,c;
    printf("enter your purpose (+,-,*,/)\n");
    scanf(" %c",&x);
    printf("enter your first number \n");
    scanf("%f",&a);
    printf("enter your second number \n");
    scanf("%f",&b);
    

    switch(x){
        case'+': 
        c=a+b ;
        printf("ans is %.2f\n",c);
        break;
        case'-':
        c=a-b;
        printf("result is %.2f\n",c);
        break;
        case'*':
        c=a*b;
        printf("result is %.2f\n",c);
        break;
        case'/':
        if(b==0){
            printf("invalid input\n");
        }
        else{
            c=a/b;
            printf("result is %.2f\n",c);
        }
        break;

        default:
            printf("invalid input");
        
    }

    return 0;
    }

