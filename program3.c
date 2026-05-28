#include <stdio.h>
void main()
{
    int n,i,fact=1;
    printf("enter a no");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        fact*=i;
    }
    print("factorial of %d =%d,n,f");
}