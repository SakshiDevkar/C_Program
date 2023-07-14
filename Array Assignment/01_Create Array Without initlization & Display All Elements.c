#include<stdio.h>
#include<conio.h>

int main()
{
    int Num[5] = {};

    printf("\n Enter Value for Element Number 1 = ");
    scanf("%d", &Num[0]);
    printf("\n Enter Value for Element Number 2 = ");
    scanf("%d", &Num[1]);
    printf("\n Enter Value for Element Number 3 = ");
    scanf("%d", &Num[2]);
    printf("\n Enter Value for Element Number 4 = ");
    scanf("%d", &Num[3]);
    printf("\n Enter Value for Element Number 5 = ");
    scanf("%d", &Num[4]);

    printf("\n Value of Element 1 = %d .",Num[0]);
    printf("\n Value of Element 1 = %d .",Num[1]);
    printf("\n Value of Element 1 = %d .",Num[2]);
    printf("\n Value of Element 1 = %d .",Num[3]);
    printf("\n Value of Element 1 = %d .",Num[4]);

    getch();
    return 0;
}

