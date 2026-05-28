#include <stdio.h>
void main(){
int n,count =0;
printf("ENTER A NO.");
scanf("%d",&n);
while(n!=0){
    n=n/10;
    count++;
}
printf("number of digits=%d",count);
}
