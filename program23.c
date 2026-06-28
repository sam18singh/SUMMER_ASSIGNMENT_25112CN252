#include <stdio.h>
int main() {
    int n, c = 0;
    printf("Enter number: ");
    scanf("%d", &n);

    while(n > 0) {
        if(n % 2 == 1)
         {
            c++;
        }
        n = n / 2;
    }
    // Print total number of 1s in binary representation
    printf("Set bits = %d\n", c);
    return 0;
}
// taking output in decimal and then convert it into binary and then count 1s in that.