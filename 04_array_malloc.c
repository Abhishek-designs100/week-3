#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    int *arr;
    long long sum = 0;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Please enter a positive number.\n");
        return 1;
    }

    arr = malloc((size_t)n * sizeof(*arr));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input.\n");
            free(arr);
            return 1;
        }
        sum += arr[i];
    }

    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "\n" : " ");
    }
    printf("Sum = %lld\n", sum);

    free(arr);
    arr = NULL;
    return 0;
}
