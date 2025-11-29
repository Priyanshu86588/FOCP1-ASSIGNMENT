#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (a < 0) a = -a;
    if (b < 0) b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF = %d\n", a);
    return 0;
}
