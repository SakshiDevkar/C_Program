//Program To Check Whether Given Number is Positive or Negative - Using if...else if

#include<stdio.h>
#include<conio.h>

int main()
{
     int Num = 0;

     printf("\n Enter an Integer Number = ");
     scanf("%d",&Num);

    if(Num == 0)
     {
        printf("\n Given Number is Neutral");
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
