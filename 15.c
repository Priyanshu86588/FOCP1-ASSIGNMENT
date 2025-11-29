#include <stdio.h>

void rotate_array_clockwise_by_one(int arr[], int n) {
    if (n <= 1) {
        return;
    }

    int last_element = arr[n - 1];

    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    arr[0] = last_element;
}

void print_array(int arr[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("}\n");
}

int main() {
    // Example 1: {1, 2, 3, 4, 5} -> {5, 1, 2, 3, 4}
    int arr1[] = {1, 2, 3, 4, 5};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Example 1:\n");
    printf("Input:  ");
    print_array(arr1, n1);

    rotate_array_clockwise_by_one(arr1, n1);

    printf("Output: ");
    print_array(arr1, n1);
    printf("\n");

    // Example 2: {2, 3, 4, 5, 1} -> {1, 2, 3, 4, 5}
    int arr2[] = {2, 3, 4, 5, 1};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Example 2:\n");
    printf("Input:  ");
    print_array(arr2, n2);

    rotate_array_clockwise_by_one(arr2, n2);

    printf("Output: ");
    print_array(arr2, n2);
    printf("\n");

    return 0;
}