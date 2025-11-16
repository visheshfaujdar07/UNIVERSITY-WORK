#include <stdio.h>

int main() {
    int height, weight;
    int count = 0;

    for(int i = 1; i <= 5; i++) {
        printf("Enter height and weight of person %d: ", i);
        scanf("%d %d", &height, &weight);

        if(height > 170 && weight < 50) {
            count++;
        }
    }

    printf("Number of persons with height > 170 and weight < 50 = %d\n", count);

    return 0;
}
