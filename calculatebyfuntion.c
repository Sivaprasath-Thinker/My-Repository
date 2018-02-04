#include<stdio.h>
int main()
{
int x,y;
printf("enter the value=");
scanf("%d%d",&x,&y);
add(x,y);
sub(x,y);
mul(x,y);
divi(x,y);
return 0;
}
int add(int a,int b)
{
    int sum=a+b;
    printf("the value of sum=%d",sum);
    printf("\n");
    return 0;
}
int sub(int a,int b)
{
    int sub=a-b;
    printf("the value of sub=%d",sub);
    printf("\n");
    return 0;
}
int mul(int a,int b)
{
   int mult=a*b;
   printf("the value of mult=%d",mult);
   printf("\n");
   return 0;
}
int divi(int a,int b)
{
    int divi=a%b;
    printf("the value of divi=%d",divi);
    printf("\n");
    return 0;
}
