#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to View Corresponding Message = ");
    scanf("%c",&ch);

    switch(ch)
    {
        case 'A':
        case 'a':
                printf("\n Welcome");
                break;

        case 'B':
        case 'b':
                printf("\n Good Day");
                break;

        case 'C':
        case 'c':
        case 'M':
        case 'm':
                printf("\n Have a Nice Day");
                break;

        case 'D':
        case 'd':
        case 'Q':
        case 'q':
        case 'Z':
        case 'z':
                printf("\n Good Bye");
                printf("\n Take Care");
                break;

        default:
                printf("\n No Message for Such Character...");
                break;
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;

}
