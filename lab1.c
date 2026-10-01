#include <stdio.h>

int main(void) {
    int x, y;

    scanf("%d %d", &x, &y);   // user types: 10 20

    printf("Sum: %d\n", x + y);
    printf("Difference: %d\n", x - y);
    printf("Product: %d\n", x * y);
    printf("Quotient: %d\n", x / y);
    printf("Remainder: %d\n", x % y);

    return 0;
}