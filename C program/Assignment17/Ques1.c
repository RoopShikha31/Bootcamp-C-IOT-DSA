//Write a program to calculate the length of the string.
#include <stdio.h>

int main()
{
   char a[] = "RoopShikha";
   int i=0,count=0;
   while(a[i] !='\0')
   {
      i++;
      count++;
   }
   printf(" %d",count);
    return 0;
}
