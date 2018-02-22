#include<stdio.h>
void main()
{
    int a,b=1,i;
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        b*=i;
    }
    printf("%d",b);
}
