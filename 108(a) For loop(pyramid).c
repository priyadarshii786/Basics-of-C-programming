/* To print
            !!!!*!!!!
            !!!*!*!!!
            !!*!*!*!!
            !*!*!*!*!
            *!*!*!*!*           */

#include <stdio.h>
int main()
{
    int rows, columns, k;

    for (rows = 1; rows <= 5; rows++)
    {
        k = 1;
        for (columns = 1; columns <= 9; columns++)
        {
            if (columns >= 6 - rows && columns <= 4 + rows && k)
            {
                printf("*");
                k = 0;
            }
            else
            {
                printf("!"); /*instead of space introduced new symbol to get printed */
                k = 1;
            }
        }

        printf("\n");
    }

    return 0;
}