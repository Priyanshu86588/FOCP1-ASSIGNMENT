#include <stdio.h>

#define MAX_SIZE 10

void print_array(int arr[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("} (Current Size: %d)\n", n);
}

int insert_element(int arr[], int *n, int element, int position) {
    if (*n >= MAX_SIZE) {
        printf("ERROR: Array is full. Cannot insert %d.\n", element);
        return 0;
    }

    if (position < 0 || position > *n) {
        printf("ERROR: Invalid insertion position %d.\n", position);
        return 0;
    }

    for (int i = *n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    (*n)++;

    return 1;
}

int main() {
    int arr[MAX_SIZE] = {10, 20, 30, 40, 50};
    int current_size = 5;

    printf("Initial Array:\n");
    print_array(arr, current_size);
    printf("\n");

    int element_front = 99;
    int position_front = 0;

    printf("Inserting element %d at the FRONT (index %d):\n", element_front, position_front);
    if (insert_element(arr, &current_size, element_front, position_front)) {
        printf("Array After Insertion:\n");
        print_array(arr, current_size);
    }
    printf("\n");

    int element_end = 100;
    int position_end = current_size; 

    printf("Inserting element %d at the END (index %d):\n", element_end, position_end);
    if (insert_element(arr, &current_size, element_end, position_end)) {
        printf("Array After Insertion:\n");
        print_array(arr, current_size);
    }
    printf("\n");

    int element_middle = 55;
    int position_middle = current_size / 2;

    printf("Inserting element %d in the MIDDLE (index %d):\n", element_middle, position_middle);
    if (insert_element(arr, &current_size, element_middle, position_middle)) {
        printf("Array After Insertion:\n");
        print_array(arr, current_size);
    }
    printf("\n");

    return 0;
}