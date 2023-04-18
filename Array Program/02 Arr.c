
#include<conio.h>

int main()
{
    char iNum[5] = {10,55,88,15,3};

    printf("\n Value of 101 Element = %d .",iNum[0]);
    printf("\n Value of 102 Element = %d .",iNum[1]);
    printf("\n Value of 103 Element = %d .",iNum[2]);
    printf("\n Value of 104 Element = %d .",iNum[3]);
    printf("\n Value of 105 Element = %d .",iNum[4]);

    getch();

    iNum[3] = 105;    ///  105

    iNum[4] = iNum[0];   ///  10

    iNum[0]++;         ///  11

    iNum[2] += 5;     /// iNum[2] = iNum[2] + 5;

    printf("\n ================================================\n");

    printf("\n Value of 401 Element = %d .",iNum[0]);  //  11
    printf("\n Value of 502 Element = %d .",iNum[1]);  //  55
    printf("\n Value of 603 Element = %d .",iNum[2]);  //  93
    printf("\n Value of 704 Element = %d .",iNum[3]);  //  105
    printf("\n Value of 805 Element = %d .",iNum[4]);  //  10

    printf("\n\n Press any key to continue... ");

    getch();
    return 0;
}
