#include<stdio.h>
void main()
{
    int min1,min2,hour1,hour2,min,hour;
    printf("enter the hour1&min1:");
    scanf("%d%d",&hour1,&min1);
    printf("enter the hour2&min2:");
    scanf("%d%d",&hour2,&min2);
    hour=hour1-hour2;
    min=min1-min2;
    printf("%d %d",hour,min);
}
