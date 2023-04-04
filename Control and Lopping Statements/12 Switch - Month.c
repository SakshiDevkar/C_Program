#include<stdio.h>
#include<conio.h>

int main()
{
    int Month = 0;
    printf("\n Enter A Month Number (1 - 12) = ");
    scanf("%d",&Month);

    switch(Month)
    {
        case 1:
                printf("\n January");
                break;
        case 2:
                printf("\n Febrvy");
                break;
        case 3:
                printf("\n March");
                break;
        case 4:
                printf("\n April");
                break;
        case 5:
                printf("\n May");
                break;
        case 6:
                printf("\n June");
                break;
        case 7:
                printf("\n July");
                break;
        case 8:
                printf("\n August");
                break;
        case 9:
                printf("\n Septamber");
                break;
        case 10:
                printf("\n Octomber");
                break;
        case 11:
                printf("\n November");
                break;
        case 12:
                printf("\n December");
                break;
        default:
                printf("\n Invalid Month");
                break;
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
