#include <stdio.h>
int sumofdigits(int n) 
{
    if(n == 0)          // base case
        return 0;
        
    return (n % 10) + sumofdigits(n / 10);   // last digit + remaining number
}

int main() 
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);
    printf("Sum of digits = %d", sumofdigits(n));
    return 0;
}
