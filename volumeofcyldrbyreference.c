#include<stdio.h>
void main()
{
  
   int a,b;
   volume(&a,&b);
   return 0;
}
int volume( int *r,int *h)
{
    printf("enter the value");
    scanf("%d%d",&(*r),&(*h));
    float v=3.14*(*r)*(*r)*(*h);
    printf("the volume of cylinder=%f",v);
    return 0;
}
