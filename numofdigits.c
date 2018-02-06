#include<stdio.h>
void main()
{
    int a,i=0;
    printf("enter the integers:");
    scanf("%d",&a);
    while(a!=0)
    {
        a/=10;
        i+=1;
    }
        printf("number of digits=%d",i);
        
}
