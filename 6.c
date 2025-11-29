#include <stdio.h>
#include <math.h>

int binary_to_decimal(long binary) {
    int decimal = 0, base = 1, rem;
    while (binary > 0) {
        rem = binary % 10;
        decimal += rem * base;
        base *= 2;
        binary /= 10;
    }
    return decimal;
}

long decimal_to_binary(int decimal) {
    long binary = 0;
    long base = 1;
    int rem;
    while (decimal > 0) {
        rem = decimal % 2;
        binary += rem * base;
        base *= 10;
        decimal /= 2;
    }
    return binary;
}

int main() {
    int choice;
    printf("1. Binary to Decimal\n2. Decimal to Binary\nEnter your choice: ");
    scanf("%d", &choice);

    if (choice == 1) {
        long binary;
        printf("Enter a binary number: ");
        scanf("%ld", &binary);
        printf("Decimal = %d\n", binary_to_decimal(binary));
    }
    else if (choice == 2) {
        int decimal;
        printf("Enter a decimal number: ");
        scanf("%d", &decimal);
        printf("Binary = %ld\n", decimal_to_binary(decimal));
    }
    else {
        printf("Invalid choice\n");
    }

    return 0;
}

