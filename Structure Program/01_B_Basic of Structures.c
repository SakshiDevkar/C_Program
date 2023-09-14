#include<stdio.h>
#include<conio.h>
#include<string.h>

struct Stud
{
    int RollNo;
    char Name[30];
    char City[8];
    float Per;
};

int main()
{
    struct Stud std1, std2, std3 = {1, "Samiksha Ghadge", "Satara", 95.60};

    std1.RollNo = 2;
    strcpy(std1.Name, "Sakshi Devkar");             //Function for Student Copy
    strcpy(std1.City, "Kirpe");
    std1.Per = 99.99;

    printf("\n Enter Roll No :");
    scanf("%d",&std2.RollNo);

    fflush(stdin);         // fflush(stdin) = "%[ ^/n]"   fflush(stdin) cha Space dila tri chalto  ^ cha adhi

    printf("\n Enter Name :");
    scanf("%[^\n]",&std2.Name);   /// fgets();

    fflush(stdin);

    printf("\n Enter City :");
    scanf("%[^\n]",&std2.City);

    fflush(stdin);

    printf("\n Enter Percentage :");

    scanf("%f",&std2.Per);

    printf("\n 1st Student Details Given are => \n\n\t Roll No - %d.\n\n\t Name - %s.\n\n\t City - %s.\n\n\t Percentage - %f.\n",std1.RollNo,std1.Name,std1.City,std1.Per);
    printf("\n 2nd Student Details Given are => \n\n\t Roll No - %d.\n\n\t Name - %s.\n\n\t City - %s.\n\n\t Percentage - %f.\n",std2.RollNo,std2.Name,std2.City,std2.Per);
    printf("\n 3rd Student Details Given are => \n\n\t Roll No - %d.\n\n\t Name - %s.\n\n\t City - %s.\n\n\t Percentage - %f.\n",std3.RollNo,std3.Name,std3.City,std3.Per);

    getch();
    return 0;
}

