#include<stdio.h>
void main()
{
    int n,i;
    int ary[10];
    printf("enter the no of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&ary[i]);
    }
      for(i=0;i<n;i++)
      {
          printf("%d\t%d\n",ary[i],i);
      }
}
