#include<stdio.h>
int main()
{
int a;
printf("enter the value");
scanf("%d",&a);
if(a==0)
{
printf("value is zero ");
}
else if(a<1)
{
printf("value is negative");
}
else
{
printf("value is positive");
}
}
