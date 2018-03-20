#include<stdio.h>
void main()
{
    int n,i,ary[10],max=0;
    scanf("%d",&n);
    printf("enter the ary:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ary[i]);
    }
    max=ary[0];
    for(i=0;i<n;i++)
    {
        if(max<ary[i])
        {
           max=ary[i];
        }
    }
    printf("%d",max);
}
