#include<stdio.h>
#include<conio.h>
void main()
{
    char t;
    printf("enter the letter");
    scanf("%c",&t);
    if((t>='a' && t<='z')||(t>='A' && t<='Z'))
    {
      printf("alphabet");
    }
    else{
        printf("not an alphabet");
    }
}
