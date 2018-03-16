#include<stdio.h>
void main()
{
    char s[50],i,n=0;
    printf("enter the string");
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
      if(s[i]>'a' && s[i]<'z')
     {
         n++;
     }
    }
         printf("%d",n);
}
