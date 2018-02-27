#include<stdio.h>
void main()
{
    int a,temp,remd,value=0;
    printf("enter the value:");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
    {
      remd=temp%10;
      value +=remd*remd*remd;
      temp /=10;
    }
    if(value==a)
    {
        printf("yes,it is amstrong");
    }
    else
    {
        printf("no,it is not amstrong ");
    }
}
