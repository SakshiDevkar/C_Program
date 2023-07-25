#include<stdio.h>
#include<conio.h>
#define size 5


int main()
{
    int i = 0 , Sum = 0, num[size];

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Element value %d = ",i+1);
        scanf("%d",&num[i]);
    }
    for(i = 0; i < size; i++)
    {
        Sum += num[i];
    }

    printf("\n Sum of Array = %d", Sum);

    getch();
    return 0;

}
