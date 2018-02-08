#include<stdio.h>
void main()
{
int a,orgint,revint=0,remainder;
printf("enter the value:");
scanf("%d",&a);
orgint=a;
while(a!=0)
{
 remainder=a%10;
 revint=revint*10+remainder;
 a/=10;
}
if(orgint==revint)
{
    printf("%d is palindrome",revint);
}
else
{
    printf("%d is not palindrom",revint);
}
}
