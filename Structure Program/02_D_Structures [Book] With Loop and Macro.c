#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

#define Size 2

struct Books
{
    char Book_Name[40];
    char Book_Author[20];
    float Book_Pr;
};

int main()
{
    int i = 0;
    struct Books Bk[Size];

    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Book Name :");
        scanf("%[^\n]",&Bk[i].Book_Name);
        fflush(stdin);

        printf("\n Enter Book Author :");
        scanf("%[^\n]",&Bk[i].Book_Author);   /// fgets();
        fflush(stdin);

        printf("\n Enter Book Price :");
        scanf("%f",&Bk[i].Book_Pr);
    }

    system("cls");

    for(i = 0; i < Size; i++)
    {
        printf("\n Book Details Given are => \n\n\t Book Name - %s.\n\n\t Book Author - %s.\n\n\t Prize - %f.\n",&Bk[i].Book_Name,&Bk[i].Book_Author,&Bk[i].Book_Pr);
    }

    getch();
    return 0;
}

