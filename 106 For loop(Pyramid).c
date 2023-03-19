/*To print upside down left-aligned right angle triangle
                      ******
                      *****
                      ****
                      ***
                      **
                      *                */

#include<stdio.h>
int main()
{
    int rows,columns;
    for(rows=1;rows<=6;rows++)
    {
        for(columns=1;columns<=6;columns++)
        {
            if(columns<=7-rows)
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