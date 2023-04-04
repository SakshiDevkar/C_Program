// Program to Check Given Character is UpperCase Or LowerCase

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to Check whether, \n it is UpperCase Or LowerCase = ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("\n Given Character is UpperCase Letter. ");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
         printf("\n Given Character is LowerCase Letter. ");
    }
    else
    {
        printf("\n Given Character is Neither UpperCase Not LowerCase ");
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}
