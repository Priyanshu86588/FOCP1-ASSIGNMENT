#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = NULL;
    int current_size = 0;
    int delete_position;
    int i;

    printf("Enter number of elements: ");
    if (scanf("%d", &current_size) != 1 || current_size <= 0) {
        printf("Invalid size or input.\n");
        return 1;
    }

    arr = (int *)malloc(current_size * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter %d elements:\n", current_size);
    for (i = 0; i < current_size; i++) {
        printf("Element %d: ", i);
        if (scanf("%d", &arr[i]) != 1) {
            printf("Invalid input. Exiting.\n");
            free(arr);
            return 1;
        }
    }
    
    printf("\nArray BEFORE deletion: {");
    for (i = 0; i < current_size; i++) {
        printf("%d", arr[i]);
        if (i < current_size - 1) {
            printf(", ");
        }
    }
    printf("}\n");
    
    printf("Enter position to delete (index 0 to %d): ", current_size - 1);
    if (scanf("%d", &delete_position) != 1) {
        printf("Invalid input. Exiting.\n");
        free(arr);
        return 1;
    }

    if (delete_position < 0 || delete_position >= current_size) {
        printf("Error: Invalid position %d for deletion.\n", delete_position);
        free(arr);
        return 1;
    }

    for (i = delete_position; i < current_size - 1; i++) {
        arr[i] = arr[i + 1];
    }

    current_size--;

    printf("Array AFTER deletion:  {");
    for (i = 0; i < current_size; i++) {
        printf("%d", arr[i]);
        if (i < current_size - 1) {
            printf(", ");
        }
    }
    printf("}\n");

    free(arr);
    return 0;
}