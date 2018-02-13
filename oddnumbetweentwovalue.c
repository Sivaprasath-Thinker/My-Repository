#include<stdio.h>
void main()
{
    int a,b,i;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    for(i=2;i<b;i++)
    {
        if(i%2==1)
        {
        printf("%d",i);
        }
    }
    
}
