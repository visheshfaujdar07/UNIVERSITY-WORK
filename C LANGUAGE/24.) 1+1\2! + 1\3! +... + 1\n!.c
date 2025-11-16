#include <stdio.h>

int main() {
    int n, i, j;
    float sum = 0.0;
    int fact;

    printf("Enter value of n: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        fact = 1;
        for(j = 1; j <= i; j++) {
            fact = fact * j;
        }
        sum = sum + (1.0 / fact) ;
    }

    printf("Sum of series = %.6f\n", sum);

    return 0;
}
