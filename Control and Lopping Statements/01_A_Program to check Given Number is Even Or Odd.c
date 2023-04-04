//Program To Check Whether Given Number is Even or Odd - Using if... else

#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("\n Enter the Number = ");
    scanf("%d",&No);

    if(No%2==0)
    {
        printf("\n Given Number is Even");
    }
    else
    {
        printf("\n Given Number is Odd");
    }

    prinf("\n Thanks!!!")

    getch();
    return 0;
}
