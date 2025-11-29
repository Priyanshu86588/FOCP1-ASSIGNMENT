#include <stdio.h>

int subtract(int a, int b) {
    int neg_b = ~b + 1;

    while (neg_b != 0) {
        int carry = a & neg_b;
        a = a ^ neg_b;
        neg_b = carry << 1;
    }

    return a;
}

int main() {
    int x, y;
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    int result = subtract(x, y);
    printf("Result = %d\n", result);

    return 0;
}
