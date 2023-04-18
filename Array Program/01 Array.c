#include<stdio.h>
#include<conio.h>

int main()
{
    char Arr[5] = {15,49,70,99,122};               // Declaration with Partial Inilization

    printf("\n Value of 1 Element = <%c> .",Arr[0]);
    printf("\n Value of 2 Element = {%c} .",Arr[1]);
    printf("\n Value of 3 Element = [%c] .",Arr[2]);
    printf("\n Value of 4 Element = |%c| .",Arr[3]);
    printf("\n Value of 5 Element = *%c* .",Arr[4]);

    getch();
    return 0;
}
