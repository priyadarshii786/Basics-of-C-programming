/*To print 
            *
           ***
          *****
         *******
        *********    */



#include <stdio.h>
int main()
{
    int rows,columns;
    for(rows=1;rows<=5;rows++)
    {
        for(columns=1;columns<=9;columns++)
        {
            if(columns>=6-rows && columns<=4+rows)   /*see below for concept*/
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


/* step 1: box banao   
        | | | | |*| | | | |
        | | | |*|*|*| | | |
        | | |*|*|*|*|*| | |
        | |*|*|*|*|*|*|*| |
        |*|*|*|*|*|*|*|*|*|


    step 2: Now see ki kaha kaha * print karwaana hai
    
    so, rows   columns
         1           5
         2         4,5,6
         3       3,4,5,6,7       these all are basically column ka jagah jaha jaha * print krwaana hai
         4     2,3,4,5,6,7,8
         5   1,2,3,4,5,6,7,8,9

    
    step 3: smarter way me likhna hai

          rows                columns
          1           columns>=5 && columns<=5
          2           columns>=4 && columns<=6
          3           columns>=3 && columns<=7
          4           columns>=2 && columns<=8
          5           columns>=1 && columns<=9


    step 4: generalise way me likhna(matlab aisa likhna hai ki rows and columns me relation baithe)

          Rows                      Columns
          rows         columns>=6-rows && columns<=4+rows



*/