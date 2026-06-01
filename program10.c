#include <stdio.h>
void main()
{
    int start,end,n,i,c;
    printf("Enter starting no.");
    scanf("%d",&start);
    printf("Enter ending no.");
    scanf("%d",&end);
    for(n=start;n<=end;n++)
    {
        c=0;
        
        for(i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                c++;
            }
        }
        if(c==2)
        {
            printf("%d",n);
        }
    }
    
}