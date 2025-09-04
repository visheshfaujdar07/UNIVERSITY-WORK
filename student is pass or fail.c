#include <stdio.h>

int main() {
    int p,c,m,a;

    printf("Enter physics marks: ");
    scanf("%d", &p);
    printf("Enter chemistry marks: ");
    scanf("%d", &c);
    printf("Enter maths marks: ");
    scanf("%d", &m);
    a=(p+c+m)/3;

    if (a >= 33) {
        printf("Result: Pass\n");
    } else {
        printf("Result: Fail\n");
    }

    return 0;
}
