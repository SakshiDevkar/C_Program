#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int num[size] = {}, i = 0 , Max = 0 , Sec_Max = 0 ,Flag = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Element[%d] = ",i+1);
        scanf("%d",&num[i]);
    }

    for( i = 0; i < size; i++)
    {
        if((i == 0) || (num[i] > Max))
        {
            Max = num[i];
        }
    }

    for( i = 0; i < size; i++)
    {
        if(num[i] == Max)
        {
            continue;
        }
        if((Flag == 0) || (num[i] > Sec_Max))
        {
            Sec_Max = num[i];
            Flag = 1;
        }
    }

    printf("\n Maximum Element in Array is = %d.",Max);
    printf("\n 2nd Maximum Element in Array is = %d",Sec_Max);

    getch();
    return 0;
}
