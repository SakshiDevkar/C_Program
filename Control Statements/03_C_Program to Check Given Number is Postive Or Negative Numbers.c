//Program To Check Whether Given Number is Positive or Negative - Using goto

#include<stdio.h>
#include<conio.h>

int main()
{
     int Num = 0;

     Up:

     printf("\n Enter an Integer Number = ");
     scanf("%d",&Num);

    if(Num == 0)
     {
        printf("\n Given Number is Neutral. \n Please change the Number \n");
        goto Up;
     }
    else if(Num > 0)
    {
        printf("\n Given Number is Positive");
    }
    else
    {
        printf("\n Given Number is Negative");
    }

    printf("\n Thanks!!!");

    getch();
    return 0;
}
