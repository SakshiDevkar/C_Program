#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = 'P';

    while(ch >= 'B')
    {
        printf("\n%c",ch);
        ch--;
    }
    getch();
    return 0;
}
