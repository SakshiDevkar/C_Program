#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[5] = {};
    int i = 0;

    //Displaying Array Elements
    for(i = 0; i < 5; i++)
    {
        printf("\n Value of RollNo %d = %d.", i+101,Arr[i]);
    }

    getch();
    system("cls");

    printf("\n Enter Array Elements => \n\n");

    //Accepting Array Elements
    for(i = 0; i < 5; i++)
    {
        printf("\n Enter Element[%d] = ", i+101);
        scanf("%d",&Arr[i]);
    }

    //Display For New Array Elements
    for(i = 0; i < 5; i++)
    {
        printf("\n Value of RollNo %d = %d. ",i+501,Arr[i]);
    }
    printf("\n Press The Key To Continue...");

    getch();
    return 0;

}
