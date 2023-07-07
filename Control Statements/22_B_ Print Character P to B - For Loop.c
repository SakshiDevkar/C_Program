#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    for(ch = 'P';ch >= 'B'; ch--)
    {
        printf("\n%c",ch);
    }
    getch();
    return 0;
}
