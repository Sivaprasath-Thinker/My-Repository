#include<stdio.h>
void main()
{
    int a,b,i,sum=1;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    sum+=a;
    for(i=sum;i<b;i++)
    {
        if(i%2==0)
        {
            printf("%d\t",i);
        }
    }
}
