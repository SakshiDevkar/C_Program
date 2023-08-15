// Program To Calculate Factorial

#include<stdio.h>
#include<conio.h>

int Factorial(int);

int main()
{
    auto int No = 0, Fact = 0;

    printf("\n Enter Number To Calculate its Factorial = ");
    scanf("%d",&No);

    Fact = Factorial(No);

    printf("\n Factorial Of Number %d is = %d",No,Fact);

    getch();
    return 0;

}

int Factorial(int Num)
{
    register int Fac = 0;

    for(Fac = 1; Num > 0; Num--)
    {
        printf("\n %5d = %4d * %3d",Fac*Num, Fac, Num);
        Fac *= Num;
    }
    return Fac;
}
