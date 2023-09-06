#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[20] = {'\0'};
    int Len = 0;

    printf("\n Enter a String : ");
    gets(cSrc);

    for(Len = 0; cSrc[Len] != '\0'; Len++);

    printf("\n Length of Given String is = %d",Len);

    getch();
    return 0;
}

