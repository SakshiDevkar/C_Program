#include<stdio.h>
#include<conio.h>
#include<string.h>

#define Size 2

struct Student
{
    int RollNo;
    char Name[30];
    char City[10];
    float Per;
};

int main()
{
    int i = 0;
    struct Student std[Size];


    for(i = 0; i < Size; i++)
    {
        printf("\n Enter Roll No :");
        scanf("%d",&std[i].RollNo);

        fflush(stdin);

        printf("\n Enter Name :");
        scanf("%[^\n]",&std[i].Name);

        fflush(stdin);

        printf("\n Enter City :");
        scanf("%[^\n]",&std[i].City);

        fflush(stdin);

        printf("\n Enter Percentage :");
        scanf("%f",&std[i].Per);
    }

    system("cls");

    for(i = 0; i < Size; i++)
    {
       printf("\n %d Student Details Given are => \n\n\t Roll No - %d.\n\n\t Name - %s.\n\n\t City - %s.\n\n\t Percentage - %f.\n",std[i].RollNo,std[i].Name,std[i].City,std[i].Per);

    }

    getch();
    return 0;
}

