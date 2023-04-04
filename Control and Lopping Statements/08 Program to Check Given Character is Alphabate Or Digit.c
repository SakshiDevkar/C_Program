// Program to Check Given Character is Alphabate Or Digit.

#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to Check whether, \n it is Alphabate Or Digit = ");
    scanf("%c",&ch);

    if((ch >= 'A') && (ch <= 'Z') || (ch >= 'a') && (ch <= 'z'))
    {
        printf("\n Given Character is Alphabate. ");
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
