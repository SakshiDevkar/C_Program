#include<stdio.h>
#include<conio.h>

#define No_Of_Prods 5

struct Product
{
    int P_Id;
    char P_Name[10];
    float P_S_Price;
    float P_P_Price;
};

int main()
{
    int i = 0;
    struct Product P_Arr[No_Of_Prods];

    // Accept Product Details
    printf("\n\n Accepting Product Details =>\n");

    //Loop To Accept Details
    for(i = 0; i < No_Of_Prods; i++)
    {
        printf("\n Enter %d Product ID = ",i+1);
        scanf("%d",&P_Arr[i].P_Id);
        printf("\n Enter %d Product Name = ",i+1);
        scanf("%s",&P_Arr[i].P_Name);
        printf("\n Enter %d Product Sales Price = ",i+1);
        scanf("%f",&P_Arr[i].P_S_Price);
        printf("\n Enter %d Product Purchase Price = ",i+1);
        scanf("%f",&P_Arr[i].P_P_Price);
    }

    system("cls");

    printf("\n\n=================================================\n");

    //display Product detalis
    printf("\n Display Product Details => \n");

    for(i = 0; i < No_Of_Prods; i++)
    {
        printf("\n %d Product Details => ID = %d. \n Name = %s. \n Sales Price = %0.2f. \n Purchase Price = %0.2f.\n ",i+1,P_Arr[i].P_Id,P_Arr[i].P_Name,P_Arr[i].P_S_Price,P_Arr[i].P_P_Price);
    }

    printf("\n\n===================================================\n");

    return 0;
}

