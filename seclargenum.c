#include<stdio.h>
void main()
{
    int a,ary[a],max1=0,max2=0,min=0,i;
    printf("enter the no of array:");
    scanf("%d",&a);
    printf("enter the array:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&ary[i]);
        min=max2;
        max2=max1;
        max1=ary[i];
    }
    for(i=0;i<max1;i++);
    {
        if((max2<max1)&&(max2<min))
        {
            printf("%d",max1);
        }
        else
        {
            printf("%d",min);
        }
    }
    printf("%d",max2);
}
