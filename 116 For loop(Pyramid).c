/* to print

*****    
 *****
  *****
   *****
    *****
    
    */


#include<stdio.h>
int main()
{
    int rows,columns;

    for(rows=1;rows<=5;rows++)
    {
        for(columns=1;columns<=9;columns++)
        {
            if(columns>=rows && columns<=4+rows)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }

        }
        printf("\n");

    }
    return 0;
}
