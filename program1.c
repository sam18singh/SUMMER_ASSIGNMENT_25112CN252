#include <stdio.h>
void main()
{
    int n,i,s=0;
    scanf("%d",n);
    for (i=1;i<=n;i++)
    {
      s+=i;  
    }
    printf("sum of 1 to %d=%d",n,s);
}