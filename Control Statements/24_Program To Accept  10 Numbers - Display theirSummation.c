#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Sum = 0, Cnt = 0,Num = 0;

    printf("\n How Many Numbers Do You Have =");
    scanf("%d",&Num);

    for(Cnt = 1;  Cnt <= Num; Cnt++)
    {
        printf("\n\t Enter Number %d = ",Cnt);
        scanf("%d",&No);

        Sum = Sum + No; //Sum += No;
    }

    printf("\n Summation of Given Numbers = %d",Sum);

    getch();
    return 0;
}
