//Program To Check Whether Given Number is Even or Odd - Using goto

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    Up:

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if(No==0)
    {
        printf("\n Given Number is Neutral, \nPlease Enter The Other Number \n");
        goto Up;
    }
    if(No%2==0)
    {
        printf("\n Given Number is Even");
    }
    else
    {
        printf("\n Given Number is Odd");
    }

    printf("\n Thanks!!!");

    getch();
    return 0;
}
