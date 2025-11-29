#include <stdio.h>

int main() {
    int n;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter the scores: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int max = arr[0];
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum score = %d\n", max);
    printf("Minimum score = %d\n", min);

    return 0;
}
