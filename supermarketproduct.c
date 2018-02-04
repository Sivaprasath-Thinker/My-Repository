#include<stdio.h>
void main()
{
    char c,i,j;
    int chocolate=10,icecream=20,juice=30,*n,*n1,*n2;
    printf("1.chocolate\n2.icecream\n3.juice\nenter the product code:");
    char product;
   scanf("%c",&product);
switch(product)
{
    case'c':
                   n=&chocolate;
                   printf("chocolate in the rack=%d",*n);
                   printf("\nno of chocolate=%d",n);
                   break;
    case'i':
                   n1=&icecream;
                   printf("icecream in the rack=%d",*n1);
                   printf("\nno of icecream=%d",n1);
                   break;
    case'j':
                   n2=&juice;
                   printf("juice in the rack=%d",*n2);
                   printf("\nno of juice=%d",n2);
                   break;
    defult:
           printf("no product to buy");
                   
}
}
