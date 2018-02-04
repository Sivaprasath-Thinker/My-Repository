#include<stdio.h>
void main()
{
    int a=10,b=5;
    printf("%d%d",a,b);
    swap(a,b);
    
}
int swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("\n");
    printf("%d%d",x,y);
}
