#include<stdio.h>
#include<conio.h>

int main()
{
    int No[7] = {};

    printf("\n Enter Value for Element Number 1 = ");
    scanf("%d", &No[0]);
    printf("\n Enter Value for Element Number 2 = ");
    scanf("%d", &No[1]);
    printf("\n Enter Value for Element Number 3 = ");
    scanf("%d", &No[2]);
    printf("\n Enter Value for Element Number 4 = ");
    scanf("%d", &No[3]);
    printf("\n Enter Value for Element Number 5 = ");
    scanf("%d", &No[4]);
    printf("\n Enter Value for Element Number 6 = ");
    scanf("%d", &No[5]);
    printf("\n Enter Value for Element Number 7 = ");
    scanf("%d", &No[6]);

    printf("\n Value of Element 1 = %d .",No[0]);
    printf("\n Value of Element 2 = %d .",No[1]);
    printf("\n Value of Element 3 = %d .",No[2]);
    printf("\n Value of Element 4 = %d .",No[3]);
    printf("\n Value of Element 5 = %d .",No[4]);
    printf("\n Value of Element 6 = %d .",No[5]);
    printf("\n Value of Element 7 = %d .",No[6]);


    getch();
    return 0;
}


