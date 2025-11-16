#include <stdio.h>

int main() {
    int marks[5][3];
    int i, j;
    int total;
    float avg;

    // Input marks
    for(i = 0; i < 5; i++) {
        printf("\nEnter marks of 3 subjects for student %d:\n", i + 1);
        for(j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
        }
    }

    // Calculate total & average
    for(i = 0; i < 5; i++) {
        total = 0;
        for(j = 0; j < 3; j++) {
            total += marks[i][j];
        }
        avg = total / 3.0;

        printf("\nStudent %d:\n", i + 1);
        printf("Total = %d\n", total);
        printf("Average = %.2f\n", avg);
    }

    return 0;
}
