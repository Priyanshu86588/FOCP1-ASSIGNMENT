#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble_sort(int arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

int main() {
    int *arr = NULL;
    int n;
    int i;
    int found_duplicate = 0;
    int last_duplicate = -1;

    printf("Enter number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size or input.\n");
        return 1;
    }

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(arr);
            return 1;
        }
    }

    bubble_sort(arr, n);

    printf("Output: ");
    
    for (i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            if (arr[i] != last_duplicate) {
                printf("%d ", arr[i]);
                last_duplicate = arr[i];
                found_duplicate = 1;
            }
        }
    }

    if (!found_duplicate) {
        printf("-1\n");
    } else {
        printf("\n");
    }

    free(arr);
    return 0;
}