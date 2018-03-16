#include<stdio.h>
void main()
{
    char s[10],i;
    printf("enter the letter:");
    scanf("%s",&s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a')&&(s[i]<='z'))
        {
            printf("no\t");
        }
        else
        {
            printf("yes\t");
        }
    }
}
