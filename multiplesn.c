#include<stdio.h>
void main()
{
    int a,i,sum;
    printf("enter the value:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        sum=a*i;
        printf("%d\t",sum);

    }
}
