#include<stdio.h>
#include<conio.h>

int main()
{
    int iNo = 21, iNum = 55;
    int  *iPtr1 = &iNo;
    int  *iPtr2 = &iNum;

    printf("\n Value of iNo = %d", iNo);
    printf("\n Address of iNo = %d",&iNo);
    printf("\n Value of iNo Using its Pointer iPtr1 = %d",*iPtr1);
    printf("\n Address of iNo Using iPtr1 = %d",iPtr1);
    printf("\n Address of iPtr = %d",&iPtr1);


    printf("\n Value of iNum = %d", iNum);
    printf("\n Address of iNum = %d",&iNum);
    printf("\n Value of Variable Using its Pointer iPtr2 = %d",*iPtr2);
    printf("\n Address of variable Using iPtr2 = %d",iPtr2);
    printf("\n Address of iPtr2 = %d",&iPtr2);


    printf("\n value = %d", &(*iPtr1));
    printf("\n value = %d", &(*iPtr2));

    getch();
    return 0;

}
