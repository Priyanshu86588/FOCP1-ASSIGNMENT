#include <stdio.h>

int main() {
    int n;

    printf("Enter array size: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int pos = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == 99) {
            pos = i;
            break;
        }
    }

    if (pos == -1)
        printf("99 not found\n");
    else
        printf("99 found at index %d\n", pos);

    return 0;
}

