//Count Special  Symbol in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'};
    int Sp_Cnt = 0, i = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(!(cSrc[i] >= 'a' && cSrc[i] <= 'z') && !(cSrc[i] >= 'A' && cSrc[i] <= 'Z') && !(cSrc[i] >= '0' && cSrc[i] <= '9'))
        {
            Sp_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Special Symbol in Given  String is = %d", Sp_Cnt);

    getch();
    return 0;
}

