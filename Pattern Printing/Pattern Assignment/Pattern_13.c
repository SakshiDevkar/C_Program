#include<stdio.h>
#include<conio.h>

int main()
{
    int R = 0,C = 0;
    char ch = 'A';

    for(R = 1; R <= 5; R++)
    {
        for(ch = 'A',C = 1; C <= 5; C++)
        {
          if(R == 1 || R == 5)
          {
              printf(" %c ",ch);
              ch++;
          }
          else
          {
              if(C == 1 || C == 5)
              {
                  printf(" %c ",ch);
                  ch = ch +4;
              }
              else
              {
                  printf("   ");
              }
          }
        }
            printf("\n");
    }
    getch();
    return 0;
}


