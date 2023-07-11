#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0, C = 0;
    char ch ='A';

    for(ch = 'A',R = 1; R <= 5; R++)
    {
        for(C = 1; C <= R; C++)
        {
            if(R == C || R >= C)
            {
                printf(" %c ",ch);
                ch = ch + 3;

                if(ch > 'Z')
                {
                    ch = 'A' +(ch - 'Z')-1;
                }
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n\n");
    }
    getch();
    return 0;
}



