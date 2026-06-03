#include <stdio.h>
void main()
{
    int n, temp,digit,fact,sum=0,i;
    
    printf("Enter no");
    scanf("%d",&n);
     
    temp=n;
    while(temp>0)
    {
        digit = temp% 10;
        fact=1;
        
        for(i=1;i<=digit;i++)
        {
            fact= fact*i;  
    
        }
        sum= sum+ fact;
        temp/=10;
    }
    if(sum==n)
    printf("%d is a strong number",n);
    else
    printf("%d is not a strong number",n)
    
}