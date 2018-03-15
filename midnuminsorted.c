#include<stdio.h>
void main()
{
    int n,a[5],i,m=0,midnum;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        m+=a[i];
    
    }
        midnum=m/n;
        printf("%d",midnum);
    
}
