#include <stdio.h>

int main() {
    float radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;   // formula: π * r^2

    printf("Area of the circle = %.2f\n", area);

    return 0;
}
