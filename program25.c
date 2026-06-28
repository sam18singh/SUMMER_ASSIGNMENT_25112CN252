#include <stdio.h>
int fact(int n) {
    if(n == 0)
    return 1;       // base case
    return n * fact(n - 1);    // recursive call
}

int main()
 {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Factorial = %d\n", fact(n));
    return 0;
}
