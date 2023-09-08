//Count Vowels in Given String
#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int v_Cnt = 0, i = 0;

    puts("\n Enter a String : ");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == 'a' || cSrc[i] == 'A' || cSrc[i] == 'u' || cSrc[i] == 'U' || cSrc[i] == 'e' || cSrc[i] == 'E' || cSrc[i] == 'i' || cSrc[i] == 'I' || cSrc[i] == 'o' || cSrc[i] == 'O')
        {
            v_Cnt++;
        }
        i++;
    }

    printf("\n Count Of Vowels in Given  String is = %d", v_Cnt);

    getch();
    return 0;
}

