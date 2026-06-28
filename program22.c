#include <stdio.h>
int main() {
    int n, dec = 0, base = 1, r;
    printf("Enter binary number: ");
    scanf("%d", &n);

    while(n > 0) {
        r = n % 10;
        dec = dec + r * base;
        base = base * 2;
        n = n / 10;
    }

    printf("Decimal = %d\n", dec);
    return 0;
}
