#include<stdio.h>
void main()
{
    int n,a[10],i,m=0,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        m+=a[i];
    
    }
        k=m/n;
        printf("%d",k);
    
}
