//Program To Check Whether Given Number is Positive or Negative - Using ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{
     int Num = 0;

     Up:

     printf("\n Enter an Integer Number = ");
     scanf("%d",&Num);

    (Num > 0)?printf("\n Given Number is Positive"):printf("\n Given Number is Negative");

     printf("\n Thanks!!!");

    getch();
    return 0;
}
