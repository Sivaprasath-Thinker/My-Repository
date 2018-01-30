#include<stdio.h>
#include<conio.h>
void main()
{
    char letter;
    printf("enter the letter");
    scanf("%c",&letter);
    switch(letter)
    {
        case 'a':
              printf("vowels");
              break;
        case 'e':
              printf("vowels");
              break;
        case 'i':
              printf("vowels");
              break;
        case 'o':
              printf("vowels");
              break;
        case'u':
              printf("vowels");
              break;
        default:
              printf("consonant");
              break;
    }
    
}
