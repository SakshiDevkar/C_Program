// Program To Calculate Factorial
#include<stdio.h>
#include<conio.h>

static int Fact = 0;
void Factorial(int);

int main()
{
    int No = 0;

    printf("\n Enter Number To Calculate its Factorial = ");
    scanf("%d",&No);

    Factorial(No);

    printf("\n Factorial Of Number %d is = %d",No,Fact);

    getch();
    return 0;

}

void Factorial(int Num)
{
    for(Fact = 1; Num > 0; Num--)
    {
        printf("\n %5d = %4d * %3d",Fact*Num, Fact, Num);
        Fact *= Num;
    }
}

