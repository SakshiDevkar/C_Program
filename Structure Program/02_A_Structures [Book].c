#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

struct Books
{
    char Book_Name[40];
    char Book_Author[20];
    float Book_Pr;
};

int main()
{
    struct Books Book1, Book2, Book3;

    printf("\n Enter Book Name :");
    scanf("%[^\n]",&Book1.Book_Name);
    fflush(stdin);

    printf("\n Enter Book Author :");
    scanf("%[^\n]",&Book1.Book_Author);   /// fgets();
    fflush(stdin);

    printf("\n Enter Book Price :");
    scanf("%f",&Book1.Book_Pr);
    fflush(stdin);

    printf("\n Enter Book Name :");
    scanf("%[^\n]",&Book2.Book_Name);
    fflush(stdin);

    printf("\n Enter Book Author :");
    scanf("%[^\n]",&Book2.Book_Author);
    fflush(stdin);

    printf("\n Enter Book Price :");
    scanf("%f",&Book2.Book_Pr);
    fflush(stdin);

    printf("\n Enter Book Name :");
    scanf("%[^\n]",&Book3.Book_Name);
    fflush(stdin);

    printf("\n Enter Book Author :");
    scanf("%[^\n]",&Book3.Book_Author);
    fflush(stdin);

    printf("\n Enter Book Price :");
    scanf("%f",&Book3.Book_Pr);
    fflush(stdin);

    system("cls");

    printf("\n 1st Book Details Given are => \n\n\t Book Name - %s.\n\n\t Book Author - %s.\n\n\t Prize - %f.\n",Book1.Book_Name,Book1.Book_Author,Book1.Book_Pr);
    printf("\n 2nd Book Details Given are => \n\n\t Book Name - %s.\n\n\t Book Author - %s.\n\n\t Prize - %f.\n",Book2.Book_Name,Book2.Book_Author,Book2.Book_Pr);
    printf("\n 3rd Book Details Given are => \n\n\t Book Name - %s.\n\n\t Book Author - %s.\n\n\t Prize - %f.\n",Book3.Book_Name,Book3.Book_Author,Book3.Book_Pr);

    getch();
    return 0;
}

