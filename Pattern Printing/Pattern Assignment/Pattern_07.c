#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0;
    int A = 7;

    for(R = 1; R <= 5 ; R++)
    {
        for(C = 1; C <= R; C++)
        {
            printf(" %d ",A);
            A = A + 7;
        }
            printf("\n");

    }

    getch();
    return 0;
}


