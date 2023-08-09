#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, DSum = 0;

    printf("\n Enter A Positive Number = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
        DSum += Temp % 10;
    }

    printf("\n Enter Sum of %d is = %d",No,DSum);

    getch();
    return 0;
}
