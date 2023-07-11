#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch ='A';

    for(ch = 'A',R = 1; R <= 5; R++,ch++)
    {
        for(C = 1; C <= R; C++)
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


