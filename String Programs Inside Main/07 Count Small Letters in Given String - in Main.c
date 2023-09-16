//Count Small Letter in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Small_Cnt = 0, i = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 97 && cSrc[i] <= 122)
        {
            Small_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Samll Letter in Given  String is = %d", Small_Cnt);

    getch();
    return 0;
}

