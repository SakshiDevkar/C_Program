#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, DCnt = 0;

    printf("\n Enter A Positive Number = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
       DCnt++;
    }

    printf("\n Enter Sum of %d is = %d",No,DCnt);

    getch();
    return 0;
}
