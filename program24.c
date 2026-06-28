#include <stdio.h>
int main() {
    int x, n, i, result = 1;   // x = base, n = power

    printf("Enter base: ");
    scanf("%d", &x);
    printf("Enter power: ");
    scanf("%d", &n);

    // Multiply x by itself n times
    for(i = 1; i <= n; i++) 
    {
        result = result* x;     
    }
    printf("%d^%d = %d\n", x, n, result);
    return 0;
}
//x^n in code, it would calculate XOR, not power 