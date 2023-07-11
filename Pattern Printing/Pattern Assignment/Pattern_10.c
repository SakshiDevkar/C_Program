#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0,ch = 0;

    for(R = 1; R <= 5; R++)
    {
        for(ch = 2,C = 1; C <= R; C++, ch++)
        {
           if(R >= C)
           {
                printf(" %d ",ch);
                ch = ch + 1;
           }
        }
            printf("\n");

    }
    getch();
    return 0;
}

