#include<stdio.h>
#include<conio.h>
#include<string.h>

int main()
{
    int Count  = 0;
    char Name[20] = "";
    char SNm[20] = "";

    printf("\n Enter Name1 = ");
    gets(Name);

    printf("\n Enter Name2 = ");
    gets(SNm);

    Count = strncmp(Name, SNm, 4);

    if(Count == 0)
    {
        printf("\n String 1st has 4 Letter same as 2nd Strings.");
    }
    else
    {
        printf("\n String 1st has 4 Letter Different as 2nd Strings.");
    }

    getch();
    return 0;
}




