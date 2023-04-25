#include<stdio.h>
#include<conio.h>

int main()
{
     int Values[5] = {19, 22, 15};

    printf("\n Value of 1 Element = %d .",Values[0]);
    printf("\n Value of 2 Element = %d .",Values[1]);
    printf("\n Value of 3 Element = %d .",Values[2]);
    printf("\n Value of 4 Element = %d .",Values[3]);
    printf("\n Value of 5 Element = %d .",Values[4]);

    getch();

    Values[4] = 50;
    Values[2] = 456;
    Values[0] = Values[4] + Values[3];

    printf("\n\n New Values => \n\n");

    printf("\n Value of 1 Element = %d .",Values[0]);
    printf("\n Value of 2 Element = %d .",Values[1]);
    printf("\n Value of 3 Element = %d .",Values[2]);
    printf("\n Value of 4 Element = %d .",Values[3]);
    printf("\n Value of 5 Element = %d .",Values[4]);

    getch();
    return 0;
}
