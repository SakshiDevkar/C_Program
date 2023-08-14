#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Temp = 0, ZCnt = 0;

    printf("\n Enter A Positive Number = ");
    scanf("%d",&No);

    for(Temp = No; Temp > 0; Temp /= 10)
    {
       if((Temp % 10) == 0)
       {
           ZCnt++;
       }
    }

    printf("\n Enter Sum of %d is = %d",No,ZCnt);

    getch();
    return 0;
}
