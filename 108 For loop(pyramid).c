/*To print 
             *    
            * *
           * * *
          * * * *
         * * * * *            */


#include<stdio.h>
int main()
{
    int rows,columns,k;

    for(rows=1;rows<=5;rows++)
    {
        k=1;/*yahi k=1 likhna padega, upar me variable initialisation ke time me aisa likhne se kaam ni chalega*/

        for(columns=1;columns<=9;columns++)
        {
            if(columns>=6-rows && columns<=4+rows && k)
            {
                printf("*");
                k=0;   /*denoting the condition of falsity*/

            }
            else
            {
                printf(" ");
                k=1;    /*denoting the condition of truth*/

            }
        }

        printf("\n");
    }

    return 0;
}