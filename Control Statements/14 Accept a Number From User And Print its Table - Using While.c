#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, i = 0;

    printf("\n Enter a Number To Print its Table = ");
    scanf("%d",&No);

    i = 1;

    while(i <= 10)
    {
        printf("\n %d",(i * No));
        i++;
    }

    printf("\n Thanks !!!");

    getch();
    return 0;
}
