#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 15;

    int  *Ptr = &No;
    void *vPtr = &No;

    printf("\n Address of No = %d",&No);
    printf("\n Address of Ptr : %d",&Ptr);
    printf("\n value In Ptr : %d",Ptr);
    printf("\n Value In No : %d",No);
    printf("\n Value In No by Pointer : %d",*Ptr);

    printf("\n Address of vPtr : %d",&vPtr);
    printf("\n value In vPtr : %d",vPtr);
    //printf("\n value of No by Void Pointer : %d",*vPtr);

    getch();
    return 0;

}

