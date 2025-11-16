#include <stdio.h>

int main() {
    int x, lastDigit;

    printf("Enter an integer number: ");
    scanf("%d", &x);

    lastDigit = x % 10;

    if (lastDigit % 2 == 0) {
        printf("The last digit %d is even.\n", lastDigit);
    } else {
        printf("The last digit %d is odd.\n", lastDigit);
    }

    return 0;
}
