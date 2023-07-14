#include<stdio.h>
#include<stdlib.h>
#define size 5

int main()
{
    int Arr[size] = {},i = 0,Src = 0;

    for(i = 0; i < 5; i++)
    {
        printf("\n Value of RollNo %d = %d.", i+101,Arr[i]);
    }

    getch();

    system("cls");

    printf("\n Enter Array Elements => \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("\n Enter Element[%d] = ", i+101);
        scanf("%d",&Arr[i]);
    }

    for(i = 0; i < 5; i++)
    {
        printf("\n Value of RollNo %d = %d. ",i+501,Arr[i]);
    }
    printf("\n Press The Key To Continue...");

    getch();
    return 0;

}

