#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 0;

    printf("\n Enter A Number = ");
    scanf("%d",&Num);

    if((Num % 5 == 0)&&(Num % 7 == 0))
    {
        printf("\n Given Number is Divided By Both 5 and 7");
    }
    else if(Num % 5 == 0)
    {
        printf("\n Given Number is Divided By Only 5");
    }
    else if(Num % 7 == 0)
    {
        printf("\n Given Number is Divided By Only 7");
    }
    else
    {
        printf("\n Given Number Is Not Divided By 5 and 7");
    }

    printf("\n \n Thanks !!!");

    getch();
    return 0;
}
