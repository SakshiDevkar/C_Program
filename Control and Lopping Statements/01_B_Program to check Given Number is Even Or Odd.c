//Program To Check Whether Given Number is Even or Odd - Using if... else if

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if(No==0)
    {
        printf("Given Number is Neutral");
    }
    else if(No%2==0)
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
