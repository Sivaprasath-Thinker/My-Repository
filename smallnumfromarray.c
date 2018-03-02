#include<stdio.h>
void main()
{
    int a,i,max;
    int array[a];
    printf("enter the number of array:");
    scanf("%d",&a);
    printf("enter the array:");
    for(i=0;i<a;i++)
    {
        scanf("%d",&array[i]);
        max=array[0];
    }
    for(i=0;i<a;i++)
    {
        if(array[i]<max)
        {
            max=array[i];
        }
    }
    printf("%d",max);
}
