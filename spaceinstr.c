#include<stdio.h>
void main()
{
    char str[50],i,n=0;
    printf("enter the strings:");
    gets(str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==' ')
        {
            n++;
        }
    }
    printf("%d",n);
}
