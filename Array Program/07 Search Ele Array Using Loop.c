#include<stdio.h>
#include<stdlib.h>

int main()
{
    int i = 0, Src = 0, Arr[5] = {};

    printf("\n Enter Array Elements => \n\n");

    for(i = 0; i < 5; i++)
    {
        printf("\n Enter Element[%d] = ",i+101);
        scanf("%d",&Arr[i]);
    }

    getch();
    system("cls");

    for(i = 0; i < 5; i++)
    {
        printf("\n Element %d = %d.",i+1,Arr[i]);
    }
    getch();
    system("cls");

    printf("\n Enter Element to be Searched => ");
    scanf("%d",&Src);

    for(i = 0; i < 5; i++)
    {
        if(Src == Arr[i])
        {
            break;
        }
    }
    if(i == 5)
    {
        printf("\n Element Not Found in Given Array");
    }
    else
    {
        printf("\n Element Found at Location = %d.",i);
    }

    printf("\n\n Press Any Key To Continue...");

    getch();
    return 0;

}
