#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Values[5] = {};

    printf("\n Value of 1st Element = %d .",Values[0]);
    printf("\n Value of 2nd Element = %d .",Values[1]);
    printf("\n Value of 3rd Element = %d .",Values[2]);
    printf("\n Value of 4th Element = %d .",Values[3]);
    printf("\n Value of 5th Element = %d .",Values[4]);

    getch();

    system("cls");

    printf("\n Enter Array Elements => \n\n");

    printf("\n Enter Element[0] = ");
    scanf("%d",&Values[0]);
    printf("\n Enter Element[1] = ");
    scanf("%d",&Values[1]);
    printf("\n Enter Element[2] = ");
    scanf("%d",&Values[2]);
    printf("\n Enter Element[3] = ");
    scanf("%d",&Values[3]);

    Values[3] = 77;
    Values[2] = 55;
    Values[4] = 99;
    printf("\n Enter Element[4] =");
    scanf("d",&Values[4]);

    printf("\n Value of 1 Element = %d .",Values[0]);
    printf("\n Value of 2 Element = %d .",Values[1]);
    printf("\n Value of 3 Element = %d .",Values[2]);
    printf("\n Value of 4 Element = %d .",Values[3]);
    printf("\n Value of 5 Element = %d .",Values[4]);

    printf("\n\n Press any key to continue...");

    getch();
    return 0;
}

