#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, X = 0;

    printf("\n Enter Size for Pattern :");
    scanf("%d",&X);

    printf("\n ================Pattern=================\n\n");

    for(r = 1; r<= X; r++)
    {
        for(c =1; c <= X; c++)
        {
            if( r <= c )
                {
                   printf(" * ");
                }
            else
            {
                 printf("   ");
            }
        }
        printf("\n");
    }

    printf("\n=========================================\n");

    getch();
    return 0;
}

