
#include<stdio.h>
int main()
{
int unit;
float bill;
float total_bill;
printf("enter the unit");
scanf("%d",&unit);
if(unit<=50)
{
    bill=unit*0.50;
    printf("%f",bill);
}
else if(unit>50&&unit<=150)
{
    bill=(50*0.50)+(unit-50)*0.75;
    printf("%f",bill);
}
else if(unit>150&&unit<=250)
{
    bill=(50*0.50)+(100*0.75)+(unit-150)*1.2;
    printf("%f",bill);
}
else if(unit>250)
{
    bill=(50*0.50)+(100*0.75)+(100*1.25)+(unit-250)*1.75;
    printf("%f",bill);
}
total_bill=(bill*1.2);
printf(" your total bill is Rs.%f",total_bill);
}
