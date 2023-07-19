#include<stdio.h>
#include<conio.h>
#define size 5

int main()
{
    int i = 0 , Src = 0, num[size];

    for(i = 0; i < size; i++)
    {
        printf("\n Enter %d Element = ",i+1);
        scanf("%d",&num[i]);
    }

    printf("\n Enter Element to be searched = ");
    scanf("%d",&Src);

    for(i = 0; i < size; i++)
    {
        if(num[i] == Src)
        {
            break;
        }
    }
    if(i < size)
    {
        printf("\n\n\t\tEntered element %d is found at index Number %d.",Src,i);
    }
    else
    {
        printf("\n\n\t\tEntered element is not found in any index.");
    }

    getch();
    return 0;
}


