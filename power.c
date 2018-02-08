#include<stdio.h>
#include<math.h>
void main()
{
    int num,power,value;
    printf("enter the value:");
    scanf("%d%d",&num,&power);
    value=pow(num,power);
    printf("%d",value);
}
