#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a, b;
        scanf("%d %d", &a, &b);

        int *numbers = (int *)malloc(a * sizeof(int));
        int *differences = (int *)malloc((a - 1) * sizeof(int));

        // Read input numbers
        for (int i = 0; i < a; i++) {
            scanf("%d", &numbers[i]);
        }

        // Calculate differences between consecutive elements
        for (int i = 1; i < a; i++) {
            differences[i - 1] = abs(numbers[i] - numbers[i - 1]);
        }

        // Bubble sort the differences array
        for (int i = 0; i < a - 2; i++) {
            for (int j = 0; j < a - i - 2; j++) {
                // Swap adjacent elements if they are in the wrong order
                if (differences[j] > differences[j + 1]) {
                    int temp = differences[j];
                    differences[j] = differences[j + 1];
                    differences[j + 1] = temp;
                }
            }
        }

        int sum = 0;
        // Calculate the sum of the first a-b elements
        for (int i = 0; i < a - b; i++) {
            sum += differences[i];
        }

        printf("%d\n", sum);

        // Free dynamically allocated memory
        free(numbers);
        free(differences);
    }

    return 0;
}
