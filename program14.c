#include <stdio.h>
void main()
{
    int n,a=0,b=1,c,i;
    scanf("%d",&n);
    printf("fibonacci series=%d\n%d,a,b");
    for(i=1;i<=n-2;i++)
    {
        c=a+b;
    printf("%d\n",c);
a=b;
b=c;    }
}