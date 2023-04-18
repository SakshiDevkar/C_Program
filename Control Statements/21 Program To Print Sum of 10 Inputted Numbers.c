#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
    int Bill = 0, Total = 0, Cnt = 0;

    printf("\n Enter 10 Bill Amounts => \n");

    for(Cnt = 1; Cnt <= 10; Cnt++);
    {
        printf("\n Enter Bill %d =", Cnt);
        scanf("%d",&Bill);

        Total = Total + Bill;
    }

    printf("\n Total of Todays 10 Bills = %d.", Total);

    getch();
    return 0;
}
