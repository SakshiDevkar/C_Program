#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character is Owelles = ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
                printf("\n Given Character is Owelles");
                break;

        default:
                printf("\n Given Character is Alphabate");
                break;
    }

    printf("\n \n Thanks !!!");

    getch();
    return 0;
}
