#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, digits = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    int temp = num;
    while (temp != 0) {
        temp /= 10;
        digits++;
    }

    temp = num;
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if ((int)sum == original)
        printf("%d is an Armstrong number.\n", original);
    else
        printf("%d is NOT an Armstrong number.\n", original);

    return 0;
}
