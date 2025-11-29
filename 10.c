#include <stdio.h>

int main() {
    int n;

    printf("Enter number of students: ");
    scanf("%d", &n);

    int marks[n];

    printf("Enter the marks: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &marks[i]);

    int count = 0;

    printf("Students who scored 99: ");

    for (int i = 0; i < n; i++) {
        if (marks[i] == 99) {
            printf("%d ", i);
            count++;
        }
    }

    if (count == 0)
        printf("None");

    printf("\nTotal students scoring 99 = %d\n", count);

    return 0;
}
