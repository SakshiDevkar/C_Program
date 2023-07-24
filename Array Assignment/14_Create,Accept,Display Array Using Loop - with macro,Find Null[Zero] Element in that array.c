#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0 , Z_Cnt = 0 , num[size];

    for(i = 0; i < size; i++)
    {
        printf("\n Enter Element %d = ",i+1);
        scanf("%d",&num[i]);
    }

    for(i = 0; i < size; i++)
    {
        if(num[i] == 0)
        {
            Z_Cnt++;
        }
    }

    printf("\n Zero count in array = %d.",Z_Cnt);

    getch();
    return 0;
}

