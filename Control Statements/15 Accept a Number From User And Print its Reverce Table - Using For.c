#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number To Print its Reverse Table = ");
    scanf("%d",&No);

    for(i = 10; i >= 1; i--)
    {
        printf("\n %d",(i * No));
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}

