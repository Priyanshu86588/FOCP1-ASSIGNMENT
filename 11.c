#include <stdio.h>

int main() {
    int n;

    printf("Enter number of scores: ");
    scanf("%d", &n);

    int arr[n], even_array[n], odd_array[n];
    int e = 0, o = 0;

    printf("Enter the scores: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even_array[e++] = arr[i];
        else
            odd_array[o++] = arr[i];
    }

    printf("Even scores: ");
    for (int i = 0; i < e; i++)
        printf("%d ", even_array[i]);

    printf("\nOdd scores: ");
    for (int i = 0; i < o; i++)
        printf("%d ", odd_array[i]);

    return 0;
}
