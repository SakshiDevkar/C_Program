#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n ASCII table = ");

    for(No = 0; No <= 127; No++)
    {
        printf("\t\t\n %3d = %c",No,No);
    }

    getch();
    return 0;
}
