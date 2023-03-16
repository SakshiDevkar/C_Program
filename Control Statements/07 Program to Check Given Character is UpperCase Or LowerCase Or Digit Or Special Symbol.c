// Program to Check Given Character is UpperCase Or LowerCase Or Digit Or Special Symbol

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to Check whether, \n it is UpperCase Or LowerCase Or Digit Or Special Symbol = ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("\n Given Character is UpperCase Letter. ");
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
         printf("\n Given Character is LowerCase Letter. ");
    }
    else if((ch >= '0') && (ch <= '9'))
    {
        printf("\n Given Character is Digit. ");
    }
    else
    {
        printf("\n Given Character is Special Symbol ");
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}

