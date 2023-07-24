#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0 , E_Cnt = 0 , O_Cnt = 0, Z_Cnt = 0, num[size];

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
        else if(num[i] % 2 == 0)
        {
            E_Cnt++;
        }
        else
        {
            O_Cnt++;
        }
    }

    printf("\n Even Numbers count in array = %d.",E_Cnt);
    printf("\n Odd Numbers count in array = %d.",O_Cnt);
    printf("\n Zero Numbers count in array = %d.",Z_Cnt);

    getch();
    return 0;
}

