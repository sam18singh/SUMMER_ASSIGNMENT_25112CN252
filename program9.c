#include <stdio.h>
void main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c=c+1;
        }
    }
    if (c==2)
    {
        printf("prime no.");
    }
    else
    {
        printf("not a prime no.");
    }
}