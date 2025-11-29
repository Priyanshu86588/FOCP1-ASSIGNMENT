#include <stdio.h>

void swap_temp(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap_arithmetic(int *a, int *b) {
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void swap_xor(int *a, int *b) {
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}

void swap_pointers(int *a, int *b) {
    int *temp = a;
    a = b;
    b = temp;
    printf("Pointer swap works only within its scope.\n");
}

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("\nOriginal: x = %d, y = %d\n", x, y);

    swap_temp(&x, &y);
    printf("After temp swap: x = %d, y = %d\n", x, y);

    swap_arithmetic(&x, &y);
    printf("After arithmetic swap: x = %d, y = %d\n", x, y);

    swap_xor(&x, &y);
    printf("After XOR swap: x = %d, y = %d\n", x, y);

    swap_pointers(&x, &y);
    printf("Pointer-based swap shown (no effect on actual variables).\n");

    return 0;
}
