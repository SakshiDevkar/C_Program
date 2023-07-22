#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0 , Min = 0, num[size];

    for(i = 0; i < size; i++)
    {
        printf("\n Enter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    for(i = 0; i < size; i++)
    {
        if( (i == 0) || (num[i] < Min))
        {
            Min = num[i];
        }
    }

    printf("\n Maximum Numbers in array is = %d.",Min);

}
