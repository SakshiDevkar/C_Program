#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch ='A';

    for(R = 1; R <= 5; R++)
    {
        for(ch = 'A',C = 1; C <= R; C++,ch++)
        {
            if(R >= C)
            {
                printf(" %c ",ch);
            }
        }
        printf("\n\n");
    }
    getch();
    return 0;
}

