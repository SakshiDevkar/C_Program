///Print Table of Given Number

#include<stdio.h>
#include<conio.h>

int main()
{
    int S_No = 0, E_No = 0, R = 0, C = 0;

    printf("\n Enter Start No = ");
    scanf("%d",&S_No);

    printf("\n Enter End No = ");
    scanf("%d",&E_No);

    printf("\n\n Tables In Range %d To %d => ", S_No, E_No);

    printf("\n ================*****=================\n\n");

    for(R = 1; R <= 10; R++)
    {
        for(C = S_No; C <= E_No; C++)
        {
            printf(" %-4d", R * C);
        }
        printf("\n");
    }
    printf("\n ================*****=================\n");

    getch();
    return 0;
}
