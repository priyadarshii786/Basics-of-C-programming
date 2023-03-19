/*To print right-aligned right angled triangle
                      *
                     **
                    ***
                   ****
                  *****
*/


#include<stdio.h>
int main()
{
    int rows,columns;
    for(rows=1;rows<=5;rows++)
    {
        for(columns=1;columns<=5;columns++)
        {
            if(columns>=6-rows) //see below for concept
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


/*step 1: box banao    | | | | |*|
                       | | | |*|*|
                       | | |*|*|*|
                       | |*|*|*|*|
                       |*|*|*|*|*|


step 2: Rows   Columns
        1        5
        2      4 5
        3    3 4 5        these all are basically column ka jagah jaha * print krwaana hai
        4  2 3 4 5
        5  2 3 4 5


step 3: smarter way me likhna

       rows    Columns
       1        column>=5
       2        column>=4
       3        column>=3
       4        column>=2
       5        column>=1


step 4: generalise karna(that is aisa likhna hai ki rows and columns me relation baith jaaye)
 
         column>=6-rows




*/