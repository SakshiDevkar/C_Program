//Program To Check Whether Given Number is Even or Odd - Using ternary operator

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

   (No==0)?printf("Neutral"):No%2==0?printf("Even"):printf("Odd");

    printf("\n Thanks!!!");

    getch();
    return 0;
}
