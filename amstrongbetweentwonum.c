#include<stdio.h>
void main()
{
    int a,b,i,temp,remd,value;
    printf("enter the value:");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
    temp=i;
    value=0;
    while(temp!=0)
    {
      remd=temp%10;
      value +=remd*remd*remd;
      temp /=10;
    }
    if(i==value)
    {
        printf("\t%d",i);
    }
    }
}
