//Write a function to check whether a given string is an alphanumeric string or not.
//(Alphanumeric string must contain at least one alphabet and one digit)
#include <stdio.h>

int main()
{
    char s[100];
    int i,A=0,D=0;
    printf("Enter a string:\n");
    gets(s);
    for(i=0;s[i];i++)
    {
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z')
           A=1;
        if(s[i]>='0' && s[i]<='9' )
           D=1;
    }
    if(A==1 && D==1)
    {
       printf("%s is alphanumeric \n",s);
    }
    else{
       printf("%s is not alphanumeric \n",s);
    }
    return 0;
}
