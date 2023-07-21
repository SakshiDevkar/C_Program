#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int num[size] = {} , i = 0 , Cnt = 0 , Ele = 0;

    for(i = 0; i < size; i++)
    {
        printf("\n Enter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n Enter Element to find its count = ");
    scanf("%d",&Ele);

    for(i = 0; i < size; i++)
    {
        if(num[i] == Ele)
        {
            Cnt++;
        }
    }

     printf("\n Entered Element %d Count in Array = %d",Ele,Cnt);

     getch();
     return 0;
}
