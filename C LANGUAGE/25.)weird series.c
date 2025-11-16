#include <stdio.h>

int main() {
    int i, j;
    float x, sum = 0.0;
    float term;
    int fact;

    printf("Enter value of x: ");
    scanf("%f", &x);

    for(i = 0; i <= 9; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact *= j;
        }

        term = 1;
        for(j = 1; j <= i; j++) {
            term *= x;
        }

        if(i % 2 == 0)
            sum += term / fact;
        else
            sum -= term / fact;
    }

    printf("Sum = %.6f\n", sum);

    return 0;
}
