#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter a Character to View Corresponding Message = ");
    scanf("%c",&ch);

    if(ch == 'A'|| ch  == 'a')
    {
        printf("\n Welcome");
    }
    else if(ch == 'B' || ch == 'b')
    {
        printf("\n Good Day");
    }
    else if(ch == 'C' || ch == 'c')
    {
        printf("\n Have a Nice Day");
    }
    else if(ch == 'D' || ch == 'd')
    {
        printf("\n Good Bye");
    }
    else
    {
        printf("\n Message for Such Character.... ");
    }

    printf("\n\n Thanks !!!");

    getch();
    return 0;
}
