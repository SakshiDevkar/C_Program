//Count White Space in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Space_Cnt = 0, i = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            Space_Cnt++;
        }
        i++;
    }

    printf("\n Count Of White Space in Given  String is = %d", Space_Cnt);

    getch();
    return 0;
}

