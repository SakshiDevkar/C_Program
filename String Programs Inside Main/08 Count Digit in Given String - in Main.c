//Count Digit in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[0] = {'\0'};
    int D_Cnt = 0, i = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            D_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Samll Letter in Given  String is = %d", D_Cnt);

    getch();
    return 0;
}

