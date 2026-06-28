#include <stdio.h>

int fib(int n)
 {
    if(n == 0) 
    return 0;   // base case
    if(n == 1) 
    return 1;   // base case
    return fib(n - 1) + fib(n - 2);  // recursive call
}

int main() {
    int n, i;
    printf("Enter terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");
    for(i = 0; i < n; i++) {
        printf("%d ", fib(i));
    }
    return 0;
}
