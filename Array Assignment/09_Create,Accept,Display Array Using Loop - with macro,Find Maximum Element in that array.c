#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0 , Max = 0, num[size];

    for(i = 0; i < size; i++)
    {
        printf("\n Enter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    for(i = 0; i < size; i++)
    {
        if( (i == 0) || (num[i] > Max))
        {
            Max = num[i];
        }
    }

    printf("\n Maximum Numbers in array is = %d.",Max);

}
