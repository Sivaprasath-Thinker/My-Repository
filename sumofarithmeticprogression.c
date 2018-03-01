#include<stdio.h>
void main()
{
    int n,a,d,i,sum=0,value;
    printf("enter the value:");
    scanf("%d%d%d",&n,&a,&d);
    value=a;
    for(i=a;i<=n;i++)
    {
        printf("%d\t",value);
        sum+=value;
        value+=d;
    }
    printf("\n%d",sum);
    
}


