#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number");
    scanf("%d",&x);
    
    printf("Unit digit of given number %d",x%10);
}