#include <stdio.h>

int main()
{
   int x;
    printf("Enter a number:\n");
    scanf("%d",&x);
     switch(x%2==0){
         case 1:printf("even number into its upper nearest odd number %d ", x+1);
         break;
          case 0:printf("%d",x);
     }
         return 0;
}