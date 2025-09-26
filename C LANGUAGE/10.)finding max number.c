#include <stdio.h>

int main() {
    int p,c,m;

    printf("Enter first number: ");
    scanf("%d", &p);
    printf("Enter second number: ");
    scanf("%d", &c);
    printf("Enter third number: ");
    scanf("%d", &m);


    if (p>=c&&p>=m) {
        printf("%d\n",p);
    }
    else if(c>=p&&c>=m){
        printf("%d\n",c);
    }
     else {
        printf("%d\n",m);
    }

    return 0;
}

