#include <stdio.h>

int main()
{
    int a[10],i,sum=0;
   
    printf("Enter a number ");
    for(i=0;i<9;i++)
       scanf("%d",&a[i]);
    for(i=0;i<9;i++)
        sum=sum+a[i];
    
    printf("Sum is %d",sum);
    return 0;
}